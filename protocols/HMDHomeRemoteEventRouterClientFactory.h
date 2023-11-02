
@protocol HMDHomeRemoteEventRouterClientFactory <NSObject>

@required

- (HMDRemoteEventRouterPrimaryResidentClient *)primaryResidentClientWithMessageTargetUUID:(NSUUID *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 dataSource:(id <HMDRemoteEventRouterClientDataSource>)arg3 messageDispatcher:(HMFMessageDispatcher *)arg4 notificationCenter:(NSNotificationCenter *)arg5 requestMessageName:(NSString *)arg6 updateMessageName:(NSString *)arg7 storeReadHandle:(id <HMELastEventStoreReadHandle>)arg8 storeWriteHandle:(id <HMELastEventStoreWriteHandle>)arg9;
- (HMDRemoteEventRouterResidentClient *)residentClientWithAccessoryUUID:(NSUUID *)arg1 homeUUID:(NSUUID *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 dataSource:(id <HMDRemoteEventRouterClientDataSource>)arg4 messageDispatcher:(HMFMessageDispatcher *)arg5 notificationCenter:(NSNotificationCenter *)arg6 requestMessageName:(NSString *)arg7 updateMessageName:(NSString *)arg8 storeReadHandle:(id <HMELastEventStoreReadHandle>)arg9 storeWriteHandle:(id <HMELastEventStoreWriteHandle>)arg10;

@end
