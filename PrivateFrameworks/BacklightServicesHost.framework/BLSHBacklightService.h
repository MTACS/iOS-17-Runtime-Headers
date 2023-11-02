
@interface BLSHBacklightService : NSObject {
    BLSHXPCBacklightProxyHostServer * _backlightXPCServer;
    BLSHCriticalAssertTester * _criticalAssertTester;
    BLSHDiagnosticsServer * _diagnosticsServer;
    BLSHBacklightStateMachine * _stateMachine;
    BLSHBacklightTransitionStateMachine * _transitionStateMachine;
    BLSHWatchdogTester * _watchdogTester;
}

+ (id)serviceWithPlatformProvider:(id)arg1 osInterfaceProvider:(id)arg2 inactiveBudgetPolicy:(id)arg3 localAssertionService:(id)arg4 localOnly:(bool)arg5;

- (void).cxx_destruct;
- (id)initWithPlatformProvider:(id)arg1 osInterfaceProvider:(id)arg2 inactiveBudgetPolicy:(id)arg3 localAssertionService:(id)arg4 localOnly:(bool)arg5;

@end
