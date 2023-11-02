
@interface _INPBSetTemporalSettingIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetTemporalSettingIntent> {
    int  _action;
    struct { 
        unsigned int action : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBSettingMetadata * _settingMetadata;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
    _INPBDateTimeRangeValue * _timeValue;
}

@property (nonatomic) int action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAction;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSettingMetadata;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (nonatomic, readonly) bool hasTimeValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBSettingMetadata *settingMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, retain) _INPBDateTimeRangeValue *timeValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAction;
- (bool)hasIntentMetadata;
- (bool)hasSettingMetadata;
- (bool)hasTemporalEventTrigger;
- (bool)hasTimeValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setTimeValue:(id)arg1;
- (id)settingMetadata;
- (id)temporalEventTrigger;
- (id)timeValue;
- (void)writeTo:(id)arg1;

@end
