/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class info_kghost_android_openvpn_ManagementSocket */

#ifndef _Included_info_kghost_android_openvpn_ManagementSocket
#define _Included_info_kghost_android_openvpn_ManagementSocket
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     info_kghost_android_openvpn_ManagementSocket
 * Method:    open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_info_kghost_android_openvpn_ManagementSocket_open
  (JNIEnv *, jclass, jstring);

/*
 * Class:     info_kghost_android_openvpn_ManagementSocket
 * Method:    read
 * Signature: (ILjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_info_kghost_android_openvpn_ManagementSocket_read__ILjava_nio_ByteBuffer_2II
  (JNIEnv *, jclass, jint, jobject, jint, jint);

/*
 * Class:     info_kghost_android_openvpn_ManagementSocket
 * Method:    read
 * Signature: (ILjava/nio/ByteBuffer;IILinfo/kghost/android/openvpn/FileDescriptorHolder;)I
 */
JNIEXPORT jint JNICALL Java_info_kghost_android_openvpn_ManagementSocket_read__ILjava_nio_ByteBuffer_2IILinfo_kghost_android_openvpn_FileDescriptorHolder_2
  (JNIEnv *, jclass, jint, jobject, jint, jint, jobject);

/*
 * Class:     info_kghost_android_openvpn_ManagementSocket
 * Method:    write
 * Signature: (ILjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_info_kghost_android_openvpn_ManagementSocket_write__ILjava_nio_ByteBuffer_2II
  (JNIEnv *, jclass, jint, jobject, jint, jint);

/*
 * Class:     info_kghost_android_openvpn_ManagementSocket
 * Method:    write
 * Signature: (ILjava/nio/ByteBuffer;IILinfo/kghost/android/openvpn/FileDescriptorHolder;)I
 */
JNIEXPORT jint JNICALL Java_info_kghost_android_openvpn_ManagementSocket_write__ILjava_nio_ByteBuffer_2IILinfo_kghost_android_openvpn_FileDescriptorHolder_2
  (JNIEnv *, jclass, jint, jobject, jint, jint, jobject);

/*
 * Class:     info_kghost_android_openvpn_ManagementSocket
 * Method:    close
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_info_kghost_android_openvpn_ManagementSocket_close
  (JNIEnv *, jclass, jint);

/*
 * Class:     info_kghost_android_openvpn_ManagementSocket
 * Method:    shutdown
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_info_kghost_android_openvpn_ManagementSocket_shutdown
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
