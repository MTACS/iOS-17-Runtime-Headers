
@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding> {
    bool  _clientFuture;
    NSString * _identifier;
    FBSSceneClientSettings * _initialClientSettings;
    FBSSceneSettings * _initialSettings;
    bool  _keyboardScene;
    FBSSceneSpecification * _specification;
    FBSSceneTransitionContext * _transitionContext;
    NSString * _workspaceIdentifier;
}

@property (getter=isClientFuture, nonatomic) bool clientFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) FBSSceneClientSettings *initialClientSettings;
@property (nonatomic, retain) FBSSceneSettings *initialSettings;
@property (getter=isKeyboardScene, nonatomic) bool keyboardScene;
@property (nonatomic, copy) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (nonatomic, retain) FBSSceneTransitionContext *transitionContext;
@property (nonatomic, copy) NSString *workspaceIdentifier;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initialClientSettings;
- (id)initialSettings;
- (bool)isClientFuture;
- (bool)isKeyboardScene;
- (void)setClientFuture:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInitialClientSettings:(id)arg1;
- (void)setInitialSettings:(id)arg1;
- (void)setKeyboardScene:(bool)arg1;
- (void)setSpecification:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setWorkspaceIdentifier:(id)arg1;
- (id)specification;
- (id)transitionContext;
- (id)workspaceIdentifier;

@end
