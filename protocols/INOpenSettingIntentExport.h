
@protocol INOpenSettingIntentExport <NSObject, JSExport>

@required

- (id)init;
- (INSpeakableString *)searchQuery;
- (void)setSearchQuery:(INSpeakableString *)arg1;
- (void)setSettingMetadata:(INSettingMetadata *)arg1;
- (INSettingMetadata *)settingMetadata;

@end
