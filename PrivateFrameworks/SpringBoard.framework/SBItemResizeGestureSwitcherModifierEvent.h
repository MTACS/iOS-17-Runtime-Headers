
@interface SBItemResizeGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {
    unsigned long long  _selectedEdge;
    long long  _selectedLayoutRole;
}

@property (nonatomic) unsigned long long selectedEdge;
@property (nonatomic) long long selectedLayoutRole;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)selectedEdge;
- (long long)selectedLayoutRole;
- (void)setSelectedEdge:(unsigned long long)arg1;
- (void)setSelectedLayoutRole:(long long)arg1;
- (long long)type;

@end
