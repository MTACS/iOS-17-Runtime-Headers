
@interface EDDiagnosticInfoGatherer : NSObject <EFLoggable, EMDiagnosticInfoGathererInterface> {
    <EMDiagnosticInfoProvidingXPC> * _diagnosticInfoProvider;
    EDFetchController * _fetchController;
    <EFScheduler> * _gathererQueue;
    EDPersistence * _persistence;
    <EDServerRemoteClientsProvider> * _remoteClientsProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <EMDiagnosticInfoProvidingXPC> *diagnosticInfoProvider;
@property (nonatomic, readonly) EDFetchController *fetchController;
@property (nonatomic, retain) <EFScheduler> *gathererQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EDPersistence *persistence;
@property (nonatomic, retain) <EDServerRemoteClientsProvider> *remoteClientsProvider;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_createDiagnosticsJSONForMessagesWithObjectIDs:(id)arg1 directoryURL:(id)arg2;
- (void)_downloadMessagesWithObjectIDs:(id)arg1 directoryURL:(id)arg2 completionPromise:(id)arg3;
- (void)databaseStatisticsWithCompletionHandler:(id /* block */)arg1;
- (id)diagnosticInfoProvider;
- (id)fetchController;
- (void)fetchControllerStatusWithCompletionHandler:(id /* block */)arg1;
- (void)gatherDiagnosticsWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)gathererQueue;
- (id)initWithFetchController:(id)arg1 remoteClientsProvider:(id)arg2 persistence:(id)arg3;
- (id)persistence;
- (void)registerDiagnosticInfoProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remoteClientsProvider;
- (void)setDiagnosticInfoProvider:(id)arg1;
- (void)setGathererQueue:(id)arg1;
- (void)setPersistence:(id)arg1;
- (void)setRemoteClientsProvider:(id)arg1;

@end
