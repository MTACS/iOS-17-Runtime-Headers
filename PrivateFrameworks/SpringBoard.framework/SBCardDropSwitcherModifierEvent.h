
@interface SBCardDropSwitcherModifierEvent : SBSwitcherModifierEvent {
    SBSwitcherDropRegionContext * _context;
    unsigned long long  _phase;
}

@property (nonatomic, readonly) SBSwitcherDropRegionContext *context;
@property (nonatomic, readonly) unsigned long long phase;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithPhase:(unsigned long long)arg1 context:(id)arg2;
- (unsigned long long)phase;
- (long long)type;

@end
