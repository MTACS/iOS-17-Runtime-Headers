
@interface _INPBSetLabeledSettingIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSetLabeledSettingIntentResponse> {
    NSString * _errorDetail;
    struct { }  _has;
    NSString * _oldValue;
    NSString * _updatedValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorDetail;
@property (nonatomic, readonly) bool hasErrorDetail;
@property (nonatomic, readonly) bool hasOldValue;
@property (nonatomic, readonly) bool hasUpdatedValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *oldValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *updatedValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDetail;
- (bool)hasErrorDetail;
- (bool)hasOldValue;
- (bool)hasUpdatedValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)oldValue;
- (bool)readFrom:(id)arg1;
- (void)setErrorDetail:(id)arg1;
- (void)setOldValue:(id)arg1;
- (void)setUpdatedValue:(id)arg1;
- (id)updatedValue;
- (void)writeTo:(id)arg1;

@end
