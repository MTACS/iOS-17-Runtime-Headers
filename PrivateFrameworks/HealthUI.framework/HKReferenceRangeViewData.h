
@interface HKReferenceRangeViewData : NSObject <NSCopying> {
    NSNumber * _rangeHigh;
    NSString * _rangeHighString;
    NSNumber * _rangeLow;
    NSString * _rangeLowString;
    NSString * _unitString;
    bool  _useOutOfRangeValueColor;
    NSNumber * _value;
    NSString * _valueString;
}

@property (nonatomic, copy) NSNumber *rangeHigh;
@property (nonatomic, copy) NSString *rangeHighString;
@property (nonatomic, copy) NSNumber *rangeLow;
@property (nonatomic, copy) NSString *rangeLowString;
@property (nonatomic, copy) NSString *unitString;
@property (nonatomic) bool useOutOfRangeValueColor;
@property (nonatomic, copy) NSNumber *value;
@property (nonatomic, copy) NSString *valueString;

+ (id)_codedQuantityForValue:(id)arg1;
+ (id)_codedQuantityForValueCollection:(id)arg1;
+ (id)referenceRangeViewDataFromInspectableValueInRange:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)rangeHigh;
- (id)rangeHighString;
- (id)rangeLow;
- (id)rangeLowString;
- (void)setRangeHigh:(id)arg1;
- (void)setRangeHighString:(id)arg1;
- (void)setRangeLow:(id)arg1;
- (void)setRangeLowString:(id)arg1;
- (void)setUnitString:(id)arg1;
- (void)setUseOutOfRangeValueColor:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValueString:(id)arg1;
- (id)unitString;
- (bool)useOutOfRangeValueColor;
- (id)value;
- (id)valueString;

@end
