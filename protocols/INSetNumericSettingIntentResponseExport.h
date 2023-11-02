
@protocol INSetNumericSettingIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (NSString *)errorDetail;
- (INNumericSettingValue *)maxValue;
- (INNumericSettingValue *)minValue;
- (INNumericSettingValue *)oldValue;
- (void)setErrorDetail:(NSString *)arg1;
- (void)setMaxValue:(INNumericSettingValue *)arg1;
- (void)setMinValue:(INNumericSettingValue *)arg1;
- (void)setOldValue:(INNumericSettingValue *)arg1;
- (void)setUpdatedValue:(INNumericSettingValue *)arg1;
- (INNumericSettingValue *)updatedValue;

@end
