
@interface PTDomainServer : NSObject <NSXPCListenerDelegate, PTDebugServer, PTDomainServer, PTEditingServerDataSource, PTEditingServerDelegate, PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver> {
    NSMutableDictionary * _clientsByDomainID;
    NSMutableSet * _dirtyDomainIDs;
    NSMutableDictionary * _domainInfoByID;
    NSMutableSet * _loadedDomainIDs;
    NSMutableDictionary * _localSettingsByClassName;
    bool  _persistScheduled;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _settingsArchivesByDomainID;
    NSMutableDictionary * _testRecipeInfoByID;
    NSMutableSet * _unregisteredClients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *domainInfoByID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDictionary *testRecipeInfoByID;

- (void).cxx_destruct;
- (void)_queue_applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 domainID:(id)arg3;
- (id)_queue_archiveForDomainID:(id)arg1;
- (void)_queue_invokeOutletAtKeyPath:(id)arg1 domainID:(id)arg2;
- (void)_queue_persistChanges;
- (id)_queue_proxyDefinitionForDomainID:(id)arg1;
- (void)_queue_removeClient:(id)arg1;
- (void)_queue_restoreDefaultsForDomainID:(id)arg1;
- (void)_queue_schedulePersistChanges;
- (void)_queue_sendArchiveValue:(id)arg1 forKeyPath:(id)arg2 domainID:(id)arg3;
- (void)_queue_sendRestoreDefaultsForDomainID:(id)arg1;
- (id)activeTestRecipeID;
- (void)applyArchiveValue:(id)arg1 forKeyPath:(id)arg2 domainID:(id)arg3 completion:(id /* block */)arg4;
- (void)applyArchiveValue:(id)arg1 forRootSettingsKeyPath:(id)arg2 domainID:(id)arg3;
- (id)domainInfoByID;
- (id)init;
- (void)invokeOutletAtKeyPath:(id)arg1 domainID:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)localSettingsOfClass:(Class)arg1;
- (void)persistChanges;
- (void)registerDomainWithInfo:(id)arg1;
- (void)registerRootSettingsProxyDefinition:(id)arg1 forDomainID:(id)arg2;
- (void)registerTestRecipeWithInfo:(id)arg1;
- (void)requestArchiveDictionaryForDomainID:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDomainInfoWithCompletion:(id /* block */)arg1;
- (void)requestServerStatusWithCompletion:(id /* block */)arg1;
- (void)restoreDefaultValuesForDomainID:(id)arg1;
- (void)restoreDefaultValuesForDomainID:(id)arg1 completion:(id /* block */)arg2;
- (id)rootSettingsArchiveForDomainID:(id)arg1;
- (id)rootSettingsProxyDefinitionForDomainID:(id)arg1;
- (void)sendEvent:(long long)arg1 forTestRecipeID:(id)arg2;
- (void)setActiveTestRecipeID:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)settingsDidRestoreDefaults:(id)arg1;
- (void)settingsWillRestoreDefaults:(id)arg1;
- (id)testRecipeInfoByID;

@end
