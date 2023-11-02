
@interface _INPBSetNumericSettingIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetNumericSettingIntent> {
    int  _action;
    int  _boundedValue;
    struct { 
        unsigned int action : 1; 
        unsigned int boundedValue : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBNumericSettingValue * _numericValue;
    _INPBSettingMetadata * _settingMetadata;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
}

@property (nonatomic) int action;
@property (nonatomic) int boundedValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasBoundedValue;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasNumericValue;
@property (nonatomic, readonly) bool hasSettingMetadata;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBNumericSettingValue *numericValue;
@property (nonatomic, retain) _INPBSettingMetadata *settingMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (int)StringAsBoundedValue:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (int)boundedValue;
- (id)boundedValueAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAction;
- (bool)hasBoundedValue;
- (bool)hasIntentMetadata;
- (bool)hasNumericValue;
- (bool)hasSettingMetadata;
- (bool)hasTemporalEventTrigger;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)numericValue;
- (bool)readFrom:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setBoundedValue:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasBoundedValue:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setNumericValue:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)settingMetadata;
- (id)temporalEventTrigger;
- (void)writeTo:(id)arg1;

@end
