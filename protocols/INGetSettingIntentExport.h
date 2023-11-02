
@protocol INGetSettingIntentExport <NSObject, JSExport>

@required

- (long long)confirmationValue;
- (id)init;
- (void)setConfirmationValue:(long long)arg1;
- (void)setSettingMetadata:(INSettingMetadata *)arg1;
- (INSettingMetadata *)settingMetadata;

@end
