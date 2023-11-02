
@interface RWIRelayDelegateIOS : NSObject <RWIRelayDelegate> {
    <BSInvalidatable> * _idleTimerAssertion;
    RBSProcessMonitor * _processMonitor;
    RWIRelay * _relay;
}

- (void).cxx_destruct;
- (void)_createProcessMonitorIfNeeded;
- (void)_handleProcessMonitorStateUpdate:(id)arg1 forProcess:(id)arg2;
- (id)_processMonitorPredicatesForConnectedApplications;
- (void)_startPreventingDeviceFromIdling;
- (void)_stopPreventingDeviceFromIdling;
- (void)_updateDeviceIdlePrevention;
- (void)_updateProcessMonitorPredicates;
- (void)relay:(id)arg1 activateApplicationWithBundleIdentifier:(id)arg2;
- (void)relay:(id)arg1 applicationConnected:(id)arg2;
- (void)relay:(id)arg1 applicationDisconnected:(id)arg2;
- (id)relay:(id)arg1 applicationInfoForIncomingConnection:(id)arg2 bundleIdentifier:(id)arg3;
- (void)relay:(id)arg1 applicationUpdated:(id)arg2;
- (void)relay:(id)arg1 unhandledApplicationXPCMessage:(id)arg2;
- (void)relayClientConnectionDidChange:(id)arg1;
- (void)relayInitialize:(id)arg1;
- (id)relaySetupResponseForClientConnection:(id)arg1;

@end
