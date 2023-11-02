
@protocol FamilyCircleUI.FMFSessionProtocol

@required

- (void)forceRefresh;
- (NSSet *)getHandlesFollowingMyLocation;
- (NSSet *)getHandlesSharingLocationsWithMe;
- (void)sendFriendshipOfferToHandles:(void *)arg1 groupId:(void *)arg2 callerId:(void *)arg3 endDate:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSSet *, NSString *, FMFHandle *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)stopSharingMyLocationWithHandles:(void *)arg1 groupId:(void *)arg2 callerId:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSSet *, NSString *, FMFHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
