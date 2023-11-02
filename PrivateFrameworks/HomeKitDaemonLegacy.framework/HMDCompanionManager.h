
@interface HMDCompanionManager : HMFObject <HMDIDSServiceDelegate, HMFLogging> {
    HMDDevice * _companion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    <HMDIDSService> * _service;
}

@property (readonly) HMDDevice *companion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HMDIDSService> *service;
@property (readonly) Class superclass;

+ (bool)isCompatibleCompanionDevice:(id)arg1;
+ (id)logCategory;
+ (id)sharedManager;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)__initializeConnectedDevices;
- (id)attributeDescriptions;
- (id)companion;
- (id)init;
- (id)service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;

@end
