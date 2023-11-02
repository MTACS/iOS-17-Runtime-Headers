
@interface HMDAccountRegistry : HMFObject <HMFLogging, NSFastEnumeration> {
    HMDAppleAccountManager * _appleAccountManager;
    NSObject<OS_dispatch_queue> * _clientQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDRemoteAccountManager * _remoteAccountManager;
    bool  _started;
}

@property (nonatomic, readonly) NSArray *accounts;
@property (readonly) HMDAppleAccountManager *appleAccountManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDRemoteAccountManager *remoteAccountManager;
@property (readonly) bool started;
@property (readonly) Class superclass;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;
+ (id)sharedRegistry;

- (void).cxx_destruct;
- (void)__handleAddedRemoteAccount:(id)arg1;
- (void)__handleAppleAccountDeviceAdded:(id)arg1;
- (void)__handleAppleAccountHandlesUpdated:(id)arg1;
- (void)__handleAppleAccountUpdate:(id)arg1;
- (void)__handleRemovedRemoteAccount:(id)arg1;
- (void)_resolveAccountForHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)accountExistsForHandle:(id)arg1;
- (id)accountForHandle:(id)arg1;
- (id)accountForHandle:(id)arg1 exists:(bool*)arg2;
- (id)accounts;
- (id)appleAccountManager;
- (id)attributeDescriptions;
- (id)clientQueue;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (bool)deviceExistsForDevice:(id)arg1;
- (id)deviceForAddress:(id)arg1;
- (id)deviceForDevice:(id)arg1;
- (id)deviceForDevice:(id)arg1 exists:(bool*)arg2;
- (id)deviceForHandle:(id)arg1;
- (id)deviceForHandle:(id)arg1 exists:(bool*)arg2;
- (id)deviceForIDSIdentifier:(id)arg1;
- (id)deviceForIdentifier:(id)arg1;
- (id)deviceForPushToken:(id)arg1;
- (id)initWithAppleAccountManager:(id)arg1 remoteAccountManager:(id)arg2;
- (id)remoteAccountManager;
- (void)reset;
- (void)start;
- (bool)started;
- (void)stop;

@end
