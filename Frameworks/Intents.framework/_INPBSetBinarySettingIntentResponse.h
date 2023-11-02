
@interface _INPBSetBinarySettingIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSetBinarySettingIntentResponse> {
    NSString * _errorDetail;
    struct { 
        unsigned int oldValue : 1; 
        unsigned int updatedValue : 1; 
    }  _has;
    int  _oldValue;
    int  _updatedValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorDetail;
@property (nonatomic, readonly) bool hasErrorDetail;
@property (nonatomic) bool hasOldValue;
@property (nonatomic) bool hasUpdatedValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) int oldValue;
@property (readonly) Class superclass;
@property (nonatomic) int updatedValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsOldValue:(id)arg1;
- (int)StringAsUpdatedValue:(id)arg1;
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
- (int)oldValue;
- (id)oldValueAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorDetail:(id)arg1;
- (void)setHasOldValue:(bool)arg1;
- (void)setHasUpdatedValue:(bool)arg1;
- (void)setOldValue:(int)arg1;
- (void)setUpdatedValue:(int)arg1;
- (int)updatedValue;
- (id)updatedValueAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
