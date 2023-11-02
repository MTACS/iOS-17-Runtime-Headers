
@interface SBSceneReadySwitcherModifierEvent : SBSwitcherModifierEvent {
    SBAppLayout * _appLayout;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;

- (void).cxx_destruct;
- (id)appLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1;
- (long long)type;

@end
