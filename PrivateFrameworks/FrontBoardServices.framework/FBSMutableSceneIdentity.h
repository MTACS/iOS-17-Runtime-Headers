
@interface FBSMutableSceneIdentity : FBSSceneIdentity

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *internalWorkspaceIdentifier;
@property (nonatomic, copy) NSString *workspaceIdentifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInternalWorkspaceIdentifier:(id)arg1;
- (void)setWorkspaceIdentifier:(id)arg1;

@end
