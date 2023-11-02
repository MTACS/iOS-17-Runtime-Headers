
@interface ICLinkLinkAVPlaybackCoordinatorMedium : ICLiveLinkPlaybackCoordinatorMedium <AVPlaybackCoordinationMediumDelegate> {
    AVPlayerPlaybackCoordinator * _playbackCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVPlayerPlaybackCoordinator *playbackCoordinator;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_playbackCoordinatorDidIssueCommandToPlaybackObjectNotification:(id)arg1;
- (void)clearCoordinationMediumDelegate;
- (void)handleNewParticipantStateDictionary:(id)arg1;
- (void)handleNewTransportControlStateDictionary:(id)arg1;
- (id)initWithPlaybackCoordinator:(id)arg1 liveLink:(id)arg2;
- (bool)isCoordinatorSuspended;
- (id)localParticipantUUIDForPlaybackCoordinator:(id)arg1;
- (id)playbackCoordinator;
- (void)playbackCoordinator:(id)arg1 broadcastLocalParticipantStateDictionary:(id)arg2;
- (void)playbackCoordinator:(id)arg1 broadcastTransportControlStateDictionary:(id)arg2 forItemWithIdentifier:(id)arg3;
- (void)playbackCoordinator:(id)arg1 reloadTransportControlStateForItemWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeParticipant:(id)arg1;

@end
