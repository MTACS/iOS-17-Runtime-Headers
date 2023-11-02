
@interface SBAssistantGestureConfiguration : NSObject <SBAssistantGestureConfigurationObserving> {
    NSHashTable * _observers;
    SiriPresentationSpringBoardMainScreenViewController * _siriPresentationViewController;
    long long  _siriWantsHomeAffordanceSuppression;
    bool  _siriWantsToShowHomeAffordance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long homeAffordanceSuppression;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) bool shouldDismissForSwipesOutsideContent;
@property (nonatomic, readonly) bool shouldDismissForTapsOutsideContent;
@property (nonatomic, readonly) bool shouldPassTouchesThroughToSpringBoard;
@property (nonatomic, readonly) bool shouldShareHomeGesture;
@property (nonatomic, readonly) bool shouldShowHomeAffordance;
@property (nonatomic, readonly) SiriPresentationSpringBoardMainScreenViewController *siriPresentationViewController;
@property (nonatomic) long long siriWantsHomeAffordanceSuppression;
@property (nonatomic) bool siriWantsToShowHomeAffordance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_makeObserversPerformBlock:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)assistantGestureConfiguration:(id)arg1 didUpdateHomeAffordanceSuppression:(long long)arg2;
- (void)assistantGestureConfiguration:(id)arg1 didUpdateHomeGestureSharing:(bool)arg2;
- (void)assistantGestureConfiguration:(id)arg1 didUpdateShouldDismissForSwipesOutsideContent:(bool)arg2;
- (void)assistantGestureConfiguration:(id)arg1 didUpdateShouldDismissForTapsOutsideContent:(bool)arg2;
- (void)assistantGestureConfiguration:(id)arg1 didUpdateShouldPassTouchesThroughToSpringBoard:(bool)arg2;
- (void)assistantGestureConfiguration:(id)arg1 didUpdateShouldShowHomeAffordance:(bool)arg2;
- (long long)homeAffordanceSuppression;
- (id)initWithSiriPresentationViewController:(id)arg1;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setSiriWantsHomeAffordanceSuppression:(long long)arg1;
- (void)setSiriWantsToShowHomeAffordance:(bool)arg1;
- (void)shouldDismissForGestureAtLocation:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (bool)shouldDismissForSwipesOutsideContent;
- (bool)shouldDismissForTapsOutsideContent;
- (bool)shouldPassTouchesThroughToSpringBoard;
- (bool)shouldShareHomeGesture;
- (bool)shouldShowHomeAffordance;
- (id)siriPresentationViewController;
- (long long)siriWantsHomeAffordanceSuppression;
- (bool)siriWantsToShowHomeAffordance;

@end
