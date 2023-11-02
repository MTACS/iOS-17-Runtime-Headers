
@interface TIKeyboardActivityController : NSObject <TIKeyboardActivityControlling, TIKeyboardApplicationStateResponses, TIKeyboardAssertionManagerDelegate> {
    unsigned long long  _activityState;
    TIKeyboardApplicationStateMonitor * _appMonitor;
    bool  _hadRecentActivity;
    bool  _hasBackgroundActivity;
    long long  _inactiveMemoryPressureCount;
    NSTimer * _inactivityTimer;
    bool  _isDirty;
    NSObject<OS_os_transaction> * _isDirtyTransaction;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) unsigned long long activityState;
@property (nonatomic, retain) TIKeyboardApplicationStateMonitor *appMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *inactivityTimer;
@property (nonatomic) bool isDirty;
@property (nonatomic, retain) NSObject<OS_os_transaction> *isDirtyTransaction;
@property (nonatomic, readonly) NSHashTable *observers;
@property (readonly) Class superclass;

+ (double)defaultKeyboardIdleTimeoutInterval;
+ (double)keyboardIdleTimeoutInterval;
+ (void)setKeyboardIdleTimeoutInterval:(double)arg1;
+ (void)setSharedController:(id)arg1;
+ (id)sharedController;
+ (id)singletonInstance;

- (void).cxx_destruct;
- (unsigned long long)activityState;
- (void)addActivityObserver:(id)arg1;
- (id)appMonitor;
- (bool)atexitHandler;
- (void)backgroundActivityAssertionsDidChange;
- (bool)canGoEarlyClean;
- (id)createMemoryPressureSource;
- (void)dealloc;
- (void)generateMemgraphsIfNeeded;
- (void)handleMemoryStatusPressure:(unsigned long long)arg1;
- (id)inactivityTimer;
- (void)inactivityTimerFired:(id)arg1;
- (id)init;
- (bool)isDirty;
- (id)isDirtyTransaction;
- (void)keyboardAssertionsDidChange;
- (void)notifyMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;
- (void)notifyTransitionWithContext:(id)arg1;
- (id)observers;
- (void)releaseInputManagers;
- (void)removeActivityObserver:(id)arg1;
- (void)setAppMonitor:(id)arg1;
- (void)setInactivityTimer:(id)arg1;
- (void)setIsDirty:(bool)arg1;
- (void)setIsDirtyTransaction:(id)arg1;
- (void)setKeyboardCleanIfNecessary;
- (void)setKeyboardDirtyIfNecessaryWithReason:(id)arg1;
- (bool)shouldBecomeClean;
- (bool)shouldBecomeDirty;
- (void)touchInactivityTimer;
- (void)updateActivityState;

@end
