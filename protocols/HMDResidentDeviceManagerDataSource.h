
@protocol HMDResidentDeviceManagerDataSource <NSObject>

@required

- (HMDAppleAccountManager *)appleAccountManager;
- (<HMDPrimaryResidentElectionAddOn> *)createElectionAddOnWithContext:(id <HMDResidentDeviceManagerContext>)arg1;
- (bool)isResidentCapable;
- (NSString *)logIdentifierForHome:(HMDHome *)arg1;
- (NSNotificationCenter *)notificationCenter;
- (NSObject<OS_dispatch_queue> *)queue;

@end
