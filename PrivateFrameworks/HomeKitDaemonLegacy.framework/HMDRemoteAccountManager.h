
@interface HMDRemoteAccountManager : HMFObject <HMDAccountManager, HMDIDSServiceDelegate, HMFLogging, HMFObject, NSFastEnumeration> {
    NSMutableSet * _accounts;
    HMDBackingStore * _backingStore;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    bool  _monitoring;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _resolveOperations;
    <HMDIDSService> * _service;
}

@property (nonatomic, retain) NSArray *accounts;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, retain) HMDBackingStore *backingStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) NSMutableArray *resolveOperations;
@property (nonatomic, readonly) <HMDIDSService> *service;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)__handleSendMessageFailureWithError:(id)arg1 destination:(id)arg2;
- (void)_resolveAccountForHandle:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)accountForDeviceHandle:(id)arg1;
- (id)accountForHandle:(id)arg1;
- (id)accountForIdentifier:(id)arg1;
- (id)accountForModelIdentifier:(id)arg1;
- (id)accountForSenderContext:(id)arg1;
- (id)accounts;
- (void)addAccount:(id)arg1;
- (id)attributeDescriptions;
- (id)backingStore;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)deviceForSenderContext:(id)arg1;
- (id)init;
- (id)initWithIDSService:(id)arg1;
- (bool)isCurrentDeviceDataOwnerForDevice:(id)arg1;
- (bool)isMonitoring;
- (void)processAccountModel:(id)arg1 message:(id)arg2;
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;
- (void)removeAccount:(id)arg1;
- (void)reset;
- (id)resolveOperations;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5 context:(id)arg6;
- (void)setAccounts:(id)arg1;
- (void)setBackingStore:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (bool)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
- (bool)shouldCacheAccount:(id)arg1;
- (bool)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;
- (bool)shouldSyncAccount:(id)arg1;
- (bool)shouldSyncDevice:(id)arg1;
- (void)start;
- (void)stop;

@end
