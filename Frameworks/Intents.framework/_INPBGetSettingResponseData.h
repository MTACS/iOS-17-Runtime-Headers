
@interface _INPBGetSettingResponseData : PBCodable <NSCopying, NSSecureCoding, _INPBGetSettingResponseData> {
    int  _binaryValue;
    int  _boundedValue;
    struct { 
        unsigned int binaryValue : 1; 
        unsigned int boundedValue : 1; 
    }  _has;
    NSString * _labeledValue;
    _INPBNumericSettingValue * _numericValue;
    _INPBSettingMetadata * _settingMetadata;
}

@property (nonatomic) int binaryValue;
@property (nonatomic) int boundedValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBinaryValue;
@property (nonatomic) bool hasBoundedValue;
@property (nonatomic, readonly) bool hasLabeledValue;
@property (nonatomic, readonly) bool hasNumericValue;
@property (nonatomic, readonly) bool hasSettingMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *labeledValue;
@property (nonatomic, retain) _INPBNumericSettingValue *numericValue;
@property (nonatomic, retain) _INPBSettingMetadata *settingMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsBinaryValue:(id)arg1;
- (int)StringAsBoundedValue:(id)arg1;
- (int)binaryValue;
- (id)binaryValueAsString:(int)arg1;
- (int)boundedValue;
- (id)boundedValueAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBinaryValue;
- (bool)hasBoundedValue;
- (bool)hasLabeledValue;
- (bool)hasNumericValue;
- (bool)hasSettingMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)labeledValue;
- (id)numericValue;
- (bool)readFrom:(id)arg1;
- (void)setBinaryValue:(int)arg1;
- (void)setBoundedValue:(int)arg1;
- (void)setHasBinaryValue:(bool)arg1;
- (void)setHasBoundedValue:(bool)arg1;
- (void)setLabeledValue:(id)arg1;
- (void)setNumericValue:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (id)settingMetadata;
- (void)writeTo:(id)arg1;

@end
