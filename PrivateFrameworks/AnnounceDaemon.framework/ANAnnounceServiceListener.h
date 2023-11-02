
@interface ANAnnounceServiceListener : NSObject <ANAnnounceServiceInterface, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleError:(long long)arg1 request:(id)arg2 requestSentCompletionHandler:(id /* block */)arg3;
- (void)_handleError:(long long)arg1 request:(id)arg2 sentCompletionHandler:(id /* block */)arg3;
- (void)_sendReplyRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_sendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_translateSentHandlerResponseAnnouncement:(id)arg1 request:(id)arg2 error:(id)arg3 toRequestSentHandler:(id /* block */)arg4;
- (void)announcementForID:(id)arg1 endpointID:(id)arg2 reply:(id /* block */)arg3;
- (void)cleanForExit;
- (void)contextFromAnnouncement:(id)arg1 reply:(id /* block */)arg2;
- (void)getReceivedAnnouncementsForEndpointID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getScanningDeviceCandidates:(id /* block */)arg1;
- (void)getUnplayedAnnouncementsForEndpointID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)homeNamesForContext:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)isAnnounceEnabledForAnyAccessoryInHome:(id)arg1 reply:(id /* block */)arg2;
- (void)isAnnounceEnabledForAnyAccessoryOrUserInHome:(id)arg1 reply:(id /* block */)arg2;
- (void)isEndpointWithUUID:(id)arg1 inRoomWithName:(id)arg2 reply:(id /* block */)arg3;
- (void)isLocalDeviceInRoom:(id)arg1 reply:(id /* block */)arg2;
- (void)lastPlayedAnnouncementInfo:(id /* block */)arg1;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)localParticipant:(id /* block */)arg1;
- (void)mockAnnouncement:(id)arg1 forHomeWithName:(id)arg2 playbackDeadline:(id)arg3 completion:(id /* block */)arg4;
- (void)prewarm:(id /* block */)arg1;
- (void)receivedAnnouncementIdentifiersForEndpointID:(id)arg1 reply:(id /* block */)arg2;
- (void)sendRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)sendRequestLegacy:(id)arg1 completion:(id /* block */)arg2;

@end
