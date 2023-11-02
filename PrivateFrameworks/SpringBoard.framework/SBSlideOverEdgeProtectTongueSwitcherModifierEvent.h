
@interface SBSlideOverEdgeProtectTongueSwitcherModifierEvent : SBSwitcherModifierEvent {
    unsigned long long  _edge;
    bool  _tonguePresented;
}

@property (nonatomic, readonly) unsigned long long edge;
@property (getter=isTonguePresented, nonatomic, readonly) bool tonguePresented;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)edge;
- (id)initWithTonguePresented:(bool)arg1 edge:(unsigned long long)arg2;
- (bool)isTonguePresented;
- (long long)type;

@end
