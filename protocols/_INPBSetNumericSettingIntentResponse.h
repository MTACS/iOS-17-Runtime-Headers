
@protocol _INPBSetNumericSettingIntentResponse <NSObject>

@required

- (NSString *)errorDetail;
- (bool)hasErrorDetail;
- (bool)hasMaxValue;
- (bool)hasMinValue;
- (bool)hasOldValue;
- (bool)hasUpdatedValue;
- (_INPBNumericSettingValue *)maxValue;
- (_INPBNumericSettingValue *)minValue;
- (_INPBNumericSettingValue *)oldValue;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setMaxValue:(_INPBNumericSettingValue *)arg1;
- (void)setMinValue:(_INPBNumericSettingValue *)arg1;
- (void)setOldValue:(_INPBNumericSettingValue *)arg1;
- (void)setUpdatedValue:(_INPBNumericSettingValue *)arg1;
- (_INPBNumericSettingValue *)updatedValue;

@end
