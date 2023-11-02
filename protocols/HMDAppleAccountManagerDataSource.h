
@protocol HMDAppleAccountManagerDataSource <NSObject>

@required

- (<HMDACAccountStore> *)accountStore;
- (<HMDAPSConnection> *)apsConnection;
- (NSNotificationCenter *)notificationCenter;
- (NSObject<OS_dispatch_queue> *)queue;

@end
