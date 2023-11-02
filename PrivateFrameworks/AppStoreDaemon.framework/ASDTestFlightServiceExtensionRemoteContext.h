
@interface ASDTestFlightServiceExtensionRemoteContext : ASDTestFlightServiceExtensionContext <ASDTestFlightServiceExtensionRemoteXPCInterface> {
    ASDTestFlightServiceExtension * _extensionInstance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ASDTestFlightServiceExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didReachTerminalPhaseWithBetaBundle:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 reply:(id /* block */)arg4;
- (void)didReceivePushMessages:(id)arg1 reply:(id /* block */)arg2;
- (void)didReceivePushToken:(id)arg1 reply:(id /* block */)arg2;
- (id)extensionInstance;
- (void)invokeCommand:(id)arg1 withArguments:(id)arg2 reply:(id /* block */)arg3;
- (void)reloadAppsFromServerWithReply:(id /* block */)arg1;
- (void)serviceExtensionPerformCleanup;
- (void)serviceExtensionTimeWillExpire;
- (void)setExtensionInstance:(id)arg1;

@end
