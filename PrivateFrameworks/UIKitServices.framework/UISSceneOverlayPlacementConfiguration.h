
@interface UISSceneOverlayPlacementConfiguration : UISScenePlacementConfiguration {
    FBSSceneIdentityToken * _targetSceneIdentity;
}

@property (nonatomic, readonly) FBSSceneIdentityToken *targetSceneIdentity;

+ (unsigned long long)placementType;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetSceneIdentity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)targetSceneIdentity;

@end
