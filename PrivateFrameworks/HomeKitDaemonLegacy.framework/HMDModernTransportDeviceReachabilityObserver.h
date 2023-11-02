
@interface HMDModernTransportDeviceReachabilityObserver : HMFObject <HMDRemoteMessageTransportReachabilityDelegate, HMFTimerDelegate> {
    <HMDDateProvider> * _dateProvider;
    HMFTimer * _debounceTimer;
    NSMapTable * _deviceToListenersMap;
    NSMutableArray * _devicesWithPendingUnreachability;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HMDTimerProvider> * _timerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_clearUnreachablePendingForContext:(id)arg1;
- (void)_evaluateDebounceTimer;
- (void)_notifyListeners:(id)arg1 address:(id)arg2 isReachable:(bool)arg3;
- (void)_serviceExpiredUnreachableDevices;
- (void)_setUnreachablePendingForContext:(id)arg1;
- (void)addListener:(id)arg1 forDeviceAddress:(id)arg2;
- (id)init;
- (id)initWithTimerProvider:(id)arg1 dateProvider:(id)arg2;
- (id)isDeviceAddressReachable:(id)arg1;
- (void)removeListener:(id)arg1 forDeviceAddress:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (void)transport:(id)arg1 idsIdentifier:(id)arg2 didAppearReachable:(bool)arg3;

@end
