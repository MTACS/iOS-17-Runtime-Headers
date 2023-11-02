
@interface AVDelegatingPlaybackCoordinatorPlayCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    long long  _commandOrderIndex;
    AVDelegatingPlaybackCoordinator * _coordinator;
    NSString * _expectedCurrentItemIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _hostClockTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _itemTime;
    AVCoordinatedPlaybackParticipant * _originator;
    float  _rate;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } hostClockTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } itemTime;
@property (nonatomic, readonly) float rate;

- (void)dealloc;
- (id)expectedCurrentItemIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })hostClockTime;
- (id)init;
- (id)initWithCoordinator:(id)arg1 originator:(id)arg2 expectedCurrentItemIdentifier:(id)arg3 commandOrderIndex:(long long)arg4 rate:(float)arg5 itemTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 hostClockTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTime;
- (id)originator;
- (float)rate;

@end
