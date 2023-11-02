
@interface CAMCaptureConversions : NSObject

+ (long long)AVCaptureColorSpaceForColorSpace:(long long)arg1 hasValidConversion:(bool*)arg2;
+ (id)AVCaptureDeviceTypeForCAMCaptureDevice:(long long)arg1;
+ (long long)AVCaptureDeviceVideoZoomRampTuningForCAMVideoZoomRampTuning:(long long)arg1;
+ (long long)AVCapturePhotoQualityPrioritizationForCAMPhotoQualityPrioritization:(long long)arg1;
+ (long long)AVDevicePositionForCAMDevicePosition:(long long)arg1;
+ (id)AVSemanticStyleForCAMSemanticStyle:(id)arg1;
+ (long long)CAMDevicePositionForAVDevicePosition:(long long)arg1;
+ (unsigned long long)CAMMetadataObjectSyntheticFocusModeForAVCaptureMetadataObjectSyntheticFocusMode:(unsigned long long)arg1;
+ (long long)CAMPhotoQualityPrioritizationForAVCapturePhotoQualityPrioritization:(long long)arg1;
+ (id)CAMSemanticStyleForAVSemanticStyle:(id)arg1 presetType:(long long)arg2;
+ (struct { int x1; int x2; })CMVideoDimensionsForCAMPhotoResolution:(long long)arg1;
+ (long long)captureDigitalFlashModeForLowLightMode:(long long)arg1;
+ (long long)captureExposureModeForExposureMode:(long long)arg1;
+ (long long)captureFlashModeForFlashMode:(long long)arg1;
+ (long long)captureFocusModeForFocusMode:(long long)arg1 isPerformingContrastBasedFocus:(bool)arg2;
+ (long long)captureHDRModeForHDRMode:(long long)arg1;
+ (long long)captureTorchModeForTorchMode:(long long)arg1;
+ (long long)captureWhiteBalanceModeForWhiteBalanceMode:(long long)arg1;
+ (long long)exposureModeForCaptureExposureMode:(long long)arg1;
+ (long long)flashModeForCaptureFlashMode:(long long)arg1;
+ (long long)flashModeForTorchMode:(long long)arg1;
+ (long long)focusModeForCaptureFocusMode:(long long)arg1;
+ (long long)hdrModeForCaptureHDRMode:(long long)arg1;
+ (long long)lowLightStatusForCaptureStatus:(long long)arg1;
+ (long long)overCapturePreviewStatusForAVPreviewStatus:(long long)arg1;
+ (id)previewLayerVideoGravityForPreviewViewAspectMode:(long long)arg1;
+ (long long)shallowDepthOfFieldStatusForCaptureStatus:(long long)arg1;
+ (long long)stagePreviewStatusForCaptureStatus:(long long)arg1;
+ (long long)torchModeForCaptureTorchMode:(long long)arg1;
+ (long long)torchModeForFlashMode:(long long)arg1;
+ (long long)viewContentModeForPreviewViewAspectMode:(long long)arg1;
+ (long long)whiteBalanceModeForCaptureWhiteBalanceMode:(long long)arg1;

@end
