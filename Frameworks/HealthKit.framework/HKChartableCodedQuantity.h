
@interface HKChartableCodedQuantity : NSObject <NSCopying> {
    NSArray * _codings;
    HKCodedQuantity * _originalCodedQuantity;
    HKCodedQuantity * _originalRangeHighCodedQuantity;
    HKCodedQuantity * _originalRangeLowCodedQuantity;
    HKQuantity * _quantity;
    NSNumber * _rangeHigh;
    NSNumber * _rangeLow;
}

@property (nonatomic, readonly, copy) NSArray *codings;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) bool hasRange;
@property (nonatomic, readonly) bool isInRange;
@property (nonatomic, copy) HKCodedQuantity *originalCodedQuantity;
@property (nonatomic, copy) HKCodedQuantity *originalRangeHighCodedQuantity;
@property (nonatomic, copy) HKCodedQuantity *originalRangeLowCodedQuantity;
@property (nonatomic, readonly, copy) HKQuantity *quantity;
@property (nonatomic, readonly, copy) NSNumber *rangeHigh;
@property (nonatomic, readonly, copy) NSNumber *rangeLow;

+ (id)_valueFromCodedQuantity:(id)arg1 inUnit:(id)arg2 error:(id*)arg3;
+ (id)chartableCodedQuantityWithCodings:(id)arg1 originalCodedQuantity:(id)arg2 originalRangeLowCodedQuantity:(id)arg3 originalRangeHighCodedQuantity:(id)arg4 error:(id*)arg5;
+ (id)converter;

- (void).cxx_destruct;
- (id)chartableCodedQuantityInUnit:(id)arg1 adoptUnitIfNullUnit:(bool)arg2 error:(id*)arg3;
- (id)chartableCodedQuantityInUnit:(id)arg1 error:(id*)arg2;
- (id)codings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValue;
- (double)doubleValueForUnit:(id)arg1;
- (bool)hasRange;
- (id)init;
- (id)initWithCodings:(id)arg1 quantity:(id)arg2 rangeLow:(id)arg3 rangeHigh:(id)arg4;
- (bool)isCompatibleWithUnit:(id)arg1;
- (bool)isInRange;
- (id)originalCodedQuantity;
- (id)originalRangeHighCodedQuantity;
- (id)originalRangeLowCodedQuantity;
- (id)quantity;
- (id)rangeHigh;
- (id)rangeLow;
- (void)setOriginalCodedQuantity:(id)arg1;
- (void)setOriginalRangeHighCodedQuantity:(id)arg1;
- (void)setOriginalRangeLowCodedQuantity:(id)arg1;

@end
