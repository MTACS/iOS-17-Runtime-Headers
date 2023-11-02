
@interface SBModalUIFluidDismissGestureManager : NSObject <BSTransactionObserver, PTSettingsKeyObserver, SBHomeGestureInteractionDelegate, SBHomeGesturePanGestureRecognizerInterfaceDelegate> {
    SBModalUIFluidDismissGestureWorkspaceTransaction * _currentTransaction;
    SBHomeGestureInteraction * _homeGestureInteraction;
    SBHomeGestureSettings * _homeGestureSettings;
    SBSystemGestureManager * _systemGestureManager;
    SBWindowScene * _windowScene;
}

@property (nonatomic, retain) SBModalUIFluidDismissGestureWorkspaceTransaction *currentTransaction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SBHomeGestureInteraction *homeGestureInteraction;
@property (nonatomic, retain) SBHomeGestureSettings *homeGestureSettings;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBSystemGestureManager *systemGestureManager;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)_addOrRemoveGestureForCurrentSettings;
- (long long)_dismissalTypeForCurrentContext;
- (id)currentTransaction;
- (id)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(id)arg1;
- (void)handleGestureBegan:(id)arg1 initiatedFromBottomEdge:(bool)arg2;
- (void)handleGestureBegan:(id)arg1 initiatedFromBottomEdge:(bool)arg2 dismissalThreshold:(double)arg3 initiatedFromIndirectEdge:(bool)arg4;
- (void)handleGestureChanged:(id)arg1;
- (void)handleGestureEnded:(id)arg1;
- (id)homeGestureInteraction;
- (bool)homeGestureInteraction:(id)arg1 shouldReceiveTouch:(id)arg2;
- (unsigned long long)homeGestureInteraction:(id)arg1 systemGestureTypeForType:(long long)arg2;
- (void)homeGestureInteractionBegan:(id)arg1;
- (void)homeGestureInteractionCancelled:(id)arg1;
- (void)homeGestureInteractionChanged:(id)arg1;
- (void)homeGestureInteractionEnded:(id)arg1;
- (id)homeGestureSettings;
- (id)initWithWindowScene:(id)arg1 systemGestureManager:(id)arg2;
- (void)setCurrentTransaction:(id)arg1;
- (void)setHomeGestureInteraction:(id)arg1;
- (void)setHomeGestureSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)systemGestureManager;
- (long long)touchInterfaceOrientationForGestureRecognizer:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (id)windowScene;

@end
