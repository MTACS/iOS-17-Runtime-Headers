
@interface CRSAppHistoryService : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate, CARAppHistoryClientToServerInterface> {
    FBSApplicationLibrary * _applicationLibrary;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSHashTable * _connections;
    <CRSAppHistoryDataProviding> * _dataProvider;
    FBSALOToken * _installToken;
    NSArray * _instrumentClusterURLs;
    BSServiceConnectionListener * _listener;
    CRCarPlayAppPolicyEvaluator * _policyEvaluator;
    FBSALOToken * _replaceToken;
    FBSALOToken * _uninstallToken;
}

@property (nonatomic, retain) FBSApplicationLibrary *applicationLibrary;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic, retain) NSHashTable *connections;
@property (nonatomic) <CRSAppHistoryDataProviding> *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) FBSALOToken *installToken;
@property (nonatomic, copy) NSArray *instrumentClusterURLs;
@property (nonatomic, retain) BSServiceConnectionListener *listener;
@property (nonatomic, retain) CRCarPlayAppPolicyEvaluator *policyEvaluator;
@property (nonatomic, retain) FBSALOToken *replaceToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) FBSALOToken *uninstallToken;

- (void).cxx_destruct;
- (void)_appLibraryUpdated:(id)arg1;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_setupApplicationLibraryObservations;
- (id)applicationLibrary;
- (id)connectionQueue;
- (id)connections;
- (id)dataProvider;
- (void)fetchSessionEchoContextStatesWithCompletion:(id /* block */)arg1;
- (void)fetchSessionFeatureKeysWithCompletion:(id /* block */)arg1;
- (void)fetchSessionUIContextStatesWithCompletion:(id /* block */)arg1;
- (void)fetchUIContextStatesWithCompletion:(id /* block */)arg1;
- (id)initWithDataProvider:(id)arg1 applicationLibrary:(id)arg2 policyEvaluator:(id)arg3;
- (id)installToken;
- (id)instrumentClusterURLs;
- (void)invalidate;
- (id)listener;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (id)policyEvaluator;
- (id)replaceToken;
- (void)serviceFetchInstrumentClusterURLs:(id /* block */)arg1;
- (void)setAnalyticsValues:(id)arg1 onEvent:(id)arg2 completion:(id /* block */)arg3;
- (void)setApplicationLibrary:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setInstallToken:(id)arg1;
- (void)setInstrumentClusterURLs:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setPolicyEvaluator:(id)arg1;
- (void)setReplaceToken:(id)arg1;
- (void)setSessionFeatureKeys:(id)arg1 completion:(id /* block */)arg2;
- (void)setUninstallToken:(id)arg1;
- (id)uninstallToken;

@end
