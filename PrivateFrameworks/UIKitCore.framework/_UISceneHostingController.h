
@interface _UISceneHostingController : NSObject <BSInvalidatable, FBSceneDelegate, _UIRemoteSheet, _UISceneHostingSettingsProviding> {
    <_UISceneHostingControllerDelegate> * _delegate;
    FBSSceneTransitionContext * _enqueuedSceneUpdateTransitionContext;
    _UIEventDeferringOwnershipToken * _eventDeferringOwnershipToken;
    FBScene * _fbScene;
    struct { 
        unsigned int _needsFencedUpdate : 1; 
        unsigned int _enqueuedSceneUpdate : 1; 
        unsigned int _clientIsReady : 1; 
        unsigned int _parentSceneIsSnapshotting : 1; 
    }  _flags;
    <_UISceneHostingGeometryModificationProviding> * _geometryModificationProvider;
    UIScene<_UISceneUIWindowHosting> * _parentScene;
    NSMutableSet * _queuedActions;
    RBSProcessIdentity * _requestedProcessIdentity;
    _UISceneHostingSceneSpecification * _requestedSceneSpecification;
    _UISceneHostingView * _sceneView;
    _UISceneHostingViewController * _sceneViewController;
    NSPointerArray * _settingsProviders;
}

@property (nonatomic, readonly) FBScene *_fbScene;
@property (nonatomic, readonly) <_UISceneHostingGeometryModificationProviding> *_geometryModificationProvider;
@property (setter=_setSheetConfiguration:, nonatomic, retain) _UISheetPresentationControllerConfiguration *_sheetConfiguration;
@property (setter=_setViewClipsToBounds:, nonatomic) bool _viewClipsToBounds;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } clientPreferredContentSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UISceneHostingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UISceneHostingView *sceneView;
@property (nonatomic, readonly) UIViewController *sceneViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyOverridesToHostedSceneSettings:(id)arg1;
- (void)_clientIsReady;
- (id)_fbScene;
- (id)_geometryModificationProvider;
- (void)_setSheetConfiguration:(id)arg1;
- (void)_setViewClipsToBounds:(bool)arg1;
- (id)_sheetConfiguration;
- (void)_updateSettingsWithFence:(id /* block */)arg1;
- (bool)_viewClipsToBounds;
- (void)activateScene;
- (void)addSettingsProvider:(id)arg1;
- (void)addSettingsProvider:(id)arg1 atIndexPath:(long long)arg2;
- (struct CGSize { double x1; double x2; })clientPreferredContentSize;
- (void)configureEventDeferringRulesForHostedScene;
- (void)dealloc;
- (id)delegate;
- (id)fencedTransitionContextUsingCurrentAnimationSettings:(bool)arg1;
- (void)hostSceneSettingsDidUpdateWithTransitionContext:(id)arg1;
- (void)hostingViewIsMovingToScene:(id)arg1;
- (id)initWithProcessIdentity:(id)arg1 sceneSpecification:(id)arg2;
- (void)invalidate;
- (void)parentSceneWillBeginSnapshotting;
- (void)performBlock:(id /* block */)arg1 withClientTransitionContext:(id)arg2;
- (void)removeSettingsProvider:(id)arg1;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (id)sceneView;
- (id)sceneViewController;
- (void)sendAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsSettingsUpdateWithFence:(bool)arg1;
- (bool)settingsUpdatesPaused;
- (bool)shouldFenceWithHostAnimationSettings;
- (void)tearDownEventDeferringRulesIfNecessary;
- (void)updateSceneSettingsIfNecessaryWithTransitionContext:(id)arg1;

@end
