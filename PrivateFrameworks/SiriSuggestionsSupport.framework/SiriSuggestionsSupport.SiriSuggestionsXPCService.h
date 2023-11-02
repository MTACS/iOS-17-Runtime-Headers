
@interface SiriSuggestionsSupport.SiriSuggestionsXPCService : _TtCs12_SwiftObject <SiriSuggestionsAPI.SiriSuggestionsXPCInterface> {
    void accessList;
    void client;
    void connectedAppId;
    void eventDrivenClient;
}

- (void)disconnectForAppWithAppBundleId:(id)arg1 placementId:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)getSuggestionsForAppWithAppBundleId:(id)arg1 placementId:(id)arg2 entities:(id)arg3 bridge:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)refreshServiceWithCompletion:(id /* block */)arg1;
- (void)submitFor:(id)arg1 propertyKey:(id)arg2 propertyValue:(id)arg3 completion:(id /* block */)arg4;
- (void)suggestNextWithRequestId:(id)arg1 extraStateStoreProperties:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)warmupWithCompletion:(id /* block */)arg1;

@end
