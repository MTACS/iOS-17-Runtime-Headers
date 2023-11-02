
@protocol ANAnnounceServiceInterface <NSObject>

@required

- (void)announcementForID:(void *)arg1 endpointID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ANAnnouncement *, void*
- (void)contextFromAnnouncement:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: ANAnnouncement *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ANAnnouncementContext *, void*
- (void)getReceivedAnnouncementsForEndpointID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getScanningDeviceCandidates:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getUnplayedAnnouncementsForEndpointID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)homeNamesForContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: ANHomeContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)isAnnounceEnabledForAnyAccessoryInHome:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isEndpointWithUUID:(void *)arg1 inRoomWithName:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)isLocalDeviceInRoom:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)lastPlayedAnnouncementInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)localParticipant:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ANParticipant *, void*
- (void)mockAnnouncement:(void *)arg1 forHomeWithName:(void *)arg2 playbackDeadline:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSURL *, NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ANAnnouncement *, NSError *, void*
- (void)prewarm:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)receivedAnnouncementIdentifiersForEndpointID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)sendRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ANAnnouncementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ANAnnouncementResult *, NSError *, void*
- (void)sendRequestLegacy:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: ANAnnouncementRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ANAnnouncement *, NSError *, void*

@end
