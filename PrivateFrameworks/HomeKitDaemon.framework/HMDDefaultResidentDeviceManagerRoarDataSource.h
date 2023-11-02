
@interface HMDDefaultResidentDeviceManagerRoarDataSource : NSObject <HMDResidentDeviceManagerRoarDataSource> {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isResidentCapable;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appleAccountManager;
- (id)createBackingStoreForHome:(id)arg1;
- (id)createElectionAddOnWithContext:(id)arg1;
- (id)createPrimaryResidentDiscoveryManagerWithQueue:(id)arg1;
- (id)firstCloudKitImportFuture;
- (id)init;
- (bool)isResidentCapable;
- (id)logIdentifierForHome:(id)arg1;
- (id)notificationCenter;
- (id)queue;

@end
