
@interface _INPBSetNumericSettingIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSetNumericSettingIntentResponse> {
    NSString * _errorDetail;
    struct { }  _has;
    _INPBNumericSettingValue * _maxValue;
    _INPBNumericSettingValue * _minValue;
    _INPBNumericSettingValue * _oldValue;
    _INPBNumericSettingValue * _updatedValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorDetail;
@property (nonatomic, readonly) bool hasErrorDetail;
@property (nonatomic, readonly) bool hasMaxValue;
@property (nonatomic, readonly) bool hasMinValue;
@property (nonatomic, readonly) bool hasOldValue;
@property (nonatomic, readonly) bool hasUpdatedValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBNumericSettingValue *maxValue;
@property (nonatomic, retain) _INPBNumericSettingValue *minValue;
@property (nonatomic, retain) _INPBNumericSettingValue *oldValue;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBNumericSettingValue *updatedValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDetail;
- (bool)hasErrorDetail;
- (bool)hasMaxValue;
- (bool)hasMinValue;
- (bool)hasOldValue;
- (bool)hasUpdatedValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)maxValue;
- (id)minValue;
- (id)oldValue;
- (bool)readFrom:(id)arg1;
- (void)setErrorDetail:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setOldValue:(id)arg1;
- (void)setUpdatedValue:(id)arg1;
- (id)updatedValue;
- (void)writeTo:(id)arg1;

@end
