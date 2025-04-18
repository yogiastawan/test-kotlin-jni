#include <string.h>
#include <testjni.h>

JNIEXPORT jstring JNICALL Java_org_example_App_helloFromC(JNIEnv *env, jobject obj, jstring name) {
    const char *nam = (*env)->GetStringUTFChars(env, name, NULL);
    char msg[48] = "Hello ";
    strcat(msg, nam);

    (*env)->ReleaseStringUTFChars(env, name, nam);

    return (*env)->NewStringUTF(env, msg);
}