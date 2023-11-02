
@protocol HFHomeKitSettingItemProtocol <HFHomeKitItemProtocol>

@required

- (HFAccessorySettingsEntity *)entity;
- (<HFHomeKitSettingsVendor> *)homeKitSettingsVendor;
- (NSString *)settingKeyPath;

@end
