
@interface SBTapAppLayoutHeaderSwitcherModifierEvent : SBSwitcherModifierEvent {
    SBAppLayout * _appLayout;
    long long  _layoutRole;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) long long layoutRole;

- (void).cxx_destruct;
- (id)appLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 layoutRole:(long long)arg2;
- (long long)layoutRole;
- (long long)type;

@end
