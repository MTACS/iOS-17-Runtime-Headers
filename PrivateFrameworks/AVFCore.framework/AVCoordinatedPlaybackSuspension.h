
@interface AVCoordinatedPlaybackSuspension : NSObject {
    NSDate * _beginDate;
    AVPlaybackCoordinator * _coordinator;
    struct OpaqueFigTimelineCoordinatorSuspension { } * _figSuspension;
    struct OpaqueFigSimpleMutex { } * _iVarMutex;
    NSString * _reason;
}

@property (nonatomic, readonly) NSDate *beginDate;
@property (nonatomic, readonly) NSString *reason;

- (struct OpaqueFigTimelineCoordinatorSuspension { }*)_figSuspension;
- (id)beginDate;
- (void)dealloc;
- (void)end;
- (void)endProposingNewTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)initWithCoordinator:(id)arg1 reason:(id)arg2;
- (id)reason;

@end
