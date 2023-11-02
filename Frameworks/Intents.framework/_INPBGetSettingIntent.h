
@interface _INPBGetSettingIntent : PBCodable <NSCopying, NSSecureCoding, _INPBGetSettingIntent> {
    int  _confirmationValue;
    struct { 
        unsigned int confirmationValue : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBSettingMetadata * _settingMetadata;
}

@property (nonatomic) int confirmationValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasConfirmationValue;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSettingMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBSettingMetadata *settingMetadata;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsConfirmationValue:(id)arg1;
- (int)confirmationValue;
- (id)confirmationValueAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasConfirmationValue;
- (bool)hasIntentMetadata;
- (bool)hasSettingMetadata;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfirmationValue:(int)arg1;
- (void)setHasConfirmationValue:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (id)settingMetadata;
- (void)writeTo:(id)arg1;

@end
