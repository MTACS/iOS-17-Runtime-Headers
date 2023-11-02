
@protocol _INPBSetTemporalSettingIntent <NSObject>

@required

- (int)StringAsAction:(NSString *)arg1;
- (int)action;
- (NSString *)actionAsString:(int)arg1;
- (bool)hasAction;
- (bool)hasIntentMetadata;
- (bool)hasSettingMetadata;
- (bool)hasTemporalEventTrigger;
- (bool)hasTimeValue;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setAction:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setSettingMetadata:(_INPBSettingMetadata *)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (void)setTimeValue:(_INPBDateTimeRangeValue *)arg1;
- (_INPBSettingMetadata *)settingMetadata;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;
- (_INPBDateTimeRangeValue *)timeValue;

@end
