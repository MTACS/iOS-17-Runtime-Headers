
@protocol MSPSharedTripXPCClient <NSObject>

@required

- (void)destinationDidUpdateForSharedTrip:(GEOSharedNavState *)arg1;
- (void)destinationReachedDidUpdateForSharedTrip:(GEOSharedNavState *)arg1;
- (void)etaDidUpdateForSharedTrip:(GEOSharedNavState *)arg1;
- (void)routeDidUpdateForSharedTrip:(GEOSharedNavState *)arg1;
- (void)sharedTripDidBecomeAvailable:(GEOSharedNavState *)arg1;
- (void)sharedTripDidBecomeUnavailable:(GEOSharedNavState *)arg1;
- (void)sharedTripDidClose:(GEOSharedNavState *)arg1;
- (void)sharedTripDidStartSharingWithIdentifier:(NSString *)arg1;
- (void)sharedTripDidUpdateRecipients:(NSArray *)arg1;
- (void)sharedTripInvalidatedWithError:(NSError *)arg1;
- (void)sharingIdentityDidChange:(MSPSharedTripSharingIdentity *)arg1;

@end
