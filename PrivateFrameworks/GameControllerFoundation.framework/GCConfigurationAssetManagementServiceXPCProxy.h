
@interface GCConfigurationAssetManagementServiceXPCProxy : NSObject <GCConfigurationAssetManagementServiceXPCInterface> {
    <GCConfigurationAssetManagementService> * _service;
}

- (void).cxx_destruct;
- (void)assetsWithReply:(id /* block */)arg1;
- (id)checkForNewAssets:(bool)arg1 forceCatalogRefresh:(bool)arg2 reply:(id /* block */)arg3;
- (void)currentAsset:(bool)arg1 withReply:(id /* block */)arg2;
- (id)init;
- (id)initWithService:(id)arg1;
- (void)lastUpdateDateWithReply:(id /* block */)arg1;

@end
