
@interface SBUpdateFocusedAppLayoutSwitcherModifierEvent : SBSwitcherModifierEvent {
    SBAppLayout * _appLayout;
    bool  _focused;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (getter=isFocused, nonatomic, readonly) bool focused;

- (void).cxx_destruct;
- (id)appLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 focused:(bool)arg2;
- (bool)isFocused;
- (long long)type;

@end
