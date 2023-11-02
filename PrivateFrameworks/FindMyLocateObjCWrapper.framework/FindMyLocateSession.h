
@interface FindMyLocateSession : NSObject {
    _TtC23FindMyLocateObjCWrapper13ObjCBootstrap * _trampoline;
}

@property (nonatomic, copy) id /* block */ friendshipUpdateCallback;
@property (nonatomic, copy) id /* block */ locationUpdateCallback;
@property (nonatomic, copy) id /* block */ meDeviceUpdateCallback;
@property (nonatomic, retain) _TtC23FindMyLocateObjCWrapper13ObjCBootstrap *trampoline;

+ (bool)FMFAllowed;
+ (bool)FMFRestricted;

- (void).cxx_destruct;
- (long long)cachedCanShareLocationWithHandle:(id)arg1 isFromGroup:(bool)arg2;
- (id)cachedFriendsFollowingMyLocation;
- (id)cachedFriendsSharingLocationsWithMe;
- (id)cachedLocationForHandle:(id)arg1;
- (id)cachedLocationForHandle:(id)arg1 includeAddress:(bool)arg2;
- (id)cachedOfferExpirationForHandle:(id)arg1 groupId:(id)arg2;
- (void)canShareLocationWithHandle:(id)arg1 isFromGroup:(bool)arg2 completion:(id /* block */)arg3;
- (void)friendshipStateWithHandle:(id)arg1 isFromGroup:(bool)arg2 completion:(id /* block */)arg3;
- (id /* block */)friendshipUpdateCallback;
- (void)getActiveLocationSharingDeviceWithCompletion:(id /* block */)arg1;
- (void)getFriendsFollowingMyLocationWithCompletion:(id /* block */)arg1;
- (void)getFriendsSharingLocationsWithMeWithCompletion:(id /* block */)arg1;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id /* block */)locationUpdateCallback;
- (id /* block */)meDeviceUpdateCallback;
- (void)sendFriendshipInviteToHandle:(id)arg1 from:(id)arg2 isFromGroup:(bool)arg3 completion:(id /* block */)arg4;
- (void)sendFriendshipInviteToHandle:(id)arg1 isFromGroup:(bool)arg2 completion:(id /* block */)arg3;
- (void)sendFriendshipOfferToHandles:(id)arg1 expiration:(long long)arg2 isFromGroup:(bool)arg3 completion:(id /* block */)arg4;
- (void)sendFriendshipOfferToHandles:(id)arg1 from:(id)arg2 expiration:(long long)arg3 isFromGroup:(bool)arg4 completion:(id /* block */)arg5;
- (void)setActiveLocationSharingDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)setFriendshipUpdateCallback:(id /* block */)arg1;
- (void)setLocationUpdateCallback:(id /* block */)arg1;
- (void)setMeDeviceUpdateCallback:(id /* block */)arg1;
- (void)setTrampoline:(id)arg1;
- (void)startMonitoringActiveLocationSharingDeviceChangeWithCompletion:(id /* block */)arg1;
- (void)startRefreshingLocationForHandles:(id)arg1 priority:(long long)arg2 isFromGroup:(bool)arg3 completion:(id /* block */)arg4;
- (void)startRefreshingLocationForHandles:(id)arg1 priority:(long long)arg2 isFromGroup:(bool)arg3 reverseGeocode:(bool)arg4 completion:(id /* block */)arg5;
- (void)startUpdatingFriendsWithInitialUpdates:(bool)arg1 completion:(id /* block */)arg2;
- (void)stopRefreshingLocationForHandles:(id)arg1 priority:(long long)arg2 isFromGroup:(bool)arg3 completion:(id /* block */)arg4;
- (void)stopRefreshingLocationWithCompletion:(id /* block */)arg1;
- (void)stopSharingLocationWith:(id)arg1 from:(id)arg2 isFromGroup:(bool)arg3 completion:(id /* block */)arg4;
- (void)stopSharingLocationWith:(id)arg1 isFromGroup:(bool)arg2 completion:(id /* block */)arg3;
- (void)stopUpdatingFriendsWithCompletion:(id /* block */)arg1;
- (id)trampoline;

@end
