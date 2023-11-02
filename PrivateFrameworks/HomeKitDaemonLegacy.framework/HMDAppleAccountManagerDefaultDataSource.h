
@interface HMDAppleAccountManagerDefaultDataSource : NSObject <HMDAppleAccountManagerDataSource> {
    <HMDACAccountStore> * _accountStore;
    <HMDAPSConnection> * _apsConnection;
    NSNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) <HMDACAccountStore> *accountStore;
@property (readonly) <HMDAPSConnection> *apsConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountStore;
- (id)apsConnection;
- (id)initWithQueue:(id)arg1;
- (id)notificationCenter;
- (id)queue;

@end
