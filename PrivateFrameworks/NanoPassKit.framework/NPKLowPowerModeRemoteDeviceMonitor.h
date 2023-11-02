
@interface NPKLowPowerModeRemoteDeviceMonitor : NSObject <NPKLowPowerModeMonitor> {
    NPKObserverManager * _observersManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLowPowerModeEnabled, nonatomic, readonly) bool lowPowerModeEnabled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_currentDeviceDomainAccessor;
- (void)_sendLowPowerModeEnabled:(bool)arg1 toObserver:(id)arg2;
- (void)_sendLowPowerModeEnabledStateToObservers;
- (void)dealloc;
- (id)init;
- (bool)isLowPowerModeEnabled;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
