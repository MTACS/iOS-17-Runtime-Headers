
@protocol _INPBGetSettingIntent <NSObject>

@required

- (int)StringAsConfirmationValue:(NSString *)arg1;
- (int)confirmationValue;
- (NSString *)confirmationValueAsString:(int)arg1;
- (bool)hasConfirmationValue;
- (bool)hasIntentMetadata;
- (bool)hasSettingMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setConfirmationValue:(int)arg1;
- (void)setHasConfirmationValue:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setSettingMetadata:(_INPBSettingMetadata *)arg1;
- (_INPBSettingMetadata *)settingMetadata;

@end
