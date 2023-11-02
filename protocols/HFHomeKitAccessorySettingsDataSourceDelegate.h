
@protocol HFHomeKitAccessorySettingsDataSourceDelegate <NSObject>

@optional

- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(NSUUID *)arg1 settings:(NSArray *)arg2;
- (void)updateSettingValue:(id)arg1 forKeyPath:(NSString *)arg2 accessoryIdentifier:(NSUUID *)arg3;

@end
