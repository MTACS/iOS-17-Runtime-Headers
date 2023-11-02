
@interface _TtCC24IntelligencePlatformCore19InferenceSupportXPC6Server : NSObject <GDInferenceSupportXPCProtocol> {
    void assetRegistryXPCBaseServer;
    void jsonDecoder;
    void jsonEncoder;
}

- (void).cxx_destruct;
- (void)assetEntryResultDataForAssetId:(id)arg1 inDomainId:(id)arg2 remoteOptionsData:(id)arg3 completion:(id /* block */)arg4;
- (id)init;

@end
