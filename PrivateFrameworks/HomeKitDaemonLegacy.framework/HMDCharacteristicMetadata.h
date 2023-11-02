
@interface HMDCharacteristicMetadata : HMFObject <HMFDumpState, NSCopying, NSSecureCoding> {
    NSString * _format;
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
@property (nonatomic, readonly, copy) NSString *format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *manufacturerDescription;
@property (nonatomic, readonly) NSNumber *maxLength;
@property (nonatomic, readonly) NSNumber *maximumValue;
@property (nonatomic, readonly) NSNumber *minimumValue;
@property (nonatomic, readonly) NSNumber *stepValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *units;
@property (nonatomic, readonly, copy) NSArray *validValues;

+ (id)characteristicMetadataWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2 stepValue:(id)arg3 maxLength:(id)arg4 validValues:(id)arg5 format:(id)arg6 units:(id)arg7 manufacturerDescription:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)manufacturerDescription;
- (id)maxLength;
- (id)maximumValue;
- (id)minimumValue;
- (id)stepValue;
- (id)units;
- (id)validValues;

@end
