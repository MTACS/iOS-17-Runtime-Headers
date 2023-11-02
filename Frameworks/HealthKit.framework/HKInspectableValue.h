
@interface HKInspectableValue : NSObject <HKCodedObject, NSCopying, NSSecureCoding> {
    HKConcept * _dataAbsentReason;
    HKConcept * _ontologyConcept;
    <NSObject><NSSecureCoding> * _value;
    long long  _valueType;
}

@property (nonatomic, readonly, copy) NSNumber *booleanValue;
@property (nonatomic, readonly, copy) HKCodedQuantity *codedQuantityValue;
@property (nonatomic, readonly, copy) HKCodedValueCollection *codedValueCollection;
@property (nonatomic, readonly) HKUCUMUnitDisplayConverter *converter;
@property (nonatomic, readonly, copy) HKConcept *dataAbsentReason;
@property (nonatomic, readonly, copy) NSArray *dataAbsentReasonCodings;
@property (nonatomic, readonly, copy) NSDateComponents *dateComponentsValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *inspectableIntegerValue;
@property (nonatomic, readonly, copy) NSArray *medicalCodings;
@property (nonatomic, readonly, copy) HKMedicalDateInterval *medicalDateIntervalValue;
@property (nonatomic, readonly, copy) HKMedicalDate *medicalDateValue;
@property (nonatomic, readonly, copy) HKConcept *ontologyConcept;
@property (nonatomic, readonly, copy) HKRatioValue *ratioValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *unitString;
@property (nonatomic, readonly) <NSObject><NSSecureCoding> *value;
@property (nonatomic, readonly) long long valueType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (id)inspectableValueWithBoolean:(id)arg1;
+ (id)inspectableValueWithCodedQuantity:(id)arg1;
+ (id)inspectableValueWithCodedValueCollection:(id)arg1;
+ (id)inspectableValueWithDataAbsentReasonCodings:(id)arg1;
+ (id)inspectableValueWithDateComponents:(id)arg1;
+ (id)inspectableValueWithInteger:(id)arg1;
+ (id)inspectableValueWithMedicalCodings:(id)arg1;
+ (id)inspectableValueWithMedicalDate:(id)arg1;
+ (id)inspectableValueWithMedicalDateInterval:(id)arg1;
+ (id)inspectableValueWithNull;
+ (id)inspectableValueWithRatio:(id)arg1;
+ (id)inspectableValueWithString:(id)arg1;
+ (id)inspectableValueWithValueType:(long long)arg1 value:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_assertValueClass:(Class)arg1;
- (void)_assertValueType;
- (id)_initWithValueType:(long long)arg1 value:(id)arg2;
- (void)_setDataAbsentReason:(id)arg1;
- (void)_setOntologyConcept:(id)arg1;
- (id)_unitStringForCodedValueCollection:(id)arg1;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)booleanValue;
- (id)codedQuantityValue;
- (id)codedValueCollection;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)converter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataAbsentReason;
- (id)dataAbsentReasonCodings;
- (id)dateComponentsValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)inspectableIntegerValue;
- (bool)isEqual:(id)arg1;
- (id)medicalCodings;
- (id)medicalDateIntervalValue;
- (id)medicalDateValue;
- (id)ontologyConcept;
- (id)ratioValue;
- (id)stringValue;
- (id)unitString;
- (id)value;
- (long long)valueType;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)_displayStringForCodedValueCollection:(id)arg1;
- (id)_joinValueStrings:(id)arg1;
- (id)_stringForMedicalCodings:(id)arg1;
- (id)_stringForMedicalDateInterval;
- (id)_stringForQuantity:(id)arg1;
- (id)_stringForTimeSinceMidnight;
- (id)displayString;

@end
