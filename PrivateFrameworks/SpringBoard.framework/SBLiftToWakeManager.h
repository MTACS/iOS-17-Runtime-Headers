
@interface SBLiftToWakeManager : NSObject <BSInvalidatable, CSExternalEventHandling, SBLiftToWakeObserver> {
    SBBacklightController * _accessor_backlightController;
    SBIdleTimerGlobalCoordinator * _accessor_idleTimerCoordinator;
    SBLockScreenManager * _accessor_lockScreenManager;
    SBMainDisplayPolicyAggregator * _accessor_policyAggregator;
    bool  _gestureWokeScreen;
    bool  _invalidated;
    SBLiftToWakeController * _liftToWakeController;
    bool  _observing;
    bool  _significantUserInteractionOccuredSinceWake;
}

@property (getter=_backlightController, setter=_setBacklightController:, nonatomic, retain) SBBacklightController *backlightController;
@property (nonatomic, readonly, copy) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_gestureWokeScreen, setter=_setGestureWokeScreen:, nonatomic) bool gestureWokeScreen;
@property (readonly) unsigned long long hash;
@property (getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:, nonatomic, retain) SBIdleTimerGlobalCoordinator *idleTimerCoordinator;
@property (getter=_liftToWakeController, setter=_setLiftToWakeController:, nonatomic, retain) SBLiftToWakeController *liftToWakeController;
@property (getter=_lockScreenManager, setter=_setLockScreenManager:, nonatomic, retain) SBLockScreenManager *lockScreenManager;
@property (nonatomic, readonly) long long participantState;
@property (getter=_policyAggregator, setter=_setPolicyAggregator:, nonatomic, retain) SBMainDisplayPolicyAggregator *policyAggregator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backlightController;
- (void)_backlightWillTurnOn:(id)arg1;
- (bool)_gestureWokeScreen;
- (id)_idleTimerCoordinator;
- (void)_ignoredTransition:(long long)arg1;
- (id)_initWithLiftToWakeController:(id)arg1;
- (bool)_isLockScreenMainPageVisible;
- (id)_liftToWakeController;
- (id)_lockScreenManager;
- (id)_policyAggregator;
- (void)_setBacklightController:(id)arg1;
- (void)_setGestureWokeScreen:(bool)arg1;
- (void)_setIdleTimerCoordinator:(id)arg1;
- (void)_setLiftToWakeController:(id)arg1;
- (void)_setLockScreenManager:(id)arg1;
- (void)_setPolicyAggregator:(id)arg1;
- (void)conformsToCSEventHandling;
- (id)coverSheetIdentifier;
- (void)dealloc;
- (id)description;
- (bool)handleEvent:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3;
- (long long)participantState;
- (bool)wouldHandleButtonEvent:(id)arg1;

@end
