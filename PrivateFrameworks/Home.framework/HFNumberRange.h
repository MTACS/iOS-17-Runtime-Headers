
@interface HFNumberRange : NSObject <NAIdentifiable> {
    NSNumber * _maxValue;
    NSNumber * _midValue;
    NSNumber * _minValue;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { double x1; double x2; } floatRangeValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *maxValue;
@property (nonatomic, copy) NSNumber *midValue;
@property (nonatomic, copy) NSNumber *minValue;
@property (nonatomic, readonly, copy) NSNumber *spanValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (id)na_identity;
+ (id)rangeWithFloatRange:(struct { double x1; double x2; })arg1;
+ (id)rangeWithMaxValue:(id)arg1 minValue:(id)arg2;
+ (id)valueWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (struct { double x1; double x2; })floatRangeValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;
- (id)intersectRange:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mapValue:(id)arg1 fromRange:(id)arg2;
- (id)maxValue;
- (id)midValue;
- (id)minValue;
- (id)percentageValueForValue:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMidValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (id)spanValue;
- (unsigned long long)type;
- (id)unionRange:(id)arg1;

@end
