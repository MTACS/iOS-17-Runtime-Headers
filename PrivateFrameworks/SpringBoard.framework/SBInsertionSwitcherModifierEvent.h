
@interface SBInsertionSwitcherModifierEvent : SBSwitcherModifierEvent {
    SBAppLayout * _appLayout;
    unsigned long long  _index;
    unsigned long long  _phase;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) unsigned long long phase;

- (void).cxx_destruct;
- (id)appLayout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (unsigned long long)index;
- (id)initWithAppLayout:(id)arg1 intoIndex:(unsigned long long)arg2 phase:(unsigned long long)arg3;
- (unsigned long long)phase;
- (long long)type;

@end
