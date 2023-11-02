
@interface HFNumberValueConstraints : NSObject <NAIdentifiable> {
    NSNumber * _maxValue;
    NSNumber * _minValue;
    NSNumber * _stepValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *maxValue;
@property (nonatomic, readonly, copy) NSNumber *minValue;
@property (nonatomic, readonly, copy) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HFNumberRange *validRange;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)_normalizeRangeValue:(id)arg1 withinRange:(id)arg2;
- (id)_normalizeStepValue:(id)arg1 withinRange:(id)arg2;
- (id)boundedValueForValue:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3;
- (id)initWithValidRange:(id)arg1 stepValue:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)maxValue;
- (id)minValue;
- (id)normalizedRangeForRange:(id)arg1;
- (id)normalizedValueForValue:(id)arg1;
- (id)percentageConstraints;
- (id)percentageConstraintsWithinRange:(id)arg1;
- (id)roundedValueForValue:(id)arg1;
- (id)stepValue;
- (id)validRange;

@end
