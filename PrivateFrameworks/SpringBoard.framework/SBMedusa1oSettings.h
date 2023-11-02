
@interface SBMedusa1oSettings : PTSettings {
    bool  _clipRotationRegions;
    bool  _debugColorRotationRegions;
    bool  _debugRotationCenter;
    bool  _fencesRotation;
    double  _gapSwipeBuffer;
    unsigned long long  _millisecondsBetweenResizeSteps;
    double  _rotationSlowdownFactor;
    double  _zoomOutRotationFactor;
}

@property (nonatomic) bool clipRotationRegions;
@property (nonatomic) bool debugColorRotationRegions;
@property (nonatomic) bool debugRotationCenter;
@property (nonatomic) bool fencesRotation;
@property (nonatomic) double gapSwipeBuffer;
@property (nonatomic) unsigned long long millisecondsBetweenResizeSteps;
@property (nonatomic) double rotationSlowdownFactor;
@property (nonatomic) double zoomOutRotationFactor;

+ (id)settingsControllerModule;

- (bool)clipRotationRegions;
- (bool)debugColorRotationRegions;
- (bool)debugRotationCenter;
- (bool)fencesRotation;
- (double)gapSwipeBuffer;
- (unsigned long long)millisecondsBetweenResizeSteps;
- (double)rotationSlowdownFactor;
- (void)setClipRotationRegions:(bool)arg1;
- (void)setDebugColorRotationRegions:(bool)arg1;
- (void)setDebugRotationCenter:(bool)arg1;
- (void)setDefaultValues;
- (void)setFencesRotation:(bool)arg1;
- (void)setGapSwipeBuffer:(double)arg1;
- (void)setMillisecondsBetweenResizeSteps:(unsigned long long)arg1;
- (void)setRotationSlowdownFactor:(double)arg1;
- (void)setZoomOutRotationFactor:(double)arg1;
- (double)zoomOutRotationFactor;

@end
