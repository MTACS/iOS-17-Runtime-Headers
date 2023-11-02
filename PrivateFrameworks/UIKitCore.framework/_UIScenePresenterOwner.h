
@interface _UIScenePresenterOwner : NSObject <BSDescriptionProviding, BSInvalidatable> {
    NSMutableOrderedSet * _activePresentersByPriority;
    id  _context;
    <_UIScenePresenterOwnerDelegate> * _delegate;
    NSMutableSet * _inactivePresentersByPriority;
    bool  _invalidated;
    _UIScenePresenter * _prioritizedPresenter;
    _UISceneLayerHostContainerView * _realSceneHostViewsContainer;
    UIScenePresentationManager * _scenePresentationManager;
}

@property (nonatomic, readonly) id context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) UIScenePresentationContext *defaultPresentationContext;
@property (nonatomic) <_UIScenePresenterOwnerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBScene *scene;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activatePresenter:(id)arg1;
- (void)_deactivatePresenter:(id)arg1;
- (void)_invalidatePresenter:(id)arg1;
- (bool)_isPresenterActive:(id)arg1;
- (bool)_isPresenterHosting:(id)arg1;
- (void)_setActivePrioritizedPresenter:(id)arg1;
- (void)_updateActivePrioritizedPresenterIfNecessary;
- (void)_updateHostingStateForScenePresentersIfNecessary;
- (id)activePrioritizedPresenter;
- (void)addPresenter:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)defaultPresentationContext;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumeratePresentersUsingBlock:(id /* block */)arg1;
- (id)initWithScenePresentationManager:(id)arg1 context:(id)arg2;
- (void)invalidate;
- (id)presenterWithIdentifier:(id)arg1;
- (id)scene;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
