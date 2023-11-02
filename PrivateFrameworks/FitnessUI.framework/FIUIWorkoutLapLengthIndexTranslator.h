
@interface FIUIWorkoutLapLengthIndexTranslator : NSObject {
    HKUnit * _distanceUnit;
}

@property (nonatomic, retain) HKUnit *distanceUnit;

- (void).cxx_destruct;
- (id)distanceUnit;
- (long long)indexForValue:(double)arg1;
- (id)initWithDistanceUnit:(id)arg1;
- (void)setDistanceUnit:(id)arg1;
- (double)valueForIndex:(long long)arg1;
- (double)valueTranslatedFromDistanceUnit:(double)arg1;
- (double)valueTranslatedIntoDistanceUnit:(double)arg1;

@end
