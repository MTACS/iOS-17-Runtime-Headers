
@interface SBSystemNotesSwipeMetricSettings : PTSettings {
    double  _cornerDistanceBeforeScalingForDismiss;
    double  _flickVelocityThreshold;
    double  _panDistanceBeforeScaling;
    double  _panDistancePer1xScaling;
    double  _panInitialThumbnailScale;
    double  _scaleThresholdBeforeFullSize;
}

@property (nonatomic) double cornerDistanceBeforeScalingForDismiss;
@property (nonatomic) double flickVelocityThreshold;
@property (nonatomic) double panDistanceBeforeScaling;
@property (nonatomic) double panDistancePer1xScaling;
@property (nonatomic) double panInitialThumbnailScale;
@property (nonatomic) double scaleThresholdBeforeFullSize;

+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (double)cornerDistanceBeforeScalingForDismiss;
- (double)flickVelocityThreshold;
- (double)panDistanceBeforeScaling;
- (double)panDistancePer1xScaling;
- (double)panInitialThumbnailScale;
- (double)scaleThresholdBeforeFullSize;
- (void)setCornerDistanceBeforeScalingForDismiss:(double)arg1;
- (void)setDefaultValues;
- (void)setFlickVelocityThreshold:(double)arg1;
- (void)setPanDistanceBeforeScaling:(double)arg1;
- (void)setPanDistancePer1xScaling:(double)arg1;
- (void)setPanInitialThumbnailScale:(double)arg1;
- (void)setScaleThresholdBeforeFullSize:(double)arg1;

@end
