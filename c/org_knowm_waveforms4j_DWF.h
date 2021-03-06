/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_knowm_waveforms4j_DWF */

#ifndef _Included_org_knowm_waveforms4j_DWF
#define _Included_org_knowm_waveforms4j_DWF
#ifdef __cplusplus
extern "C" {
#endif
#undef org_knowm_waveforms4j_DWF_WAVEFORM_CHANNEL_1
#define org_knowm_waveforms4j_DWF_WAVEFORM_CHANNEL_1 0L
#undef org_knowm_waveforms4j_DWF_WAVEFORM_CHANNEL_2
#define org_knowm_waveforms4j_DWF_WAVEFORM_CHANNEL_2 1L
#undef org_knowm_waveforms4j_DWF_OSCILLOSCOPE_CHANNEL_1
#define org_knowm_waveforms4j_DWF_OSCILLOSCOPE_CHANNEL_1 0L
#undef org_knowm_waveforms4j_DWF_OSCILLOSCOPE_CHANNEL_2
#define org_knowm_waveforms4j_DWF_OSCILLOSCOPE_CHANNEL_2 1L
#undef org_knowm_waveforms4j_DWF_AD2_MAX_BUFFER_SIZE
#define org_knowm_waveforms4j_DWF_AD2_MAX_BUFFER_SIZE 8192L
/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDeviceOpen
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDeviceOpen
  (JNIEnv *, jobject);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDeviceCloseAll
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDeviceCloseAll
  (JNIEnv *, jobject);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalIOOutputEnableSet
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalIOOutputEnableSet
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalIOOutputSet
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalIOOutputSet
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalIOReset
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalIOReset
  (JNIEnv *, jobject);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalIOStatus
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalIOStatus
  (JNIEnv *, jobject);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalIOInputStatus
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalIOInputStatus
  (JNIEnv *, jobject);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalOutEnableSet
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalOutEnableSet
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalOutInternalClockInfo
 * Signature: ()D
 */
JNIEXPORT jdouble JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalOutInternalClockInfo
  (JNIEnv *, jobject);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalOutDividerSet
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalOutDividerSet
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalOutCounterSet
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalOutCounterSet
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalOutCounterInitSet
 * Signature: (IZI)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalOutCounterInitSet
  (JNIEnv *, jobject, jint, jboolean, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalOutConfigure
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalOutConfigure
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfDigitalOutReset
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfDigitalOutReset
  (JNIEnv *, jobject);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInChannelEnableSet
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInChannelEnableSet
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInChannelRangeSet
 * Signature: (ID)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInChannelRangeSet
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInFrequencySet
 * Signature: (D)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInFrequencySet
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInBufferSizeMax
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInBufferSizeMax
  (JNIEnv *, jobject);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInBufferSizeSet
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInBufferSizeSet
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInStatus
 * Signature: (Z)B
 */
JNIEXPORT jbyte JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInStatus
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInStatusSamplesValid
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInStatusSamplesValid
  (JNIEnv *, jobject);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInStatusData
 * Signature: (II)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInStatusData
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInConfigure
 * Signature: (ZZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInConfigure
  (JNIEnv *, jobject, jboolean, jboolean);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInAcquisitionModeSet
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInAcquisitionModeSet
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInTriggerAutoTimeoutSet
 * Signature: (D)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInTriggerAutoTimeoutSet
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInTriggerSourceSet
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInTriggerSourceSet
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInTriggerTypeSet
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInTriggerTypeSet
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInTriggerConditionSet
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInTriggerConditionSet
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInTriggerChannelSet
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInTriggerChannelSet
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogInTriggerLevelSet
 * Signature: (D)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogInTriggerLevelSet
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutTriggerSourceInfo
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutTriggerSourceInfo
  (JNIEnv *, jobject, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutNodeEnableSet
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutNodeEnableSet
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutNodeFunctionSet
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutNodeFunctionSet
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutNodeFrequencySet
 * Signature: (ID)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutNodeFrequencySet
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutNodeAmplitudeSet
 * Signature: (ID)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutNodeAmplitudeSet
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutNodeOffsetSet
 * Signature: (ID)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutNodeOffsetSet
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutNodeSymmetrySet
 * Signature: (ID)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutNodeSymmetrySet
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutConfigure
 * Signature: (IZ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutConfigure
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutRepeatSet
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutRepeatSet
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutRunSet
 * Signature: (ID)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutRunSet
  (JNIEnv *, jobject, jint, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogOutIdleSet
 * Signature: (II)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogOutIdleSet
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogIOChannelNodeSet
 * Signature: (IID)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogIOChannelNodeSet
  (JNIEnv *, jobject, jint, jint, jdouble);

/*
 * Class:     org_knowm_waveforms4j_DWF
 * Method:    FDwfAnalogIOEnableSet
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_org_knowm_waveforms4j_DWF_FDwfAnalogIOEnableSet
  (JNIEnv *, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif
