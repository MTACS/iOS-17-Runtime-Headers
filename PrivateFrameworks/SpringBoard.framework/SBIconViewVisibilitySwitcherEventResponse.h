
@interface SBIconViewVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse {
    SBFFluidBehaviorSettings * _animationSettings;
    SBAppLayout * _appLayout;
    NSSet * _excludedIconLocations;
    bool  _visible;
}

@property (nonatomic, readonly) SBFFluidBehaviorSettings *animationSettings;
@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) NSSet *excludedIconLocations;
@property (getter=isVisible, nonatomic, readonly) bool visible;

- (void).cxx_destruct;
- (id)animationSettings;
- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)excludedIconLocations;
- (id)initWithAppLayout:(id)arg1 visible:(bool)arg2 animationSettings:(id)arg3 excludedIconLocations:(id)arg4;
- (bool)isVisible;
- (long long)type;

@end
