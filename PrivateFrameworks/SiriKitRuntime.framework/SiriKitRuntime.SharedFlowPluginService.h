
@interface SiriKitRuntime.SharedFlowPluginService : _TtCs12_SwiftObject <SKRSharedFlowPluginServiceXPC> {
    void currentTurnCache;
    void flowLoader;
    void siriKitRuntime;
    void warmupTracker;
}

- (void)endTurnWithReply:(id /* block */)arg1;
- (void)loadFlowPluginWithBundleId:(id)arg1 bundlePath:(id)arg2 rcId:(id)arg3 hypothesisId:(id)arg4 reply:(id /* block */)arg5;
- (void)startTurnWithTurnData:(id)arg1 bridge:(id)arg2 reply:(id /* block */)arg3;

@end
