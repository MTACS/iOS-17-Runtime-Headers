
@interface SBIconOverlayVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse {
    SBAppLayout * _appLayout;
    bool  _visible;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (getter=isVisible, nonatomic, readonly) bool visible;

- (void).cxx_destruct;
- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 visible:(bool)arg2;
- (bool)isVisible;
- (long long)type;

@end
