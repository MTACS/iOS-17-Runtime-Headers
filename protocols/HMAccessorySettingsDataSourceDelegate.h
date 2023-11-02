
@protocol HMAccessorySettingsDataSourceDelegate <NSObject>

@optional

- (void)accessorySettingsDataSource:(HMAccessorySettingsDataSource *)arg1 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(NSUUID *)arg2 settings:(NSArray *)arg3;

@end
