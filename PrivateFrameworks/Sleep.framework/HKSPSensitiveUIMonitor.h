
@interface HKSPSensitiveUIMonitor : NSObject <HDSPEnvironmentAware> {
    bool  _hideSensitiveUI;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _needPrefsUpdate;
    NPSManager * _npsManager;
    HKSPObserverSet * _observers;
    bool  _sensitiveUIOverridden;
    NSUserDefaults * _userDefaults;
}

@property (getter=isCurrentSensitiveUIHidden, nonatomic) bool currentSensitiveUIHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideSensitiveUI;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) bool needPrefsUpdate;
@property (nonatomic, readonly) NPSManager *npsManager;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (nonatomic, readonly) bool sensitiveUIOverridden;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

// Image: /System/Library/PrivateFrameworks/Sleep.framework/Sleep

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_handleNotification;
- (bool)_hideSensitiveUI;
- (bool)_isVendorRelease;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (bool)hideSensitiveUI;
- (id)initWithCallbackScheduler:(id)arg1;
- (bool)isCurrentSensitiveUIHidden;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (bool)needPrefsUpdate;
- (id)npsManager;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observers;
- (void)overrideHideSensitiveUI:(bool)arg1;
- (void)registerForNotifications;
- (void)removeObserver:(id)arg1;
- (bool)sensitiveUIOverridden;
- (void)setCurrentSensitiveUIHidden:(bool)arg1;
- (bool)shouldHideForSensitivity:(long long)arg1;
- (void)unregisterForNotifications;
- (id)userDefaults;

// Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon

- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;

@end
