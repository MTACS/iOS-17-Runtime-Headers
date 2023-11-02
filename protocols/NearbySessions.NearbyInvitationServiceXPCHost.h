
@protocol NearbySessions.NearbyInvitationServiceXPCHost

@required

- (void)didDiscoverNearbyAdvertisementWithAdvertisement:(_TtC14NearbySessions19NearbyAdvertisement *)arg1;
- (void)didDiscoverNearbySessionInvitationWithId:(NSString *)arg1 invitation:(NSData *)arg2;
- (void)didLoseNearbyAdvertisementWithAdvertisement:(_TtC14NearbySessions19NearbyAdvertisement *)arg1;
- (void)didReceiveConnectionRequestWithAdvertisement:(_TtC14NearbySessions19NearbyAdvertisement *)arg1;
- (void)didReceiveInvitationApprovalRequestWithRequest:(_TtC14NearbySessions29IncomingInvitationJoinRequest *)arg1;
- (void)didReceiveSessionJoinResponseWithResponse:(_TtC14NearbySessions22InvitationJoinResponse *)arg1;
- (void)didReceiveUpdatedGroups:(NSArray *)arg1;

@end
