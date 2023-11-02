
@interface GDXPCSysdiagnoseService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)diagnosticsWithError:(id*)arg1;
- (id)entityRelevanceRankingSupplementalDiagnosticsWithError:(id*)arg1;
- (id)entityResolutionSupplementalDiagnosticsWithError:(id*)arg1;
- (id)entityTaggingSupplementalDiagnosticsWithError:(id*)arg1;
- (id)init;
- (void)locked_establishConnection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)viewsSupplementalDiagnosticsWithError:(id*)arg1;

@end
