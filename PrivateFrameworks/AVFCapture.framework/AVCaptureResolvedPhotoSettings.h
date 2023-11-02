
@interface AVCaptureResolvedPhotoSettings : NSObject {
    bool  _fastCapturePrioritizationEnabled;
    AVCaptureResolvedPhotoSettingsInternal * _internal;
}

@property (getter=isContentAwareDistortionCorrectionEnabled, readonly) bool contentAwareDistortionCorrectionEnabled;
@property (readonly) struct { int x1; int x2; } deferredPhotoProxyDimensions;
@property (getter=isDualCameraFusionEnabled, readonly) bool dualCameraFusionEnabled;
@property (readonly) struct { int x1; int x2; } embeddedThumbnailDimensions;
@property (readonly) unsigned long long expectedPhotoCount;
@property (getter=isFastCapturePrioritizationEnabled, readonly) bool fastCapturePrioritizationEnabled;
@property (getter=isFlashEnabled, readonly) bool flashEnabled;
@property (getter=cam_isRecordingMovieForLivePhoto, nonatomic, readonly) bool isRecordingMovieForLivePhoto;
@property (readonly) struct { int x1; int x2; } livePhotoMovieDimensions;
@property (readonly) struct { int x1; int x2; } photoDimensions;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } photoProcessingTimeRange;
@property (readonly) struct { int x1; int x2; } portraitEffectsMatteDimensions;
@property (readonly) struct { int x1; int x2; } previewDimensions;
@property (readonly) struct { int x1; int x2; } rawEmbeddedThumbnailDimensions;
@property (readonly) struct { int x1; int x2; } rawPhotoDimensions;
@property (getter=isRedEyeReductionEnabled, readonly) bool redEyeReductionEnabled;
@property (getter=isStillImageStabilizationEnabled, readonly) bool stillImageStabilizationEnabled;
@property (readonly) long long uniqueID;
@property (getter=isVirtualDeviceFusionEnabled, readonly) bool virtualDeviceFusionEnabled;

// Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture

+ (void)initialize;
+ (id)resolvedSettingsWithUniqueID:(long long)arg1 photoDimensions:(struct { int x1; int x2; })arg2 rawPhotoDimensions:(struct { int x1; int x2; })arg3 previewDimensions:(struct { int x1; int x2; })arg4 embeddedThumbnailDimensions:(struct { int x1; int x2; })arg5 rawEmbeddedThumbnailDimensions:(struct { int x1; int x2; })arg6 livePhotoMovieEnabled:(bool)arg7 livePhotoMovieDimensions:(struct { int x1; int x2; })arg8 portraitEffectsMatteDimensions:(struct { int x1; int x2; })arg9 hairSegmentationMatteDimensions:(struct { int x1; int x2; })arg10 skinSegmentationMatteDimensions:(struct { int x1; int x2; })arg11 teethSegmentationMatteDimensions:(struct { int x1; int x2; })arg12 glassesSegmentationMatteDimensions:(struct { int x1; int x2; })arg13 spatialOverCapturePhotoDimensions:(struct { int x1; int x2; })arg14 turboModeEnabled:(bool)arg15 flashEnabled:(bool)arg16 redEyeReductionEnabled:(bool)arg17 HDREnabled:(bool)arg18 adjustedPhotoFiltersEnabled:(bool)arg19 EV0PhotoDeliveryEnabled:(bool)arg20 stillImageStabilizationEnabled:(bool)arg21 virtualDeviceFusionEnabled:(bool)arg22 squareCropEnabled:(bool)arg23 deferredPhotoProxyDimensions:(struct { int x1; int x2; })arg24 photoProcessingTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg25 contentAwareDistortionCorrectionEnabled:(bool)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(bool)arg30;

- (id)_initWithUniqueID:(long long)arg1 photoDimensions:(struct { int x1; int x2; })arg2 rawPhotoDimensions:(struct { int x1; int x2; })arg3 previewDimensions:(struct { int x1; int x2; })arg4 embeddedThumbnailDimensions:(struct { int x1; int x2; })arg5 rawEmbeddedThumbnailDimensions:(struct { int x1; int x2; })arg6 livePhotoMovieEnabled:(bool)arg7 livePhotoMovieDimensions:(struct { int x1; int x2; })arg8 portraitEffectsMatteDimensions:(struct { int x1; int x2; })arg9 hairSegmentationMatteDimensions:(struct { int x1; int x2; })arg10 skinSegmentationMatteDimensions:(struct { int x1; int x2; })arg11 teethSegmentationMatteDimensions:(struct { int x1; int x2; })arg12 glassesSegmentationMatteDimensions:(struct { int x1; int x2; })arg13 spatialOverCapturePhotoDimensions:(struct { int x1; int x2; })arg14 turboModeEnabled:(bool)arg15 flashEnabled:(bool)arg16 redEyeReductionEnabled:(bool)arg17 HDREnabled:(bool)arg18 adjustedPhotoFiltersEnabled:(bool)arg19 EV0PhotoDeliveryEnabled:(bool)arg20 stillImageStabilizationEnabled:(bool)arg21 virtualDeviceFusionEnabled:(bool)arg22 squareCropEnabled:(bool)arg23 deferredPhotoProxyDimensions:(struct { int x1; int x2; })arg24 photoProcessingTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg25 contentAwareDistortionCorrectionEnabled:(bool)arg26 photoManifest:(id)arg27 digitalFlashUserInterfaceHints:(unsigned long long)arg28 digitalFlashUserInterfaceRGBEstimate:(id)arg29 captureBeforeResolvingSettingsEnabled:(bool)arg30;
- (void)dealloc;
- (id)debugDescription;
- (struct { int x1; int x2; })deferredPhotoProxyDimensions;
- (id)description;
- (id)digitalFlashRGBEstimate;
- (unsigned long long)digitalFlashUserInterfaceHints;
- (id)digitalFlashUserInterfaceRGBEstimate;
- (struct { int x1; int x2; })dimensionsForSemanticSegmentationMatteOfType:(id)arg1;
- (struct { int x1; int x2; })embeddedThumbnailDimensions;
- (unsigned long long)expectedPhotoCount;
- (bool)isAdjustedPhotoFilterRenderingEnabled;
- (bool)isCaptureBeforeResolvingSettingsEnabled;
- (bool)isContentAwareDistortionCorrectionEnabled;
- (bool)isDualCameraFusionEnabled;
- (bool)isEV0PhotoDeliveryEnabled;
- (bool)isFastCapturePrioritizationEnabled;
- (bool)isFlashEnabled;
- (bool)isHDREnabled;
- (bool)isRedEyeReductionEnabled;
- (bool)isSquareCropEnabled;
- (bool)isStillImageStabilizationEnabled;
- (bool)isTurboModeEnabled;
- (bool)isVirtualDeviceFusionEnabled;
- (struct { int x1; int x2; })livePhotoMovieDimensions;
- (bool)livePhotoMovieEnabled;
- (struct { int x1; int x2; })photoDimensions;
- (id)photoManifest;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })photoProcessingTimeRange;
- (struct { int x1; int x2; })portraitEffectsMatteDimensions;
- (struct { int x1; int x2; })previewDimensions;
- (struct { int x1; int x2; })rawEmbeddedThumbnailDimensions;
- (struct { int x1; int x2; })rawPhotoDimensions;
- (struct { int x1; int x2; })spatialOverCapturePhotoDimensions;
- (long long)uniqueID;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)cam_isRecordingMovieForLivePhoto;

@end
