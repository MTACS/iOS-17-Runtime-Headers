
@interface ProximityAppleIDSetup.PASFlowStepSendPersonalAccount : ProximityAppleIDSetup.PASGuardianFlowStepBase {
    void _accountProvider;
    void _accountStore;
    void _deviceProvider;
    void _messageSessionProvider;
    void nextFlowStep;
    void selectedAccount;
}

@end
