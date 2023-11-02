
@interface GDXPCInternalBiomeService : NSObject {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)locked_establishConnection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)viewClearAllDataWithViewQuery:(id)arg1 error:(id*)arg2;
- (bool)viewDumpStateWithError:(id*)arg1;
- (bool)viewRunUpdateWithViewQuery:(id)arg1 forceRebuild:(bool)arg2 error:(id*)arg3;
- (bool)viewSetEnabledWithName:(id)arg1 enabled:(bool)arg2 error:(id*)arg3;
- (bool)viewValidateWithError:(id*)arg1;

@end
