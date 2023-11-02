
@interface SBBlurItemContainerSwitcherEventResponse : SBSwitcherModifierEventResponse {
    long long  _animationUpdateMode;
    SBAppLayout * _appLayout;
    SBBlurItemContainerParameters * _blurParameters;
    bool  _shouldBlur;
}

@property (nonatomic, readonly) long long animationUpdateMode;
@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) SBBlurItemContainerParameters *blurParameters;
@property (nonatomic, readonly) bool shouldBlur;

- (void).cxx_destruct;
- (long long)animationUpdateMode;
- (id)appLayout;
- (id)blurParameters;
- (id)description;
- (id)initWithAppLayout:(id)arg1 shouldBlur:(bool)arg2 animationUpdateMode:(long long)arg3;
- (id)initWithAppLayout:(id)arg1 shouldBlur:(bool)arg2 blurParameters:(id)arg3 animationUpdateMode:(long long)arg4;
- (bool)shouldBlur;
- (long long)type;

@end
