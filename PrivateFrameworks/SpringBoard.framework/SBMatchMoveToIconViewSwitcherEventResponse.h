
@interface SBMatchMoveToIconViewSwitcherEventResponse : SBSwitcherModifierEventResponse {
    bool  _active;
    SBAppLayout * _appLayout;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) SBAppLayout *appLayout;

- (void).cxx_destruct;
- (id)appLayout;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 active:(bool)arg2;
- (bool)isActive;
- (long long)type;

@end
