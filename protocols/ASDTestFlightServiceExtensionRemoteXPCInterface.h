
@protocol ASDTestFlightServiceExtensionRemoteXPCInterface <ASDTestFlightServiceExtensionXPCInterface, ASDExtensionRequestCleanupXPCInterface>

@required

- (void)didReachTerminalPhaseWithBetaBundle:(void *)arg1 terminalPhase:(void *)arg2 error:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: ASDBundle *, long long, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)didReceivePushMessages:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)didReceivePushToken:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)invokeCommand:(void *)arg1 withArguments:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)reloadAppsFromServerWithReply:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
