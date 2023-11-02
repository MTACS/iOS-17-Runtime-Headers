
@interface PXStoryConcreteTimelineSettings : PXSettings {
    long long  _initialProductionCountLimit;
    double  _initialProductionTimeLimit;
    double  _kenBurnsPanSpeed;
    double  _kenBurnsRotationSpeed;
    double  _kenBurnsScaleSpeed;
    double  _kenBurnsScaleSpeedDuringRotation;
    long long  _rotationInitialProductionCountLimit;
    double  _rotationInitialProductionTimeLimit;
    double  _subsequentProductionTimeLimit;
}

@property (nonatomic) long long initialProductionCountLimit;
@property (nonatomic) double initialProductionTimeLimit;
@property (nonatomic) double kenBurnsPanSpeed;
@property (nonatomic) double kenBurnsRotationSpeed;
@property (nonatomic) double kenBurnsScaleSpeed;
@property (nonatomic) double kenBurnsScaleSpeedDuringRotation;
@property (nonatomic) long long rotationInitialProductionCountLimit;
@property (nonatomic) double rotationInitialProductionTimeLimit;
@property (nonatomic) double subsequentProductionTimeLimit;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (long long)initialProductionCountLimit;
- (double)initialProductionTimeLimit;
- (double)kenBurnsPanSpeed;
- (double)kenBurnsRotationSpeed;
- (double)kenBurnsScaleSpeed;
- (double)kenBurnsScaleSpeedDuringRotation;
- (id)parentSettings;
- (long long)rotationInitialProductionCountLimit;
- (double)rotationInitialProductionTimeLimit;
- (void)setDefaultValues;
- (void)setInitialProductionCountLimit:(long long)arg1;
- (void)setInitialProductionTimeLimit:(double)arg1;
- (void)setKenBurnsPanSpeed:(double)arg1;
- (void)setKenBurnsRotationSpeed:(double)arg1;
- (void)setKenBurnsScaleSpeed:(double)arg1;
- (void)setKenBurnsScaleSpeedDuringRotation:(double)arg1;
- (void)setRotationInitialProductionCountLimit:(long long)arg1;
- (void)setRotationInitialProductionTimeLimit:(double)arg1;
- (void)setSubsequentProductionTimeLimit:(double)arg1;
- (double)subsequentProductionTimeLimit;

@end
