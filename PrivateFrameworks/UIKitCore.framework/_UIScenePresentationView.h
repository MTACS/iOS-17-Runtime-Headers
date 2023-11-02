
@interface _UIScenePresentationView : _UIVisibilityPropagationView <BSDescriptionProviding, BSInvalidatable, FBSceneObserver, UIScenePresentation, _UISceneLayerHostContainerViewDataSource> {
    UIView * _backgroundView;
    UIScenePresentationContext * _currentPresentationContext;
    FBSSceneSettings * _effectiveSettings;
    FBSSceneSettingsDiffInspector * _geometrySettingsDiffInspector;
    _UISceneLayerHostContainerView * _hostContainerView;
    bool  _invalidated;
    NSHashTable * _observers;
    _UIScenePresenter * _presenter;
    FBScene * _scene;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIScenePresentationContext *currentPresentationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UISceneLayerHostContainerView *hostContainerView;
@property (nonatomic, readonly) <UIScenePresenter> *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_geometryDidUpdateWithTransitionContext:(id)arg1;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)_updateBackgroundColor;
- (void)_updateFrameAndTransform;
- (void)_updatePresentationContextFrom:(id)arg1 toContext:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)backgroundView;
- (id)currentPresentationContext;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didMoveToWindow;
- (id)hostContainerView;
- (id)identifier;
- (id)initWithPresenter:(id)arg1;
- (void)invalidate;
- (id)presentationContextForSceneLayerHostContainerView;
- (id)presenter;
- (void)removeObserver:(id)arg1;
- (void)scene:(id)arg1 clientDidConnect:(id)arg2;
- (void)scene:(id)arg1 didPrepareUpdateWithContext:(id)arg2;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;
- (void)setBackgroundView:(id)arg1;
- (void)setCurrentPresentationContext:(id)arg1;
- (void)setHostContainerView:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
