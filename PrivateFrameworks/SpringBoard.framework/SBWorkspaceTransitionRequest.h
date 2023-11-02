
@interface SBWorkspaceTransitionRequest : NSObject <BSDescriptionProviding, SBUIAnimationControllerTransitionContextProvider, SBWorkspaceApplicationSceneTransitionContextDelegate> {
    SBWorkspaceApplicationSceneTransitionContext * _applicationContext;
    FBSDisplayConfiguration * _displayConfiguration;
    NSString * _eventLabel;
    bool  _finalized;
    long long  _interfaceOrientation;
    SBLayoutStateTransitionCoordinator * _layoutStateTransitionCoordinator;
    BSProcessHandle * _originatingProcess;
    SBWorkspaceTransientOverlayTransitionContext * _transientOverlayContext;
    NSUUID * _uniqueID;
    SBWorkspace * _workspace;
}

@property (nonatomic, retain) SBWorkspaceApplicationSceneTransitionContext *applicationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, copy) NSString *eventLabel;
@property (getter=isFinalized, nonatomic, readonly) bool finalized;
@property (nonatomic, readonly, copy) NSSet *fromApplicationSceneEntities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMainWorkspaceTransitionRequest;
@property (nonatomic, retain) BSProcessHandle *originatingProcess;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *toApplicationSceneEntities;
@property (nonatomic, retain) SBWorkspaceTransientOverlayTransitionContext *transientOverlayContext;
@property (nonatomic, readonly, copy) NSUUID *uniqueID;
@property (nonatomic, readonly) SBWorkspace *workspace;

- (void).cxx_destruct;
- (id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2;
- (id)applicationContext;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationTransitionContext:(id)arg1 frameForApplicationSceneEntity:(id)arg2;
- (id)compactDescriptionBuilder;
- (void)declineWithReason:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayConfiguration;
- (id)displayIdentity;
- (id)eventLabel;
- (void)finalize;
- (id)fromApplicationSceneEntities;
- (id)init;
- (bool)isFinalized;
- (bool)isMainWorkspaceTransitionRequest;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (void)modifyApplicationContext:(id /* block */)arg1;
- (void)modifyTransientOverlayContext:(id /* block */)arg1;
- (id)originatingProcess;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (void)setApplicationContext:(id)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setEventLabel:(id)arg1;
- (void)setEventLabelWithFormat:(id)arg1;
- (void)setOriginatingProcess:(id)arg1;
- (void)setTransientOverlayContext:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)toApplicationSceneEntities;
- (id)transientOverlayContext;
- (id)uniqueID;
- (id)workspace;

@end
