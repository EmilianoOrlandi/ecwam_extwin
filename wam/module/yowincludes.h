!> \file yowncludes.h
!> some nice error macros.
!> if you want line numbers and filename ist the error message, just use this macros\n
!> Example:\n
!> if(error) ABORT("Ups")\n
!> if(mpierror) PARALLEL_ABORT("Ups", ierr)\n
!> \author Thomas Huxhorn
!> \date 2011-2012

#ifndef _INCLUDES_F90_
#define _INCLUDES_F90_

#define ABORT(var1) call abort((var1), line=__LINE__, file=__FILE__)
#define PARALLEL_ABORT(var1, var2) call abort((var1), errno=(var2), line=__LINE__, file=__FILE__)
#define WARN(var1) call warn((var1), line=__LINE__,  file=__FILE__)

! gfortran version 
#ifdef __GFORTRAN__
#define GCC_VERSION (__GNUC__ * 10000 \
                    + __GNUC_MINOR__ * 100 \
                    + __GNUC_PATCHLEVEL__)
#endif

#define B2MB (1.0/(1024*1024))
#endif