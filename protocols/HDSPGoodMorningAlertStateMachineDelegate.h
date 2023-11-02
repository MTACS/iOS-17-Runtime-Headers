
@protocol HDSPGoodMorningAlertStateMachineDelegate <HKSPPersistentStateMachineDelegate>

@required

- (void)dismissAlertForGoodMorning;
- (void)presentAlertForGoodMorning;

@end
