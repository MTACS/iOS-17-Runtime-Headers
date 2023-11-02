
@interface ICLibraryAuthServiceClientTokenProvider : NSObject <ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _isService;
    NSOperationQueue * _operationQueue;
    AFMultiUserConnection * _siriConnection;
    NSMutableDictionary * _tokenCache;
    NSXPCConnection * _xpcClientConnection;
    NSMutableSet * _xpcConnections;
    NSXPCListener * _xpcServiceListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (void)_addConnection:(id)arg1;
- (id)_clientConnection;
- (void)_commitCache;
- (void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)arg1;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (bool)_isPrivacyAcknowledgementRequired;
- (void)_loadCache;
- (id)_loggableTokenCacheDictionary;
- (void)_refreshTokenForDSID:(id)arg1 forExternalRequest:(bool)arg2 completion:(id /* block */)arg3;
- (void)_refreshTokensForDSIDs:(id)arg1 forExternalRequest:(bool)arg2 completion:(id /* block */)arg3;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)_removeConnection:(id)arg1;
- (bool)_shouldStopBackgroundRefreshForError:(id)arg1;
- (bool)_updateEntriesForAccountsChanges;
- (void)_updateRefreshTimer;
- (void)_updateTokenCacheEntryForDSID:(id)arg1 tokenResult:(id)arg2 error:(id)arg3;
- (void)addTokenResult:(id)arg1 forDSID:(id)arg2 completion:(id /* block */)arg3;
- (id)cachedTokenAndResetCache:(bool)arg1;
- (void)dealloc;
- (void)getAllTokenStatusForAssistantForcingRefresh:(bool)arg1 completion:(id /* block */)arg2;
- (void)getAllTokensForAssistantForcingRefresh:(bool)arg1 completion:(id /* block */)arg2;
- (void)getTokenForDSID:(id)arg1 forceRefresh:(bool)arg2 completion:(id /* block */)arg3;
- (void)getTokenForcingRefresh:(bool)arg1 completion:(id /* block */)arg2;
- (void)getTokenResultForDSID:(id)arg1 forceRefresh:(bool)arg2 completion:(id /* block */)arg3;
- (void)getTokenResultsForDSIDs:(id)arg1 forceRefresh:(bool)arg2 completion:(id /* block */)arg3;
- (void)getTokenStatusForDSIDs:(id)arg1 forcingRefresh:(bool)arg2 completion:(id /* block */)arg3;
- (void)getTokenStatusForcingRefresh:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startService;
- (void)stopService;

@end
