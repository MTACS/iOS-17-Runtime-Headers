
@protocol HMAccessoryInfoDataProviderDelegate <NSObject>

@optional

- (void)accessoryInfoDataProvider:(HMAccessoryInfoDataProvider *)arg1 didReceiveUpdatesForAccessoryWithIdentifier:(NSUUID *)arg2 accountInfo:(HMAccessoryInfoAccount *)arg3;
- (void)accessoryInfoDataProvider:(HMAccessoryInfoDataProvider *)arg1 didReceiveUpdatesForAccessoryWithIdentifier:(NSUUID *)arg2 primaryUserInfo:(HMAccessoryInfoPrimaryUser *)arg3;
- (void)accessoryInfoDataProvider:(HMAccessoryInfoDataProvider *)arg1 didReceiveUpdatesForAccessoryWithIdentifier:(NSUUID *)arg2 wifiNetworkInfo:(HMFWiFiNetworkInfo *)arg3;

@end
