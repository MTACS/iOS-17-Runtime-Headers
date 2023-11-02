
@protocol SBHistorianSwitcherModifierDelegate <NSObject>

@required

- (void)historianModifier:(SBHistorianSwitcherModifier *)arg1 didRecordEntry:(SBSwitcherModifierTimelineEntry *)arg2;
- (bool)historianModifier:(SBHistorianSwitcherModifier *)arg1 shouldRecordEvent:(SBSwitcherModifierEvent *)arg2;

@end
