
@interface FBSWorkspaceSceneRemnant : NSObject <BSXPCSecureCoding> {
    FBSSceneIdentity * _identity;
    FBSSceneParameters * _parameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FBSSceneIdentity *identity;
@property (nonatomic, readonly, copy) FBSSceneParameters *parameters;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentity:(id)arg1 parameters:(id)arg2;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)identity;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)parameters;

@end
