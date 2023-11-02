
@protocol HMDSettingsControllerDelegate

@required

- (void)settingsController:(void *)arg1 didUpdateWithCompletion:(void *)arg2; // needs 2 arg types, found 7: <HMDSettingsControllerProtocol> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (HMDSettingOnChangeAttachedUpdatesResult *)settingsController:(id <HMDSettingsControllerProtocol>)arg1 willUpdateSettingAtKeyPath:(NSString *)arg2 withValue:(HMSettingValue *)arg3;
- (NSDictionary *)settingsControllerFollowerKeyPaths:(id <HMDSettingsControllerProtocol>)arg1;

@end
