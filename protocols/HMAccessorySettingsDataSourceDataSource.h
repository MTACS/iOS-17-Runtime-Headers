
@protocol HMAccessorySettingsDataSourceDataSource <NSObject>

@required

- (HMHome *)accessorySettingsDataSource:(HMAccessorySettingsDataSource *)arg1 homeWithHomeIdentifier:(NSUUID *)arg2;
- (bool)accessorySettingsDataSource:(HMAccessorySettingsDataSource *)arg1 transformHomeUUID:(NSUUID *)arg2 accessoryUUID:(NSUUID *)arg3 toClientHomeIdentifier:(id*)arg4 clientAccessoryIdentifier:(id*)arg5;
- (bool)accessorySettingsDataSource:(HMAccessorySettingsDataSource *)arg1 transformHomeUUID:(NSUUID *)arg2 mediaSystemUUID:(NSUUID *)arg3 toClientHomeIdentifier:(id*)arg4 clientMediaSystemIdentifier:(id*)arg5;

@end
