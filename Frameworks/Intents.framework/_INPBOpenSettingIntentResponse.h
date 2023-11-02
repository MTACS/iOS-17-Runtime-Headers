
@interface _INPBOpenSettingIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBOpenSettingIntentResponse> {
    NSString * _errorDetail;
    struct { }  _has;
    NSString * _punchoutUrl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorDetail;
@property (nonatomic, readonly) bool hasErrorDetail;
@property (nonatomic, readonly) bool hasPunchoutUrl;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *punchoutUrl;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)errorDetail;
- (bool)hasErrorDetail;
- (bool)hasPunchoutUrl;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)punchoutUrl;
- (bool)readFrom:(id)arg1;
- (void)setErrorDetail:(id)arg1;
- (void)setPunchoutUrl:(id)arg1;
- (void)writeTo:(id)arg1;

@end
