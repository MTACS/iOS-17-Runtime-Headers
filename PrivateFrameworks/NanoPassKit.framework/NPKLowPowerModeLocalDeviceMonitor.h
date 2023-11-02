
@interface NPKLowPowerModeLocalDeviceMonitor : NSObject <NPKLowPowerModeMonitor> {
    NPKObserverManager * _observersManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLowPowerModeEnabled, nonatomic, readonly) bool lowPowerModeEnabled;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_lowPowerModeStateChanged:(id)arg1;
- (void)_sendLowPowerModeEnabled:(bool)arg1 toObserver:(id)arg2;
- (void)_sendLowPowerModeEnabledStateToObservers:(bool)arg1;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1;
- (bool)isLowPowerModeEnabled;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;

@end
