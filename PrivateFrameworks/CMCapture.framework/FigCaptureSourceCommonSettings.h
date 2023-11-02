
@interface FigCaptureSourceCommonSettings : NSObject {
    bool  _RGBIRStereoFusionThresholdsEnabled;
    bool  _flashMitigationRequired;
    bool  _frameRateSwitchBasedOnMotionForVFRDisabled;
    int  _initialMemoryPoolSizeMB;
    float  _livePhotoJPEGIntermediateCompressionRatioDefaultOverride;
    bool  _livePhotoVitalityScoringSupported;
    NSDictionary * _photoProcessingTimeRangesInMS;
    bool  _previewRegistrationExcludeStaticComponentFromAlignmentShiftsEnabled;
    int  _previewRegistrationType;
    bool  _realtimeFSDNetSupported;
    bool  _variableFrameRateVideoCaptureFromFWSupported;
    bool  _videoStabilizationAdaptiveOverscanSupported;
}

@property (nonatomic, readonly) bool RGBIRStereoFusionThresholdsEnabled;
@property (nonatomic, readonly) bool flashMitigationRequired;
@property (nonatomic, readonly) bool frameRateSwitchBasedOnMotionForVFRDisabled;
@property (nonatomic, readonly) int initialMemoryPoolSizeMB;
@property (nonatomic, readonly) float livePhotoJPEGIntermediateCompressionRatioDefaultOverride;
@property (nonatomic, readonly) bool livePhotoVitalityScoringSupported;
@property (nonatomic, readonly) NSDictionary *photoProcessingTimeRangesInMS;
@property (nonatomic, readonly) bool previewRegistrationExcludeStaticComponentFromAlignmentShiftsEnabled;
@property (nonatomic, readonly) int previewRegistrationType;
@property (nonatomic, readonly) bool realtimeFSDNetSupported;
@property (nonatomic, readonly) bool variableFrameRateVideoCaptureFromFWSupported;
@property (nonatomic, readonly) bool videoStabilizationAdaptiveOverscanSupported;

- (bool)RGBIRStereoFusionThresholdsEnabled;
- (void)dealloc;
- (bool)flashMitigationRequired;
- (bool)frameRateSwitchBasedOnMotionForVFRDisabled;
- (int)initialMemoryPoolSizeMB;
- (float)livePhotoJPEGIntermediateCompressionRatioDefaultOverride;
- (bool)livePhotoVitalityScoringSupported;
- (id)photoProcessingTimeRangesInMS;
- (bool)previewRegistrationExcludeStaticComponentFromAlignmentShiftsEnabled;
- (int)previewRegistrationType;
- (bool)realtimeFSDNetSupported;
- (bool)variableFrameRateVideoCaptureFromFWSupported;
- (bool)videoStabilizationAdaptiveOverscanSupported;

@end
