
@interface SBApplicationSceneUpdateTransaction : FBApplicationUpdateScenesTransaction {
    LSApplicationIdentity * _applicationIdentity;
    SBApplicationSceneEntity * _applicationSceneEntity;
    <SBApplicationSceneUpdateTransactionDelegate> * _delegate;
    SBPrivacyPreflightController * _privacyPreflightController;
    SBWorkspaceTransitionRequest * _request;
    bool  _requiresPreflight;
    NSString * _sceneIdentifier;
    FBSMutableSceneParameters * _sceneParameters;
    UIApplicationSceneTransitionContext * _sceneTransitionContext;
    bool  _shouldSendActivationResult;
    bool  _suspendedActivation;
    SBWorkspaceApplicationSceneTransitionContext * _transitionContext;
}

@property (nonatomic, readonly) SBApplicationSceneEntity *applicationSceneEntity;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, readonly) UIApplicationSceneSettings *sceneSettings;
@property (nonatomic) bool shouldSendActivationResult;

- (void).cxx_destruct;
- (id)_createUpdateTransactionForPreflightCompletion;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (bool)_isReadyToLaunch;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_sceneResizeLayoutDidFinish:(id)arg1;
- (void)_sendActivationResultWithError:(id)arg1;
- (void)_willBegin;
- (void)_willFailWithReason:(id)arg1;
- (id)applicationSceneEntity;
- (id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2;
- (id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2 delegate:(id)arg3;
- (id)sceneIdentifier;
- (id)sceneSettings;
- (void)setShouldSendActivationResult:(bool)arg1;
- (bool)shouldSendActivationResult;

@end
