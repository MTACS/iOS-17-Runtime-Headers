
@interface ANPlaybackSessionServiceListener : NSObject <ANAnnouncementCoordinatorDelegate, ANLocalPlaybackSessionServiceInterface, ANRemotePlaybackSessionServiceInterface, ANRemotePlaybackStatusProvider, NSXPCListenerDelegate> {
    NSMutableSet * _localPlaybackClients;
    NSXPCListener * _localPlaybackSessionListener;
    NSObject<OS_dispatch_queue> * _playbackClientsSerialQueue;
    NSMutableSet * _remotePlaybackClients;
    NSXPCListener * _remotePlaybackSessionListener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableSet *localPlaybackClients;
@property (nonatomic, readonly) NSXPCListener *localPlaybackSessionListener;
@property (readonly) NSObject<OS_dispatch_queue> *playbackClientsSerialQueue;
@property (retain) NSMutableSet *remotePlaybackClients;
@property (nonatomic, readonly) NSXPCListener *remotePlaybackSessionListener;
@property (nonatomic, readonly) bool remoteSessionsActive;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientForConnection:(id)arg1;
- (bool)_endSessionForConnection:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (void)_setTimersActive:(bool)arg1 forEndPointID:(id)arg2;
- (void)cleanForExit;
- (void)coordinator:(id)arg1 didFinishPlayingAnnouncementsForEndpointID:(id)arg2;
- (void)coordinator:(id)arg1 didReceiveAnnouncement:(id)arg2 forGroupID:(id)arg3 forEndpointID:(id)arg4;
- (void)coordinator:(id)arg1 didStartPlayingAnnouncementsAtMachAbsoluteTime:(unsigned long long)arg2 forEndpointID:(id)arg3;
- (void)coordinator:(id)arg1 didUpdateAnnouncements:(id)arg2 forGroupID:(id)arg3 forEndpointID:(id)arg4;
- (void)coordinator:(id)arg1 didUpdatePlaybackState:(unsigned long long)arg2 forEndpointID:(id)arg3;
- (void)endSessionWithReply:(id /* block */)arg1;
- (id)init;
- (bool)isExternalPlaybackActiveForEndpointID:(id)arg1;
- (void)lastPlayedAnnouncementInfoForEndpointID:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)localPlaybackClients;
- (id)localPlaybackSessionListener;
- (id)playbackClientsSerialQueue;
- (void)playbackStateForEndpointID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)remotePlaybackClients;
- (id)remotePlaybackSessionListener;
- (bool)remoteSessionsActive;
- (void)resumeWithEndpointID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendPlaybackCommand:(id)arg1 forEndpointID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setLocalPlaybackClients:(id)arg1;
- (void)setPlaybackStartedForAnnouncement:(id)arg1;
- (void)setPlaybackStoppedForAnnouncement:(id)arg1;
- (void)setRemotePlaybackClients:(id)arg1;
- (void)startSessionForGroupID:(id)arg1 reply:(id /* block */)arg2;

@end
