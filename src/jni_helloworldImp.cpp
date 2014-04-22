#include <jni.h>
#include "jni_helloworld.h"
#include <stdio.h>
JNIEXPORT void JNICALL Java_jni_helloworld_disHelloWorld
(JNIEnv *env,jobject obj){
printf("Hello zzk!");
return;
}