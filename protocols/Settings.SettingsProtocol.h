
@protocol Settings.SettingsProtocol <Settings.SettingsBaseProtocol>

@required

- (void)setSettingsHost:(id <_TtP8Settings20SettingsHostProtocol_>)arg1;
- (<_TtP8Settings20SettingsHostProtocol_> *)settingsHost;

@optional

- (void)didUnselect;
- (void)isCloudSyncEnabled:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)popNavigationStack;
- (void)setCloudSyncEnabled:(bool)arg1;
- (void)willSelect;
- (void)willSelect:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)willSelectWithNavigationPath:(_TtC8Settings22SettingsNavigationPath *)arg1;
- (void)willSelectWithRevealElementKey:(NSString *)arg1;
- (void)willSelectWithSidebarItemWithUUID:(NSString *)arg1;

@end
