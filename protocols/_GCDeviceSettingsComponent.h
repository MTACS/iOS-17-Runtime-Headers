
@protocol _GCDeviceSettingsComponent <_GCDeviceComponent>

@required

- (NSString *)persistentIdentifierForSettings;
- (void)settingsDidChange;

@end
