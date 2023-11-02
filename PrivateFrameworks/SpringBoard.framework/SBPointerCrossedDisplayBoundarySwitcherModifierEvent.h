
@interface SBPointerCrossedDisplayBoundarySwitcherModifierEvent : SBSwitcherModifierEvent {
    unsigned long long  _direction;
    unsigned int  _edge;
}

@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned int edge;

- (unsigned long long)direction;
- (unsigned int)edge;
- (id)initWithDirection:(unsigned long long)arg1 edge:(unsigned int)arg2;
- (void)setDirection:(unsigned long long)arg1;
- (void)setEdge:(unsigned int)arg1;
- (long long)type;

@end
