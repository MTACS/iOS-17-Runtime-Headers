
@interface ANAnnounce : NSObject {
    NSXPCConnection * _connection;
    <ANAnnounceDelegate> * _delegate;
    NSUUID * _endpointIdentifier;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic) <ANAnnounceDelegate> *delegate;
@property (nonatomic, readonly) NSUUID *endpointIdentifier;
@property (nonatomic, readonly) NSArray *receivedAnnouncements;
@property (nonatomic, readonly) NSArray *unplayedAnnouncements;

- (void).cxx_destruct;
- (void)_sendRequestLegacy:(id)arg1 completion:(id /* block */)arg2;
- (id)announcementForID:(id)arg1;
- (void)announcementForID:(id)arg1 reply:(id /* block */)arg2;
- (void)broadcastReply:(id)arg1 completion:(id /* block */)arg2;
- (void)broadcastReply:(id)arg1 forAnnouncement:(id)arg2 completion:(id /* block */)arg3;
- (void)broadcastReply:(id)arg1 forAnnouncementID:(id)arg2 completion:(id /* block */)arg3;
- (id)connection;
- (id)contextFromAnnouncement:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)endpointIdentifier;
- (void)getReceivedAnnouncementsWithCompletionHandler:(id /* block */)arg1;
- (void)getScanningDeviceCandidates:(id /* block */)arg1;
- (id)homeNamesForContext:(id)arg1;
- (id)init;
- (id)initWithEndpointIdentifier:(id)arg1;
- (void)invalidate;
- (bool)isAnnounceEnabledForAnyAccessoryInHome:(id)arg1;
- (bool)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)arg1;
- (bool)isEndpointWithUUID:(id)arg1 inRoomWithName:(id)arg2;
- (bool)isLocalDeviceInRoom:(id)arg1;
- (void)lastPlayedAnnouncementInfo:(id /* block */)arg1;
- (void)localParticipant:(id /* block */)arg1;
- (void)mockAnnouncement:(id)arg1 forHomeWithName:(id)arg2 playbackDeadline:(id)arg3 completion:(id /* block */)arg4;
- (void)prewarmWithHandler:(id /* block */)arg1;
- (id)receivedAnnouncementIDs;
- (void)receivedAnnouncementIDs:(id /* block */)arg1;
- (id)receivedAnnouncements;
- (void)sendAnnouncement:(id)arg1 toHomeWithID:(id)arg2 completion:(id /* block */)arg3;
- (void)sendAnnouncement:(id)arg1 toHomeWithName:(id)arg2 completion:(id /* block */)arg3;
- (void)sendAnnouncement:(id)arg1 toRoomsWithIDs:(id)arg2 andZonesWithIDs:(id)arg3 inHomeWithID:(id)arg4 completion:(id /* block */)arg5;
- (void)sendAnnouncement:(id)arg1 toRoomsWithIDs:(id)arg2 inHomeWithID:(id)arg3 completion:(id /* block */)arg4;
- (void)sendAnnouncement:(id)arg1 toRoomsWithNames:(id)arg2 andZonesWithNames:(id)arg3 inHomeWithName:(id)arg4 completion:(id /* block */)arg5;
- (void)sendAnnouncement:(id)arg1 toRoomsWithNames:(id)arg2 inHomeWithName:(id)arg3 completion:(id /* block */)arg4;
- (void)sendAnnouncement:(id)arg1 toZonesWithIDs:(id)arg2 inHomeWithID:(id)arg3 completion:(id /* block */)arg4;
- (void)sendAnnouncement:(id)arg1 toZonesWithNames:(id)arg2 inHomeWithName:(id)arg3 completion:(id /* block */)arg4;
- (void)sendReply:(id)arg1 forAnnouncement:(id)arg2 completion:(id /* block */)arg3;
- (void)sendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (id)unplayedAnnouncements;

@end
