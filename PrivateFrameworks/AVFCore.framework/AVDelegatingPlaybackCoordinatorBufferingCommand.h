
@interface AVDelegatingPlaybackCoordinatorBufferingCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    float  _anticipatedPlaybackRate;
    long long  _commandOrderIndex;
    NSDate * _completionDueDate;
    AVDelegatingPlaybackCoordinator * _coordinator;
    NSString * _expectedCurrentItemIdentifier;
    AVCoordinatedPlaybackParticipant * _originator;
}

@property (nonatomic, readonly) float anticipatedPlaybackRate;
@property (nonatomic, readonly) NSDate *completionDueDate;

- (float)anticipatedPlaybackRate;
- (id)completionDueDate;
- (void)dealloc;
- (id)expectedCurrentItemIdentifier;
- (id)init;
- (id)initWithCoordinator:(id)arg1 originator:(id)arg2 expectedCurrentItemIdentifier:(id)arg3 commandOrderIndex:(long long)arg4 anticipatedPlaybackRate:(float)arg5 completionDueDate:(id)arg6;
- (id)originator;

@end
