
@interface HKChartableCodedQuantitySet : NSObject <NSCopying> {
    NSArray * _codings;
    NSDate * _date;
    NSArray * _quantities;
}

@property (nonatomic, readonly, copy) NSArray *codings;
@property (nonatomic, readonly, copy) HKUnit *compatibleUnit;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSArray *quantities;

+ (id)setWithChartableQuantity:(id)arg1 date:(id)arg2;
+ (id)setWithMedicalCodings:(id)arg1 quantities:(id)arg2 date:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_initWithMedicalCodings:(id)arg1 date:(id)arg2 quantities:(id)arg3;
- (void)addChartableCodedQuantities:(id)arg1;
- (id)chartableCodedQuantitySetByChangingDate:(id)arg1;
- (id)chartableCodedQuantitySetConvertedToUnit:(id)arg1 error:(id*)arg2;
- (id)codings;
- (id)compatibleUnit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)init;
- (bool)isCompatibleWithUnit:(id)arg1;
- (double)maxValueForUnit:(id)arg1;
- (double)maxValueIncludingReferenceRangeForUnit:(id)arg1;
- (double)minValueForUnit:(id)arg1;
- (double)minValueIncludingReferenceRangeForUnit:(id)arg1;
- (id)quantities;

@end
