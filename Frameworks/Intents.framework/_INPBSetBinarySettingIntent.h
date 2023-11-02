
@interface _INPBSetBinarySettingIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetBinarySettingIntent> {
    int  _binaryValue;
    struct { 
        unsigned int binaryValue : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBSettingMetadata * _settingMetadata;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
}

@property (nonatomic) int binaryValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBinaryValue;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSettingMetadata;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBSettingMetadata *settingMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsBinaryValue:(id)arg1;
- (int)binaryValue;
- (id)binaryValueAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBinaryValue;
- (bool)hasIntentMetadata;
- (bool)hasSettingMetadata;
- (bool)hasTemporalEventTrigger;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBinaryValue:(int)arg1;
- (void)setHasBinaryValue:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)settingMetadata;
- (id)temporalEventTrigger;
- (void)writeTo:(id)arg1;

@end
