#include "PFSShell.h"
#include "iomanX_port.h"
#include <string>
PFSShell::PFSShell()
{
    //ctor
}

PFSShell::~PFSShell()
{
    //dtor
}

extern void set_atad_device_path(const char *path);
PFSShell::SelectDevice(std::string device)
{
    set_atad_device_path(device.c_str());

    /* mandatory */
    int result = _init_apa(0, NULL);
    if (result < 0) {
        fprintf(stderr, "(!) init_apa: failed with %d (%s)\n", result,
                strerror(-result));
        exit(1);
    }

    static const char *pfs_args[] =
        {
            "pfs.irx",
            "-m", "1",
            "-o", "1",
            "-n", "10",
            NULL};

    /* mandatory */
    result = _init_pfs(7, (char **)pfs_args);
    if (result < 0) {
        fprintf(stderr, "(!) init_pfs: failed with %d (%s)\n", result,
                strerror(-result));
        exit(1);
    }

    /* mandatory */
    result = _init_hdlfs(0, NULL);
    if (result < 0) {
        fprintf(stderr, "(!) init_hdlfs: failed with %d (%s)\n", result,
                strerror(-result));
        exit(1);
    }
    ctx->setup = 1;
    return (0);
}
