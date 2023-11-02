
@interface SBTransientlyVisibleSlideOverTongueSwitcherModifier : SBSwitcherModifier {
    unsigned long long  _edgeProtectEdge;
    unsigned long long  _mode;
    unsigned long long  _rightEdgeHintState;
}

@property (nonatomic, readonly) unsigned long long mode;

+ (unsigned long long)slideOverTongueTransientlyVisibleModeForEvent:(id)arg1;

- (id)handleGestureEvent:(id)arg1;
- (id)handleSlideOverEdgeProtectTongueEvent:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)handleTransitionEvent:(id)arg1;
- (id)initWithMode:(unsigned long long)arg1;
- (unsigned long long)mode;
- (unsigned long long)slideOverTongueDirection;
- (unsigned long long)slideOverTongueState;

@end
