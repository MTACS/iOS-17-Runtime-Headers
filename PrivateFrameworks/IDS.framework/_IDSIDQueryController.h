
@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol> {
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    id  _delegateContext;
    NSMapTable * _delegateToInfo;
    NSMutableDictionary * _idStatusCache;
    NSString * _listenerGUID;
    NSMutableDictionary * _listenerIDToServicesMap;
    NSMutableDictionary * _listeners;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceToken;
    NSMutableDictionary * _transactionIDToBlockMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_createXPCConnectionOnQueue:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(bool)arg4 error:(id)arg5;
- (void)___oldDealloc;
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(id /* block */)arg3 failBlock:(id /* block */)arg4 waitForReply:(bool)arg5;
- (id)_cacheForService:(id)arg1;
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;
- (void)_callDelegatesForService:(id)arg1 destinationToVerifierResult:(id)arg2;
- (void)_callDelegatesWithBlock:(id /* block */)arg1;
- (void)_callDelegatesWithBlock:(id /* block */)arg1 delegateMap:(id)arg2;
- (void)_connect;
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (bool)_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 waitForReply:(bool)arg5 completionBlock:(id /* block */)arg6 completionBlockWithError:(id /* block */)arg7;
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;
- (void)_disconnectFromQueryService;
- (bool)_flushQueryCacheForService:(id)arg1;
- (bool)_hasCacheForService:(id)arg1;
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(bool)arg4 respectExpiry:(bool)arg5 waitForReply:(bool)arg6 forceRefresh:(bool)arg7 bypassLimit:(bool)arg8 completionBlock:(id /* block */)arg9;
- (bool)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;
- (void)_purgeIDStatusCache;
- (void)_purgeIDStatusCacheAfter:(double)arg1;
- (bool)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(bool)arg4 respectExpiry:(bool)arg5 waitForReply:(bool)arg6 forceRefresh:(bool)arg7 bypassLimit:(bool)arg8 queue:(id)arg9 completionBlock:(id /* block */)arg10;
- (void)_requestCacheForService:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(bool)arg3 respectExpiry:(bool)arg4 listenerID:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)_requestIDInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)_requestRemoteDevicesForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 waitForReply:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(bool)arg3 forceRefresh:(bool)arg4 bypassLimit:(bool)arg5 listenerID:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;
- (bool)_sync_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(bool)arg3 listenerID:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)_sync_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id /* block */)arg4;
- (bool)_sync_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;
- (bool)_warmupQueryCacheForService:(id)arg1;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 respectExpiry:(bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(id /* block */)arg6;
- (bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(id /* block */)arg6;
- (bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlockWithError:(id /* block */)arg5;
- (void)daemonDisconnected;
- (void)dealloc;
- (bool)idInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(id /* block */)arg7;
- (id)init;
- (id)initWithDelegateContext:(id)arg1 queueController:(id)arg2;
- (void)ktPeerVerificationResultsUpdated:(id)arg1 forService:(id)arg2;
- (bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 forceRefresh:(bool)arg4 queue:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (bool)removeListenerID:(id)arg1 forService:(id)arg2;
- (bool)requiredIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)requiredIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;

@end
