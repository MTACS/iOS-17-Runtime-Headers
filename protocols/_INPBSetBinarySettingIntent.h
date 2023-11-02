
@protocol _INPBSetBinarySettingIntent <NSObject>

@required

- (int)StringAsBinaryValue:(NSString *)arg1;
- (int)binaryValue;
- (NSString *)binaryValueAsString:(int)arg1;
- (bool)hasBinaryValue;
- (bool)hasIntentMetadata;
- (bool)hasSettingMetadata;
- (bool)hasTemporalEventTrigger;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setBinaryValue:(int)arg1;
- (void)setHasBinaryValue:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setSettingMetadata:(_INPBSettingMetadata *)arg1;
- (void)setTemporalEventTrigger:(_INPBTemporalEventTrigger *)arg1;
- (_INPBSettingMetadata *)settingMetadata;
- (_INPBTemporalEventTrigger *)temporalEventTrigger;

@end
