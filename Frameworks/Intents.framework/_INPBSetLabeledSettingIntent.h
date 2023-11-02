
@interface _INPBSetLabeledSettingIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetLabeledSettingIntent> {
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSString * _labeledValue;
    _INPBSettingMetadata * _settingMetadata;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLabeledValue;
@property (nonatomic, readonly) bool hasSettingMetadata;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, copy) NSString *labeledValue;
@property (nonatomic, retain) _INPBSettingMetadata *settingMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasLabeledValue;
- (bool)hasSettingMetadata;
- (bool)hasTemporalEventTrigger;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)labeledValue;
- (bool)readFrom:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLabeledValue:(id)arg1;
- (void)setSettingMetadata:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)settingMetadata;
- (id)temporalEventTrigger;
- (void)writeTo:(id)arg1;

@end
