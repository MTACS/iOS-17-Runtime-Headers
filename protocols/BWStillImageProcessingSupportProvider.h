
@protocol BWStillImageProcessingSupportProvider <NSObject>

@required

- (bool)demosaicedRawSupportedForCaptureType:(int)arg1;
- (bool)intelligentDistortionCorrectionSupportedForCaptureType:(int)arg1 portType:(NSString *)arg2;
- (bool)processingOnBeginMomentSupportedForCaptureSettings:(BWStillImageCaptureSettings *)arg1;
- (bool)rawNightModeSupportedForPortType:(NSString *)arg1;

@end
