
@interface _UISceneLifecycleMultiplexer : NSObject {
    struct { 
        unsigned int completedLaunch : 1; 
        unsigned int activatedOnce : 1; 
    }  _multiplexerFlags;
    UIApplicationSceneSettings * _transitionalLifecycleState;
    UIScene * _uiSceneOfRecord;
}

@property (nonatomic, readonly) bool activatedOnce;
@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) long long applicationState;
@property (nonatomic, readonly) bool lifecycleWantsUnnecessaryDelayForSceneDelivery;
@property (nonatomic, readonly) bool runningInTaskSwitcher;
@property (nonatomic, readonly) bool suspendedEventsOnly;
@property (nonatomic, readonly) bool suspendedUnderLock;

+ (long long)_compareLifecycleStateOfScene:(id)arg1 toScene:(id)arg2;
+ (id)_mostActiveSceneForApplicationState;
+ (id)_mostActiveSceneIncludingInternal:(bool)arg1 withTest:(id /* block */)arg2;
+ (void)configureInitialDeactivationReasons:(unsigned long long)arg1;
+ (id)mostActiveScene;
+ (id)mostActiveSceneWithTest:(id /* block */)arg1;
+ (id)mostActiveWindowSceneOnScreen:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_evalTransitionToSettings:(id)arg1 fromSettings:(id)arg2 forceExit:(bool)arg3 withTransitionStore:(struct { id x1; id x2; })arg4;
- (void)_globalTestRelatedActivationActionsForFirstActivation:(bool)arg1 foreground:(bool)arg2 interfaceStyle:(long long)arg3 transitionContext:(id)arg4;
- (void)_performBlock:(id /* block */)arg1 withApplicationOfDeactivationReasons:(unsigned long long)arg2 fromReasons:(unsigned long long)arg3;
- (bool)_prepareForClientSuspensionWithScene:(id)arg1;
- (void)_scheduleFirstCommit;
- (bool)activatedOnce;
- (long long)applicationState;
- (void)collectBackingStores;
- (void)completeApplicationLaunchWithFBSScene:(id)arg1 transitionContext:(id)arg2;
- (void)forceExitWithTransitionContext:(id)arg1 scene:(id)arg2;
- (id)initForAppSingleton:(id)arg1;
- (bool)isActive;
- (bool)isTrackingScene:(id)arg1;
- (bool)lifecycleWantsUnnecessaryDelayForSceneDelivery;
- (void)noteApplicationLaunchCompleted;
- (bool)runningInTaskSwitcher;
- (bool)suspendedEventsOnly;
- (bool)suspendedUnderLock;
- (void)uiScene:(id)arg1 transitionedFromState:(id)arg2 withTransitionContext:(id)arg3;

@end
