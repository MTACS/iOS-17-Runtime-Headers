
@interface GDXPCInferenceSupportService : NSObject <GDXPCAssetRegistryServiceBaseProtocol> {
    NSXPCConnection * _connection;
    NSXPCInterface * _serverInterface;
}

- (void).cxx_destruct;
- (id)assetEntryResultDataForAssetId:(id)arg1 inDomainId:(id)arg2 remoteOptionsData:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)init;
- (void)locked_establishConnection;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
