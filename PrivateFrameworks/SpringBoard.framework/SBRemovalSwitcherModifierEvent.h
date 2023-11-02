
@interface SBRemovalSwitcherModifierEvent : SBSwitcherModifierEvent {
    SBAppLayout * _appLayout;
    long long  _layoutRole;
    unsigned long long  _phase;
    long long  _reason;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) long long layoutRole;
@property (nonatomic, readonly) unsigned long long phase;
@property (nonatomic, readonly) long long reason;

- (void).cxx_destruct;
- (id)appLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithLayoutRole:(long long)arg1 inAppLayout:(id)arg2 reason:(long long)arg3 phase:(unsigned long long)arg4;
- (long long)layoutRole;
- (unsigned long long)phase;
- (long long)reason;
- (long long)type;

@end
