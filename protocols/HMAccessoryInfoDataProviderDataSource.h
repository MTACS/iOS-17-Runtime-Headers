
@protocol HMAccessoryInfoDataProviderDataSource <NSObject>

@required

- (HMHome *)accessoryInfoDataProvider:(HMAccessoryInfoDataProvider *)arg1 homeWithHomeIdentifier:(NSUUID *)arg2;
- (bool)accessoryInfoDataProvider:(HMAccessoryInfoDataProvider *)arg1 transformHomeUUID:(NSUUID *)arg2 accessoryUUID:(NSUUID *)arg3 toClientHomeIdentifier:(id*)arg4 clientAccessoryIdentifier:(id*)arg5;

@end
