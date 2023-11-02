
@interface PBBridgeIDSReachability : NSObject <IDSServiceDelegate> {
    PBBridgeIDSReachabilityStatusObject * _activeDeviceStatus;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableOrderedSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    IDSService * _reachabilityService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)deviceStatusFromIDSDevices:(id)arg1 nrDevices:(id)arg2;
+ (id)nrDevices;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_processDevices:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)getDeviceStatusChangeFromIDSDevices:(id)arg1 nrDevices:(id)arg2;
- (id)init;
- (unsigned long long)reachabilityForDevice:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;

@end
