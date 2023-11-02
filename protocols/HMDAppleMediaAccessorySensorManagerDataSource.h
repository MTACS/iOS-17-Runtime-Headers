
@protocol HMDAppleMediaAccessorySensorManagerDataSource <NSObject>

@required

- (NSArray *)accessoriesWithHostUUID:(NSUUID *)arg1 forAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg2;
- (<HMDAccessoryBrowserProtocol> *)accessoryBrowserForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (HMDAccessory *)accessoryWithUUID:(NSUUID *)arg1 forAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg2;
- (bool)accountHasSentinelZoneForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (id)addAccessoryNotificationObjectForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (NAFuture *)fetchSentinelZoneDidFinishFutureForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (NSUUID *)homeUUIDForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (NSUUID *)hostUUIDForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (bool)isReadyForSensorPairing:(HMDAppleMediaAccessorySensorManager *)arg1;
- (bool)isResidentConfirmedForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (<HMMLogEventSubmitting> *)logSubmitterForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (HMFMessageDispatcher *)messageDispatcherForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (NSNotificationCenter *)notificationCenterForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;
- (void)performAfterDelay:(void *)arg1 block:(void *)arg2 queue:(void *)arg3; // needs 3 arg types, found 7: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, NSObject<OS_dispatch_queue> *
- (void)performLocalAddAccessoryWithDescription:(void *)arg1 progressHandlerDelegate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMSetupAccessoryDescription *, <HMDLocalAddAccessoryProgressDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)renameService:(HMDService *)arg1 name:(NSString *)arg2;
- (id)residentNotificationObjectForAppleMediaAccessorySensorManager:(HMDAppleMediaAccessorySensorManager *)arg1;

@end
