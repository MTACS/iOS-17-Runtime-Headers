
@interface PRRenderer : NSObject <FBSceneDelegate, PRRenderingBackdropViewOwner, UISceneDelegate, _UISceneComponentProviding, _UISceneSettingsDiffAction> {
    <UITraitChangeRegistration> * _ambientPresentationTraitChangeRegistration;
    bool  _animatingUnlock;
    RBSAssertion * _assertion;
    bool  _assertionValid;
    NSArray * _attachments;
    PRRenderingBackdropView * _backdropView;
    CSProminentDisplayViewController * _complicationsPreviewProminentDisplayViewController;
    <PRRenderingDelegate> * _delegate;
    bool  _disableReentrantRenderingExtensionForMemoryReclamation;
    bool  _disconnected;
    PRPosterEnvironmentImpl * _environment;
    FBScene * _graphicComplicationScene;
    bool  _graphicComplicationsRendered;
    bool  _inlineComplicationRendered;
    FBScene * _inlineComplicationScene;
    bool  _interruptedUnlock;
    PRPosterPreferencesImpl * _preferences;
    UIWindowScene * _scene;
    BSCompoundAssertion * _sessionExtensions;
    FBScene * _sidebarComplicationScene;
    bool  _sidebarComplicationsRendered;
    CSProminentDisplayViewController * _timePreviewProminentDisplayViewController;
    UIViewFloatAnimatableProperty * _unlockAnimator;
    <PRInvalidatable> * _unlockToken;
    NSMutableDictionary * _viewsByLevel;
    <PRInvalidatable> * _wakeToken;
    bool  _wasDepthEffectDisabled;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) CSProminentDisplayViewController *complicationsPreviewProminentDisplayViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PRPosterRenderingEnvironment> *environment;
@property (nonatomic, readonly) UIView *floatingView;
@property (nonatomic, readonly) UIView *foregroundView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PRPosterRenderingPreferences> *preferences;
@property (readonly) Class superclass;
@property (nonatomic, retain) CSProminentDisplayViewController *timePreviewProminentDisplayViewController;

- (void).cxx_destruct;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (id)attachments;
- (id)backgroundView;
- (id)complicationsPreviewProminentDisplayViewController;
- (void)dealloc;
- (id)environment;
- (id)extendRenderSessionForReason:(id)arg1;
- (id)extendRenderingSessionForReason:(id)arg1;
- (id)floatingView;
- (id)foregroundView;
- (id)initWithDelegate:(id)arg1;
- (id)initWithScene:(id)arg1;
- (void)invalidateView:(id)arg1;
- (void)noteContentSignificantlyChanged;
- (id)preferences;
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setComplicationsPreviewProminentDisplayViewController:(id)arg1;
- (void)setTimePreviewProminentDisplayViewController:(id)arg1;
- (id)timePreviewProminentDisplayViewController;
- (void)updatePreferences:(id /* block */)arg1;
- (void)updatedValuesForView:(id)arg1;

@end
