
@interface IMIDSIDQueryController : NSObject

+ (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
+ (id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;
+ (bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
+ (bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
+ (bool)idInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(id /* block */)arg7;
+ (bool)participantsForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
+ (bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;
+ (bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;

@end
