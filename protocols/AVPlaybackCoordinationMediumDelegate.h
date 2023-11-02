
@protocol AVPlaybackCoordinationMediumDelegate <NSObject>

@required

- (NSUUID *)localParticipantUUIDForPlaybackCoordinator:(AVPlaybackCoordinator *)arg1;
- (void)playbackCoordinator:(AVPlaybackCoordinator *)arg1 broadcastLocalParticipantStateDictionary:(NSDictionary *)arg2;
- (void)playbackCoordinator:(AVPlaybackCoordinator *)arg1 broadcastTransportControlStateDictionary:(NSDictionary *)arg2 forItemWithIdentifier:(NSString *)arg3;
- (void)playbackCoordinator:(void *)arg1 reloadTransportControlStateForItemWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: AVPlaybackCoordinator *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
