
@interface _TtCC24IntelligencePlatformCore16AssetRegistryXPC10BaseServer : NSObject <GDAssetRegistryXPCBaseProtocol> {
    void assetRegistryServer;
    void jsonDecoder;
    void jsonEncoder;
}

- (void).cxx_destruct;
- (void)assetEntryResultDataForAssetId:(id)arg1 inDomainId:(id)arg2 remoteOptionsData:(id)arg3 completion:(id /* block */)arg4;
- (id)init;

@end
