
@interface SBContinuousExposeStripEdgeProtectTongueSwitcherModifierEvent : SBSwitcherModifierEvent {
    bool  _tonguePresented;
}

@property (getter=isTonguePresented, nonatomic, readonly) bool tonguePresented;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithTonguePresented:(bool)arg1;
- (bool)isTonguePresented;
- (long long)type;

@end
