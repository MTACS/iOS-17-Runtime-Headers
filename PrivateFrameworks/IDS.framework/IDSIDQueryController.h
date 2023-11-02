
@interface IDSIDQueryController : NSObject <TUIDSIDQueryController> {
    _IDSIDQueryController * _internal;
    IDSInternalQueueController * _queueController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (id)_currentCachedRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (long long)_currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (long long)_currentIDStatusForDestination:(id)arg1 service:(id)arg2 respectExpiry:(bool)arg3 listenerID:(id)arg4;
- (id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(bool)arg3 listenerID:(id)arg4;
- (bool)_flushQueryCacheForService:(id)arg1;
- (bool)_hasCacheForService:(id)arg1;
- (long long)_refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (id)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;
- (bool)_warmupQueryCacheForService:(id)arg1;
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addListenerID:(id)arg1 forService:(id)arg2;
- (bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 respectExpiry:(bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(id /* block */)arg6;
- (bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(id /* block */)arg6;
- (bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlockWithError:(id /* block */)arg5;
- (void)dealloc;
- (bool)forceRefreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)idInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(id /* block */)arg7;
- (id)init;
- (bool)participantsForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 errorCompletionBlock:(id /* block */)arg5;
- (void)removeDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;
- (bool)removeListenerID:(id)arg1 forService:(id)arg2;
- (bool)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)requiredIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
- (bool)requiredIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;

@end
