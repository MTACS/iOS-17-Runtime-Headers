
@interface SBScreenWakeAnimationController : NSObject <SBFScreenWakeAnimationControlling> {
    bool  _animatingBacklight;
    bool  _animatingContent;
    bool  _animatingForSleep;
    bool  _animatingForWake;
    bool  _animatingWallpaper;
    int  _animationToken;
    <SBScreenWakeAnimationControllerDelegate> * _delegate;
    double  _finalStatusBarAlpha;
    double  _finalTimeAlpha;
    bool  _ignoringInteractionEvents;
    bool  _insideSleepCompletionBlock;
    bool  _insideWakeCompletionBlock;
    long long  _lastBacklightChangeSource;
    double  _originalDateBottomEdge;
    double  _originalDateLeftEdge;
    bool  _preparingToAnimateWake;
    id /* block */  _sleepCompletionBlock;
    SBWindowSceneStatusBarSettingsAssertion * _statusBarAssertion;
    SBWindowSceneStatusBarManager * _statusBarManager;
    <SBFScreenWakeAnimationTarget> * _target;
    NSMutableSet * _temporaryDisabledReasons;
    bool  _waitingForScreenUnblank;
    id /* block */  _wakeCompletionBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBScreenWakeAnimationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (double)_animationSpeedForBacklightChangeSource:(long long)arg1 isWake:(bool)arg2;
+ (double)backlightFadeDurationForSource:(long long)arg1 isWake:(bool)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_animationSettingsForBacklightChangeSource:(long long)arg1 isWake:(bool)arg2;
- (void)_cleanupAnimationWhenInterruptingWaking:(bool)arg1;
- (void)_cleanupAnimationWhenInterruptingWaking:(bool)arg1 force:(bool)arg2;
- (void)_handleAnimationCompletionIfNecessaryForWaking:(bool)arg1;
- (void)_handleAnimationCompletionIfNecessaryForWaking:(bool)arg1 force:(bool)arg2;
- (void)_runCompletionHandlerForWake:(bool)arg1 reason:(id)arg2;
- (void)_setInteractionEventsIgnored:(bool)arg1;
- (void)_setLastBacklightChangeSource:(long long)arg1;
- (void)_setRelevantLockScreenViewsHidden:(bool)arg1;
- (void)_startWakeAnimationsForWaking:(bool)arg1 animationSettings:(id)arg2;
- (void)_startWakeFromUnblankNotification;
- (void)_startWakeIfNecessary;
- (void)_updateWakeEffectsForWake:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (bool)interruptSleepAnimationIfNeeded;
- (bool)isSleepAnimationInProgress;
- (bool)isWakeAnimationInProgress;
- (bool)isWakeAnimationInProgressForSource:(long long)arg1;
- (void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 statusBarAlpha:(double)arg3 target:(id)arg4 dateView:(id)arg5 completion:(id /* block */)arg6;
- (void)setDelegate:(id)arg1;
- (void)setScreenWakeTemporarilyDisabled:(bool)arg1 forReason:(id)arg2;
- (void)sleepForSource:(long long)arg1 completion:(id /* block */)arg2;
- (void)sleepForSource:(long long)arg1 target:(id)arg2 completion:(id /* block */)arg3;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
