
@protocol _INPBSetNumericSettingIntent <NSObject>

@required

- (int)StringAsAction:(NSString *)arg1;
- (int)StringAsBoundedValue:(NSString *)arg1;
- (int)action;
- (NSString *)actionAsString:(int)arg1;
- (int)boundedValue;
- (NSString *)boundedValueAsString:(int)arg1;
- (bool)hasAction;
- (bool)hasBoundedValue;
- (bool)hasIntentMetadata;
- (bool)hasNumericValue;
- (bool)hasSettingMetadata;
- (bool)hasTemporalEventTrigger;
- (_INPBIntentMetadata *)intentMetadata;
- (_INPBNumericSettingValue *)numericValue;
- (void)setAction:(int)arg1;
- (void)setBoundedValue:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasBoundedValue:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setNumericValue:(_INPBNumericSettingValue *)arg1;
- (void)setSettingMetadata:(_INPBSettingMetadata *)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (_INPBSettingMetadata *)settingMetadata;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;

@end
