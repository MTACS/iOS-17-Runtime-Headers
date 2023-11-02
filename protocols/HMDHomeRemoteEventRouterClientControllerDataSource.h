
@protocol HMDHomeRemoteEventRouterClientControllerDataSource <NSObject>

@required

- (HMDDevice *)deviceForAccessoryUUID:(NSUUID *)arg1 forRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg2;
- (HMDDevice *)deviceForPrimaryResidentForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (void)discoverPrimaryResidentForEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (<HMELastEventStoreReadHandle> *)eventStoreReadHandleForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (<HMELastEventStoreWriteHandle> *)eventStoreWriteHandleForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (bool)isCurrentDevicePrimaryResidentForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (bool)isCurrentDeviceResidentCapableForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (bool)isMessagedHomepodSettingsEnabledForClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (bool)isNetworkAvailableForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (HMFMessageDispatcher *)messageDispatcherForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (NSNotificationCenter *)notificationCenterForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (id)primaryResidentChangeMonitorForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;
- (NSUUID *)primaryResidentDeviceIdentifierForRemoteEventRouterClientController:(HMDHomeRemoteEventRouterClientController *)arg1;

@end
