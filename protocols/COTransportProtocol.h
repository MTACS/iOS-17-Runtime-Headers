
@protocol COTransportProtocol <NSObject>

@required

- (void)activateWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<COTransportDelegate> *)delegate;
- (void)deregisterCommandForClass:(Class)arg1;
- (void)deregisterRequestForClass:(Class)arg1;
- (COExecutionContext *)executionContext;
- (unsigned long long)hash;
- (void)invalidateWithError:(NSError *)arg1;
- (bool)isEqual:(id)arg1;
- (<CODiscoveryRecordProtocol> *)record;
- (void)registerCommandForClass:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)registerRequestForClass:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: Class, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (COConstituent *)remote;
- (void)sendCommand:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: COMeshCommand *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendRequest:(void *)arg1 withResponseHandler:(void *)arg2; // needs 2 arg types, found 9: COMeshRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COMeshRequest *, COMeshResponse *, NSError *, void*
- (void)setDelegate:(id <COTransportDelegate>)arg1;
- (void)setRemote:(COConstituent *)arg1;
- (bool)supportsLeaderElection;

@end
