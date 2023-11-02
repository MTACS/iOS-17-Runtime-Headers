
@interface HMDDeviceDiscoveryOperation : HMFOperation <HMDIDSServiceDelegate> {
    HMDAccount * _account;
    NSMutableSet * _devices;
    id /* block */  _discoveryBlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMDIDSSendMessageOperation * _operation;
    NSObject<OS_dispatch_queue> * _queue;
    <HMDIDSService> * _service;
}

@property (readonly) HMDAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSSet *devices;
@property (copy) id /* block */ discoveryBlock;
@property (readonly) unsigned long long hash;
@property (readonly) <HMDIDSService> *service;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (double)timeout;

- (void).cxx_destruct;
- (id)account;
- (void)cancelWithError:(id)arg1;
- (id)devices;
- (id /* block */)discoveryBlock;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 service:(id)arg2 timeout:(double)arg3;
- (id)initWithAccount:(id)arg1 timeout:(double)arg2;
- (void)main;
- (id)service;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (void)setDiscoveryBlock:(id /* block */)arg1;
- (void)setQualityOfService:(long long)arg1;

@end
