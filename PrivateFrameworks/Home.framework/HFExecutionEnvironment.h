
@interface HFExecutionEnvironment : NSObject {
    bool  _active;
    NSDate * _appForegroundStartTime;
    bool  _macScreenIsLocked;
    NSHashTable * _observers;
    unsigned long long  _runningState;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSDate *appForegroundStartTime;
@property (nonatomic, readonly) long long hostProcess;
@property (nonatomic) bool macScreenIsLocked;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, readonly) unsigned long long runningState;

+ (bool)isCarousel;
+ (bool)isHomeApp;
+ (bool)isHomeControlService;
+ (bool)isHomeEnergyWidget;
+ (bool)isHomeNotification;
+ (bool)isHomeRelatedProcess;
+ (bool)isHomeUIService;
+ (bool)isHomeWidget;
+ (bool)isHomeWidgetInteractive;
+ (bool)isHomeWidgetRelatedProcess;
+ (bool)isMacShortcuts;
+ (bool)isSettings;
+ (bool)isShortcuts;
+ (bool)isSpringBoard;
+ (bool)isWatchApp;
+ (id)sharedInstance;
+ (id)stringForHFExecutionEnvironmentRunningState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_disablePreferencesCloudBackup;
- (void)_recordMetricsForAppRunningState;
- (void)addObserver:(id)arg1;
- (id)appForegroundStartTime;
- (void)dispatchMessageToObserversWithBlock:(id /* block */)arg1;
- (void)executionEnvironmentDidBecomeActive;
- (void)executionEnvironmentDidEnterBackground;
- (void)executionEnvironmentWillEnterForeground;
- (void)executionEnvironmentWillResignActive;
- (long long)hostProcess;
- (id)init;
- (bool)isActive;
- (bool)macScreenIsLocked;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (unsigned long long)runningState;
- (void)setActive:(bool)arg1;
- (void)setAppForegroundStartTime:(id)arg1;
- (void)setMacScreenIsLocked:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)setRunningState:(unsigned long long)arg1;

@end
