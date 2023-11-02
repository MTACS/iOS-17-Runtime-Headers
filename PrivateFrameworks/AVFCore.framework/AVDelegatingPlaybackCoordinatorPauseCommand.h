
@interface AVDelegatingPlaybackCoordinatorPauseCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    float  _anticipatedPlaybackRate;
    long long  _commandOrderIndex;
    AVDelegatingPlaybackCoordinator * _coordinator;
    NSString * _expectedCurrentItemIdentifier;
    AVCoordinatedPlaybackParticipant * _originator;
    bool  _shouldBufferInAnticipationOfPlayback;
}

@property (nonatomic, readonly) float anticipatedPlaybackRate;
@property (nonatomic, readonly) bool shouldBufferInAnticipationOfPlayback;

- (float)anticipatedPlaybackRate;
- (void)dealloc;
- (id)expectedCurrentItemIdentifier;
- (id)init;
- (id)initWithCoordinator:(id)arg1 originator:(id)arg2 expectedCurrentItemIdentifier:(id)arg3 commandOrderIndex:(long long)arg4 shouldBufferInAnticipationOfPlayback:(bool)arg5 anticipatedPlaybackRate:(float)arg6;
- (id)originator;
- (bool)shouldBufferInAnticipationOfPlayback;

@end
