
@interface _UIWindowSceneOverlayPlacement : UIWindowScenePlacement {
    FBSSceneIdentityToken * _targetSceneIdentity;
}

@property (nonatomic, retain) FBSSceneIdentityToken *targetSceneIdentity;

+ (unsigned long long)_placementType;
+ (id)placementOverlayingWindowScene:(id)arg1;

- (void).cxx_destruct;
- (id)_createConfigurationWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithTargetSceneIdentity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTargetSceneIdentity:(id)arg1;
- (id)targetSceneIdentity;

@end
