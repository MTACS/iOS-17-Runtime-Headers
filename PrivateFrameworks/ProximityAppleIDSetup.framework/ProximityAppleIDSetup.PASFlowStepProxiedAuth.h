
@interface ProximityAppleIDSetup.PASFlowStepProxiedAuth : ProximityAppleIDSetup.PASGuardianFlowStepBase {
    void _accountStore;
    void _anisetteDataProvider;
    void _authenticator;
    void _deviceProvider;
    void _guardianAppleIDExchanger;
    void authResults;
    void dependentDeviceKey;
    void localAccount;
    void proxiedDevice;
    void targetAccount;
}

@end
