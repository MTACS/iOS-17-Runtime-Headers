
@interface SBCornerFingerPanGestureSettings : PTSettings {
    unsigned long long  _tuning;
}

@property (nonatomic) unsigned long long tuning;

+ (id)settingsControllerModule;

- (double*)angleDegreesAscendingLUT:(bool)arg1;
- (double*)distanceMillimetersValues:(bool)arg1;
- (double)maximumActiveDistance:(bool)arg1;
- (void)setDefaultValues;
- (void)setTuning:(unsigned long long)arg1;
- (unsigned long long)tuning;
- (unsigned long long)vectorCount:(bool)arg1;

@end
