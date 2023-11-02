
@interface SBHoverSwitcherModifierEvent : SBSwitcherModifierEvent {
    unsigned long long  _phase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
}

@property (nonatomic, readonly) unsigned long long phase;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } position;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithPhase:(unsigned long long)arg1 position:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)phase;
- (struct CGPoint { double x1; double x2; })position;
- (long long)type;

@end
