
@interface GDXPCViewService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (id)accessTokenForFeaturesWithIsSandboxed:(bool)arg1 error:(id*)arg2;
- (id)accessTokenForViewName:(id)arg1 isSandboxed:(bool)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)init;
- (void)locked_establishConnection;
- (bool)performUpdateForViewNames:(id)arg1 includeDependencies:(bool)arg2 error:(id*)arg3;
- (bool)reportSQLiteErrorForViewName:(id)arg1 sqliteErrorCode:(long long)arg2 error:(id*)arg3;
- (bool)reportUnknownErrorForViewName:(id)arg1 error:(id*)arg2;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
