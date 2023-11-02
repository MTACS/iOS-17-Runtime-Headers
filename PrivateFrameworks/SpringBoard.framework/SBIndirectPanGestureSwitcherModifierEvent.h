
@interface SBIndirectPanGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {
    unsigned long long  _indirectPanEndReason;
}

@property (nonatomic) unsigned long long indirectPanEndReason;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)indirectPanEndReason;
- (bool)isIndirectPanGestureEvent;
- (void)setIndirectPanEndReason:(unsigned long long)arg1;
- (long long)type;

@end
