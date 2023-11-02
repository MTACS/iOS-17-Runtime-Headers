
@interface SBLayoutStateTransitionCoordinator : NSObject <SBWorkspaceApplicationSceneTransitionContextDelegate> {
    _SBDefaultSceneEntityFrameProvider * _defaultSceneEntityFrameProvider;
    NSPointerArray * _observerPointerArray;
    <SBLayoutStateTransitionSceneEntityFrameProvider> * _sceneEntityFrameProvider;
    SBLayoutStateTransitionContext * _transitionContext;
    SBWindowScene * _windowScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SBLayoutStateTransitionSceneEntityFrameProvider> *sceneEntityFrameProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBLayoutStateTransitionContext *transitionContext;
@property (getter=isTransitioning, nonatomic, readonly) bool transitioning;
@property (nonatomic, readonly) SBWindowScene *windowScene;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2;
- (void)beginTransitionForWorkspaceTransaction:(id)arg1;
- (void)endTransitionWithError:(id)arg1;
- (id)initWithWindowScene:(id)arg1;
- (bool)isTransitioning;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)sceneEntityFrameProvider;
- (void)setSceneEntityFrameProvider:(id)arg1;
- (id)transitionContext;
- (void)willEndTransition;
- (id)windowScene;

@end
