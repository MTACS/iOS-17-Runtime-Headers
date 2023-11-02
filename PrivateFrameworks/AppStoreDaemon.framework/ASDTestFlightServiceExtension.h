
@interface ASDTestFlightServiceExtension : NSObject <NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)didReachTerminalPhaseWithBetaBundleID:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 reply:(id /* block */)arg4;
- (void)didReceivePushMessages:(id)arg1 reply:(id /* block */)arg2;
- (void)didReceivePushToken:(id)arg1 reply:(id /* block */)arg2;
- (void)invokeCommand:(id)arg1 withArguments:(id)arg2 reply:(id /* block */)arg3;
- (void)reloadAppsFromServerWithReply:(id /* block */)arg1;
- (void)serviceExtensionTimeWillExpire;

@end
