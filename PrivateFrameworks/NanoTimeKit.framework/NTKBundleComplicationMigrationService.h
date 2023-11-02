
@interface NTKBundleComplicationMigrationService : NSObject <NTKBundleComplicationMigrationServiceProtocol> {
    NTKBundleComplicationIdentifierCache * _cache;
}

- (void).cxx_destruct;
- (void)_enumerateBundles:(id /* block */)arg1;
- (id)_loadAndFetchClassesForBundleIdentifier:(id)arg1;
- (void)_performMigrationWithDataSource:(id)arg1 complication:(id)arg2 family:(long long)arg3 device:(id)arg4 completion:(id /* block */)arg5;
- (void)_processFallbackRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_processSingleRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)generateComplicationTypeLookupForDevice:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)processRequest:(id)arg1 completion:(id /* block */)arg2;

@end
