
@interface HMCharacteristicMetadata : NSObject <HFStateDumpBuildable, HMObjectMerge, NSCopying, NSSecureCoding> {
    NSString * _format;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _manufacturerDescription;
    NSNumber * _maxLength;
    NSNumber * _maximumValue;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
    NSString * _units;
    NSArray * _validValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_isNumeric;
@property (nonatomic, readonly) HFNumberValueConstraints *hf_numericValueConstraints;
@property (nonatomic, copy) NSString *manufacturerDescription;
@property (nonatomic, retain) NSNumber *maxLength;
@property (nonatomic, retain) NSNumber *maximumValue;
@property (nonatomic, retain) NSNumber *minimumValue;
@property (nonatomic, retain) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, copy) NSString *units;
@property (nonatomic, copy) NSArray *validValues;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)manufacturerDescription;
- (id)maxLength;
- (id)maximumValue;
- (bool)mergeFromNewObject:(id)arg1;
- (id)minimumValue;
- (void)setFormat:(id)arg1;
- (void)setManufacturerDescription:(id)arg1;
- (void)setMaxLength:(id)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setStepValue:(id)arg1;
- (void)setUnits:(id)arg1;
- (void)setValidValues:(id)arg1;
- (id)stepValue;
- (id)uniqueIdentifier;
- (id)units;
- (id)validValues;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_characteristicValueForPercentage:(double)arg1;
- (bool)hf_isEqualToMetadata:(id)arg1;
- (bool)hf_isInteger;
- (bool)hf_isNumeric;
- (bool)hf_isValidValue:(id)arg1;
- (id)hf_normalizedValueForValue:(id)arg1;
- (id)hf_numericValueConstraints;
- (id)hf_percentageForCharacteristicValue:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_valueRoundedToNearestStepValue:(id)arg1;

@end
