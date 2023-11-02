
@interface SBScrollSwitcherModifierEvent : SBSwitcherModifierEvent {
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffset;
    unsigned long long  _phase;
    bool  _userInitiated;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic) unsigned long long phase;
@property (getter=isUserInitiated, nonatomic) bool userInitiated;

- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithContentOffset:(struct CGPoint { double x1; double x2; })arg1 phase:(unsigned long long)arg2 userInitiated:(bool)arg3;
- (bool)isUserInitiated;
- (unsigned long long)phase;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setUserInitiated:(bool)arg1;
- (long long)type;

@end
