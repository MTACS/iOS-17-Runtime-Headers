
@interface HMDHomeRemoteEventRouterClientFactory : NSObject <HMDHomeRemoteEventRouterClientFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)primaryResidentClientWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9;
- (id)residentClientWithAccessoryUUID:(id)arg1 homeUUID:(id)arg2 queue:(id)arg3 dataSource:(id)arg4 messageDispatcher:(id)arg5 notificationCenter:(id)arg6 requestMessageName:(id)arg7 updateMessageName:(id)arg8 storeReadHandle:(id)arg9 storeWriteHandle:(id)arg10;

@end
