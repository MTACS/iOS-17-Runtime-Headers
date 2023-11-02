
@protocol _INPBSetLabeledSettingIntent <NSObject>

@required

- (bool)hasIntentMetadata;
- (bool)hasLabeledValue;
- (bool)hasSettingMetadata;
- (bool)hasTemporalEventTrigger;
- (_INPBIntentMetadata *)intentMetadata;
- (NSString *)labeledValue;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setLabeledValue:(NSString *)arg1;
- (void)setSettingMetadata:(_INPBSettingMetadata *)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (_INPBSettingMetadata *)settingMetadata;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;

@end
