
@interface CDPRecoveryTestController : NSObject {
    NSArray * _mockDevices;
    UINavigationController * _navController;
    CDPDBackupInfoRecoveryFlowController * _recoveryController;
}

- (void).cxx_destruct;
- (void)beginIDMSRecoveryFlow;
- (void)beginIDMSRecoveryFlowWithSecretFailure;
- (id)dummyRecoveryInfo;
- (id)initWithDevices:(id)arg1 andNavigationController:(id)arg2;
- (void)setUp;

@end
