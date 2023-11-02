
@interface SBInputUISceneController : SBSystemUISceneController <_UIKeyboardArbiterSceneDelegate> {
    <SBScenePresenting> * _currentExternalPresenter;
    SBTraitsPipelineManager * _currentTraitsPipelineManager;
    SBSystemUISceneDefaultPresenter * _defaultPresenter;
    unsigned long long  _focusChangeCounter;
    UIKBArbiterClientFocusContext * _focusContext;
    <BSInvalidatable> * _hostingGraphObservationInvalidatable;
    FBScene * _inputUIScene;
    bool  _isKeyboardShowing;
    FBSSceneIdentityToken * _lastExternallyPresentedSceneToken;
    SBSingleSceneController * _sceneController;
    FBScene * _targetScene;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIWindow *hostingWindow;
@property (readonly) Class superclass;
@property (getter=isVisibleForSpringBoard, nonatomic, readonly) bool visibleForSpringBoard;

+ (id)_setupInfo;
+ (bool)_shouldControlInputUIScene;

- (void).cxx_destruct;
- (id)_ancestorPathForTargetEnvironment:(id)arg1 withinEndowmentTree:(id)arg2 root:(id)arg3 visitedLinks:(id)arg4;
- (void)_createInputUIScene;
- (id)_currentDisplayConfiguration;
- (id)_currentTraitsPipelineManager;
- (void)_evaluateAvailablePresenters:(id)arg1 forSceneControllers:(id)arg2;
- (id)_rootSceneForEndowmentGraphWithNamespace:(id)arg1 hostingSceneToken:(id)arg2;
- (void)_setupDefaultPresentationForTargetHostingGraph:(id)arg1 targetScene:(id)arg2;
- (id)_targetSceneForFocusedSceneTokenString:(id)arg1;
- (id)_targetSceneForKeyboardFocusContext:(id)arg1;
- (void)_updateDefaultPresenterForTargetScene:(id)arg1 contextID:(unsigned int)arg2;
- (void)_userSwipedToKillFromSwitcher:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)focusContextDidChange:(id)arg1;
- (id)hostingWindow;
- (id)initWithSceneWorkspaceIdentifier:(id)arg1 clientProcessIdentity:(id)arg2 sceneVendingPolicy:(long long)arg3 traitsRole:(id)arg4 jobLabel:(id)arg5 level:(double)arg6;
- (bool)isVisibleForSpringBoard;
- (void)terminateWithReason:(id)arg1;
- (void)windowSceneDidConnect:(id)arg1;
- (void)windowSceneDidDisconnect:(id)arg1;

@end
