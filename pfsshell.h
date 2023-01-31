#ifndef PFSSHELL_H_INCLUDED
#define PFSSHELL_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus


/**
  * @brief initialize APA, HDLFS and PFS services. and assign path to APA for HDD accessing
  *
  *
  */
static int do_device(context_t *ctx, int argc, char *argv[])

/**
  * @brief write a file into HDD
  *
  *
  */
static int do_put(context_t *ctx, int argc, char *argv[])


/**
  * @brief pull a file into HDD
  *
  *
  */
static int do_get(context_t *ctx, int argc, char *argv[])


#ifdef __cplusplus
}
#endif // __cplusplus

#endif // PFSSHELL_H_INCLUDED
