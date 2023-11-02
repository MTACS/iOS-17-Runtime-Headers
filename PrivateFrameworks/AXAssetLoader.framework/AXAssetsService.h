
@interface AXAssetsService : NSObject {
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (id)_serviceProxy;
- (void)componentCacheChanged;
- (void)dealloc;
- (void)deleteCompactResourceIfNeededForIdentifier:(id)arg1;
- (void)downloadTTSResourceForVoiceId:(id)arg1;
- (void)informSiriVoiceSubscriptionsWithVoiceId:(id)arg1 addition:(bool)arg2;
- (id)init;
- (void)refreshAssetCatalogForPolicy:(id)arg1 withOverrideTimeout:(id)arg2 forceCatalogRefresh:(bool)arg3;
- (void)restartTTSResourceMigration;
- (void)runFirstBootTasks:(bool)arg1;
- (void)runFirstUnlockTasks;
- (void)updateAssetForPolicy:(id)arg1;
- (void)updateTTSResourcesForActionType:(unsigned long long)arg1;
- (id)xpcConnection;

@end
