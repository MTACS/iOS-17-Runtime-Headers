
@protocol HFCameraTimelapseClipInfoProvider

@required

- (HFCameraClipPosition *)timelapseClipPositionForDate:(NSDate *)arg1 inHighQualityClip:(HMCameraClip *)arg2;
- (NSURL *)timelapseURLForTimelapseClip:(HMCameraClip *)arg1;

@end
