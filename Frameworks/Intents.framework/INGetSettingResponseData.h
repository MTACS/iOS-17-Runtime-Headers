
@interface INGetSettingResponseData : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {
    long long  _binaryValue;
    long long  _boundedValue;
    NSString * _labeledValue;
    INNumericSettingValue * _numericValue;
    INSettingMetadata * _settingMetadata;
}

@property (nonatomic, readonly) long long binaryValue;
@property (nonatomic, readonly) long long boundedValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *labeledValue;
@property (nonatomic, readonly, copy) INNumericSettingValue *numericValue;
@property (nonatomic, readonly, copy) INSettingMetadata *settingMetadata;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (long long)binaryValue;
- (long long)boundedValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingMetadata:(id)arg1 numericValue:(id)arg2 boundedValue:(long long)arg3 binaryValue:(long long)arg4 labeledValue:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)labeledValue;
- (id)numericValue;
- (id)settingMetadata;

@end
