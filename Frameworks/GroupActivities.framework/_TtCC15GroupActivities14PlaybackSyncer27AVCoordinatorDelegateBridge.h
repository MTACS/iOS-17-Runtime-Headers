
@interface _TtCC15GroupActivities14PlaybackSyncer27AVCoordinatorDelegateBridge : NSObject <AVPlaybackCoordinationMediumDelegate, AVPlaybackCoordinationMediumDelegatePrivate> {
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  localParticipantID;
}

- (void).cxx_destruct;
- (id)init;
- (id)localParticipantUUIDForPlaybackCoordinator:(id)arg1;
- (void)playbackCoordinator:(id)arg1 broadcastLocalParticipantStateDictionary:(id)arg2;
- (void)playbackCoordinator:(id)arg1 broadcastTransportControlStateDictionary:(id)arg2 forItemWithIdentifier:(id)arg3;
- (void)playbackCoordinator:(id)arg1 promptForLeaveOrEndSessionAllowingCancellation:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)playbackCoordinator:(id)arg1 reloadTransportControlStateForItemWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;

@end
