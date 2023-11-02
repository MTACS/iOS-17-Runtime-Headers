
@interface ACHAwardsClient : NSObject <_HKXPCExportable> {
    NSUUID * _identifier;
    id /* block */  _injectedErrorHandler;
    HKNanoSyncControl * _nanoSyncControl;
    HKTaskServerProxyProvider * _proxyProvider;
    <ACHAwardsServerInterface> * _serverProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, copy) id /* block */ injectedErrorHandler;
@property (nonatomic, retain) HKNanoSyncControl *nanoSyncControl;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, retain) <ACHAwardsServerInterface> *serverProxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPluginProxyErrorHandler:(id /* block */)arg1;
- (void)_injectProxyProvider:(id)arg1;
- (bool)addEarnedInstances:(id)arg1 error:(id*)arg2;
- (id)addEarnedInstances:(id)arg1 removingEarnedInstances:(id)arg2 error:(id*)arg3;
- (bool)addTemplates:(id)arg1 error:(id*)arg2;
- (bool)addTemplates:(id)arg1 removingTemplates:(id)arg2 error:(id*)arg3;
- (void)connectionInvalidated;
- (id)countOfEarnedInstancesForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (id)countOfEarnedInstancesForTemplateUniqueNames:(id)arg1 error:(id*)arg2;
- (id)exportedInterface;
- (id)fetchAllEarnedInstancesWithError:(id*)arg1;
- (id)fetchAllTemplatesWithError:(id*)arg1;
- (id)fetchEarnedInstancesForEarnedDateComponents:(id)arg1 error:(id*)arg2;
- (id)fetchEarnedInstancesForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (id)fetchMostRecentEarnedInstanceForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (id)fetchMostRecentEarnedInstancesForTemplateUniqueNames:(id)arg1 error:(id*)arg2;
- (id)identifier;
- (id)initWithHealthStore:(id)arg1;
- (id /* block */)injectedErrorHandler;
- (bool)isProtectedDataAvailable;
- (id)nanoSyncControl;
- (id)proxyProvider;
- (id)remoteInterface;
- (bool)removeAllEarnedInstancesWithError:(id*)arg1;
- (bool)removeAllTemplatesWithError:(id*)arg1;
- (bool)removeEarnedInstances:(id)arg1 error:(id*)arg2;
- (bool)removeEarnedInstancesForTemplateUniqueName:(id)arg1 error:(id*)arg2;
- (bool)removeTemplate:(id)arg1 error:(id*)arg2;
- (bool)removeTemplates:(id)arg1 error:(id*)arg2;
- (id)serverProxy;
- (void)setIdentifier:(id)arg1;
- (void)setInjectedErrorHandler:(id /* block */)arg1;
- (void)setNanoSyncControl:(id)arg1;
- (void)setProxyProvider:(id)arg1;
- (void)setServerProxy:(id)arg1;
- (void)triggerSyncWithCompletion:(id /* block */)arg1;

@end
