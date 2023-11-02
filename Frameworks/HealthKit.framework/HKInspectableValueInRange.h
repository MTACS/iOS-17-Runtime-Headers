
@interface HKInspectableValueInRange : NSObject <NSSecureCoding> {
    HKInspectableValueCollection * _currentValue;
    NSDate * _date;
    HKInspectableValue * _highValue;
    HKInspectableValue * _lowValue;
    NSString * _unitString;
}

@property (nonatomic, readonly) HKInspectableValueCollection *currentValue;
@property (nonatomic, readonly) long long currentValueRelation;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly) bool hasRenderableContent;
@property (nonatomic, readonly) HKInspectableValue *highValue;
@property (nonatomic, readonly) NSNumber *highValueNumberRepresentation;
@property (nonatomic, readonly) HKInspectableValue *lowValue;
@property (nonatomic, readonly) NSNumber *lowValueNumberRepresentation;
@property (nonatomic, readonly, copy) NSString *unitString;

+ (bool)supportsSecureCoding;
+ (id)valueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;

- (void).cxx_destruct;
- (void)_assertValidRange;
- (id)_currentValueDoubleRepresentation;
- (id)_initValueInRangeWithLow:(id)arg1 high:(id)arg2 currentValue:(id)arg3 unit:(id)arg4;
- (id)_numberForValue:(id)arg1;
- (id)_numberForValueCollection:(id)arg1;
- (void)_setUnitString:(id)arg1;
- (id)currentValue;
- (long long)currentValueRelation;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasRenderableContent;
- (id)highValue;
- (id)highValueNumberRepresentation;
- (id)initWithCoder:(id)arg1;
- (id)lowValue;
- (id)lowValueNumberRepresentation;
- (void)setDate:(id)arg1;
- (id)unitString;

@end
