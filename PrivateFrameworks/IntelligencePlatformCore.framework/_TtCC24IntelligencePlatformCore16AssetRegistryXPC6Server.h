
@interface _TtCC24IntelligencePlatformCore16AssetRegistryXPC6Server : NSObject <GDAssetRegistryXPCProtocol> {
    void baseServer;
    void entitlementInfo;
}

- (void).cxx_destruct;
- (void)assetEntryResultDataForAssetId:(id)arg1 inDomainId:(id)arg2 remoteOptionsData:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void)overrideAssetEntryForAssetId:(id)arg1 inDomainId:(id)arg2 overrideAssetEntryParametersData:(id)arg3 completion:(id /* block */)arg4;

@end
