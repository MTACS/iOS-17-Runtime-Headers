
@interface TIAnalyticsNumberFieldSpec : TIAnalyticsFieldSpec {
    bool  _isInteger;
    NSNumber * _maxValue;
    NSNumber * _minValue;
    NSNumber * _significantDigits;
}

@property (nonatomic, readonly) bool isInteger;
@property (nonatomic, readonly) NSNumber *maxValue;
@property (nonatomic, readonly) NSNumber *minValue;
@property (nonatomic, readonly) NSNumber *significantDigits;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 isInteger:(bool)arg2 minValue:(id)arg3 maxValue:(id)arg4 significantDigits:(id)arg5;
- (bool)isInteger;
- (id)maxValue;
- (id)minValue;
- (id)significantDigits;
- (bool)validate:(id)arg1 error:(id*)arg2;

@end
