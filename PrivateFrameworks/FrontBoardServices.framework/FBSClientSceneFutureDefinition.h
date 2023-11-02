
@interface FBSClientSceneFutureDefinition : NSObject <FBSSceneCreating> {
    FBSSceneIdentity * _identity;
    FBSMutableSceneParameters * _parameters;
    FBSSceneSpecification * _specification;
    FBSSceneTransitionContext * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSSceneIdentity *identity;
@property (nonatomic, retain) FBSSceneParameters *parameters;
@property (nonatomic, retain) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (nonatomic, retain) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (void)configureParameters:(id /* block */)arg1;
- (void)configureTransition:(id /* block */)arg1;
- (id)identity;
- (id)initWithWorkspaceID:(id)arg1;
- (id)parameters;
- (void)setIdentifier:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)setSpecification:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)specification;
- (id)transitionContext;

@end
