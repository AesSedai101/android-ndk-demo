//
// Created by Elsabe on 2015-09-05.
//
#include "jni.h"
#include "opengl.cpp"

JNIEXPORT void JNICALL Java_za_co_roshuis_ndk_OpenGLJNIWrapper_on_1surface_1created(JNIEnv *env, jclass type) {
    on_surface_created();
}

JNIEXPORT void JNICALL Java_za_co_roshuis_ndk_OpenGLJNIWrapper_on_1surface_1changed(JNIEnv * env, jclass cls, jint width, jint height) {
    on_surface_changed();
}

JNIEXPORT void JNICALL Java_za_co_roshuis_ndk_OpenGLJNIWrapper_on_1draw_1frame(JNIEnv * env, jclass cls) {
    on_draw_frame();
}