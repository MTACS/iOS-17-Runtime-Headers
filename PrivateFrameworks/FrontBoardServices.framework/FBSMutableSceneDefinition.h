
@interface FBSMutableSceneDefinition : FBSSceneDefinition

@property (nonatomic, copy) FBSSceneClientIdentity *clientIdentity;
@property (nonatomic, copy) FBSSceneIdentity *identity;
@property (nonatomic, copy) FBSSceneSpecification *specification;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
