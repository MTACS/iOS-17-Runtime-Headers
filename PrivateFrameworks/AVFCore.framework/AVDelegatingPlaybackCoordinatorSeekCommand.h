
@interface AVDelegatingPlaybackCoordinatorSeekCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    float  _anticipatedPlaybackRate;
    long long  _commandOrderIndex;
    NSDate * _completionDueDate;
    AVDelegatingPlaybackCoordinator * _coordinator;
    NSString * _expectedCurrentItemIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _itemTime;
    AVCoordinatedPlaybackParticipant * _originator;
    bool  _shouldBufferInAnticipationOfPlayback;
    bool  _shouldPause;
}

@property (nonatomic, readonly) float anticipatedPlaybackRate;
@property (nonatomic, readonly) NSDate *completionDueDate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } itemTime;
@property (nonatomic, readonly) bool shouldBufferInAnticipationOfPlayback;

- (float)anticipatedPlaybackRate;
- (id)completionDueDate;
- (void)dealloc;
- (id)expectedCurrentItemIdentifier;
- (id)init;
- (id)initWithCoordinator:(id)arg1 originator:(id)arg2 expectedCurrentItemIdentifier:(id)arg3 commandOrderIndex:(long long)arg4 itemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 shouldPause:(bool)arg6 shouldBufferInAnticipationOfPlayback:(bool)arg7 anticipatedPlaybackRate:(float)arg8 completionDueDate:(id)arg9;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTime;
- (id)originator;
- (bool)shouldBufferInAnticipationOfPlayback;

@end
