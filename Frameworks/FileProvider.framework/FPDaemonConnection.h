
@interface FPDaemonConnection : NSObject {
    NSXPCConnection<FPDDaemon> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSXPCConnection<FPDDaemon> * _connectionQueueConnection;
    NSMutableDictionary * _getAttributeConnections;
    NSObject<OS_dispatch_source> * _getAttributeConnectionsIdleCleanupTimer;
    unsigned int  _user;
}

@property (nonatomic, readonly) NSXPCConnection<FPDDaemon> *connection;
@property (nonatomic) unsigned int user;

+ (id)connectionForUser:(unsigned int)arg1;
+ (id)disallowedConnectionReason;
+ (id)newXPCConnection;
+ (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
+ (void)setDisallowedConnectionReason:(id)arg1;
+ (id)sharedConnection;
+ (id)sharedConnectionProxy;
+ (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
+ (id)synchronousSharedConnectionProxy;

- (void).cxx_destruct;
- (void)_test_callFileProviderManagerAPIs:(id /* block */)arg1;
- (void)_test_retrieveItemWithName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_test_setDocIDResolutionPolicy:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)attachItemWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)attachItemWithID:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)attachKnownFolders:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)backUpUserURL:(id)arg1 outputUserURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)bookmarkableStringFromDocumentURL:(id)arg1 error:(id*)arg2;
- (void)calculateNonPurgeableSpaceUsageOfDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connection;
- (id)connectionProxy;
- (void)copyDatabaseForFPCKStartingAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)createItemBasedOnTemplate:(id)arg1 fields:(unsigned long long)arg2 urlWrapper:(id)arg3 options:(unsigned long long)arg4 bounceOnCollision:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)detachItemWithID:(id)arg1 relocatingAtURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)detachItemWithID:(id)arg1 relocatingAtURL:(id)arg2 options:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)detachKnownFolders:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)documentURLFromBookmarkableString:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)documentURLFromBookmarkableString:(id)arg1 error:(id*)arg2;
- (void)dumpDatabaseAt:(id)arg1 fullDump:(bool)arg2 writeTo:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dumpStateTo:(id)arg1 limitNumberOfItems:(bool)arg2 providerFilter:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(bool)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)evictItemWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchAndStartEnumeratingWithSettings:(id)arg1 observer:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchDomainServicerForProviderDomainID:(id)arg1 handler:(id /* block */)arg2;
- (void)forceIngestionForItemID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)forceIngestionForItemIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getPersonaForProvider:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getURLForContainerWithItemID:(id)arg1 inDataScopeDomainWithIdentifier:(id)arg2 documentsScopeDomainIdentifier:(id)arg3 documentsFolderItemIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)importDetachedFolder:(id)arg1 parentID:(id)arg2 logicalName:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithUser:(unsigned int)arg1;
- (id)listOfMonitoredAppsWithError:(id*)arg1;
- (void)makeTopologicallySortedItemsOnDisk:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)makeTopologicallySortedItemsOnDisk:(id)arg1 error:(id*)arg2;
- (id)nonErrorCheckingConnection;
- (void)pinItemWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)providerDomainsCompletionHandler:(id /* block */)arg1;
- (void)providersCompletionHandler:(id /* block */)arg1;
- (void)resolveConflictAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)restoreUserURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runFPCKForDomainWithID:(id)arg1 databasesBackupsPath:(id)arg2 options:(unsigned long long)arg3 reason:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)runFPCKForDomainWithID:(id)arg1 databasesBackupsPath:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)runFPCKForDomainWithID:(id)arg1 databasesBackupsPath:(id)arg2 url:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned long long)arg5 completionHandler:(id /* block */)arg6;
- (void)setUser:(unsigned int)arg1;
- (void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)stateForDomainWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unpinItemWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateLastUsedDateForFileURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)user;
- (id)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 error:(id*)arg3;
- (void)waitForStabilizationOfDomainWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)wakeUpForURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
