
@interface FPDXPCDomainServicer : NSObject <FPDDomainServicing, FPDLifetimeServicing> {
    FPDProvider * __provider;
    id  _activePresenterObservation;
    NSXPCConnection * _connection;
    FPDDomain * _domain;
    <FPProgressProtocol> * _downloadProxy;
    bool  _isALifetimerExtender;
    FPDXPCDomainServicerLifetimeExtender * _lifetimeExtender;
    NSObject<OS_os_log> * _log;
    NSString * _providerDomainID;
    NSObject<OS_dispatch_queue> * _requestQueue;
    FPDServer * _server;
    NSObject<OS_os_transaction> * _serviceTransaction;
    <FPProgressProtocol> * _uploadProxy;
}

@property (nonatomic, readonly) FPDDomain *domainOrNil;
@property (nonatomic, retain) <FPProgressProtocol> *downloadProxy;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) FPDExtensionSession *sessionOrNil;
@property (nonatomic, retain) <FPProgressProtocol> *uploadProxy;

- (void).cxx_destruct;
- (id)__providerIfExists;
- (void)_registerLifetimeExtension;
- (void)_t_setFilePresenterObserver:(id)arg1;
- (void)_unregisterLifetimeExtension;
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (void)didChangeItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)domainOrNil;
- (id)downloadProxy;
- (void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)enumeratePendingSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)evictItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getDiagnosticAttributesForItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ingestFromCacheItemWithIdentifier:(id)arg1 requestedFields:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithServer:(id)arg1 providerDomainID:(id)arg2 domain:(id)arg3 connection:(id)arg4;
- (void)invalidate;
- (void)listAvailableTestingOperationsWithCompletionHandler:(id /* block */)arg1;
- (void)materializeItemWithIdentifier:(id)arg1 requestedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (id)newFileProviderProxy;
- (int)pid;
- (id)providerDomainID;
- (id)providerOrNil;
- (void)reimportItemsBelowItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runTestingOperations:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)sessionOrNil;
- (void)setDomainEjectable:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setDownloadProxy:(id)arg1;
- (void)setUploadProxy:(id)arg1;
- (void)signalErrorResolved:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startAccessingServiceWithName:(id)arg1 itemID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)startExtendingLifetime;
- (void)stopExtendingLifetime;
- (void)subscribeToDownloadProgressUpdates:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)subscribeToUploadProgressUpdates:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)temporaryDirectoryWithCompletionHandler:(id /* block */)arg1;
- (id)uploadProxy;
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)waitForStabilizationWithCompletionHandler:(id /* block */)arg1;

@end
