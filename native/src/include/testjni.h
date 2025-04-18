#include <jni.h>

#ifndef __TESTJNI_H__
#define __TESTJNI_H__

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_org_example_App_helloFromC(JNIEnv *env,jobject obj, jstring name);

#ifdef __cplusplus
}
#endif
#endif /* __TESTJNI_H__ */
