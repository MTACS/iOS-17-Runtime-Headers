
@interface HDSPWatchOnWristMonitor : NSObject <HKWristDetectionSettingManagerObserver> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKSPObserverSet * _observers;
    <HKSPUserDefaults> * _userDefaults;
    HKWristDetectionSettingManager * _wristDetectionSettingsManager;
}

@property (nonatomic, readonly) bool isOnWrist;
@property (nonatomic, readonly) bool isWristDetectEnabled;
@property (nonatomic, readonly) NSDate *lastOnWristDate;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, readonly) HKSPObserverSet *observers;
@property (nonatomic, readonly) <HKSPUserDefaults> *userDefaults;
@property (nonatomic, readonly) HKWristDetectionSettingManager *wristDetectionSettingsManager;

- (void).cxx_destruct;
- (bool)_lock_isOnWrist;
- (id)_lock_lastOnWristDate;
- (void)_lock_setIsOnWrist:(bool)arg1;
- (void)_lock_setLastOnWristDate:(id)arg1;
- (void)_withLock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithUserDefaults:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 callbackScheduler:(id)arg2;
- (bool)isOnWrist;
- (bool)isWristDetectEnabled;
- (id)lastOnWristDate;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (id)userDefaults;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)arg1;
- (id)wristDetectionSettingsManager;

@end
