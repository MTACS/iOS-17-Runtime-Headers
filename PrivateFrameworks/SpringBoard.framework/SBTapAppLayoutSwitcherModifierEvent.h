
@interface SBTapAppLayoutSwitcherModifierEvent : SBSwitcherModifierEvent {
    SBAppLayout * _appLayout;
    long long  _layoutRole;
    long long  _modifierFlags;
    long long  _source;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) long long layoutRole;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, readonly) long long source;

- (void).cxx_destruct;
- (id)appLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 layoutRole:(long long)arg2 modifierFlags:(long long)arg3;
- (id)initWithAppLayout:(id)arg1 layoutRole:(long long)arg2 modifierFlags:(long long)arg3 source:(long long)arg4;
- (long long)layoutRole;
- (long long)modifierFlags;
- (long long)source;
- (long long)type;

@end
