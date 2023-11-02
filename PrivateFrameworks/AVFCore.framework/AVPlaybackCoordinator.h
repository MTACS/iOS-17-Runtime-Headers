
@interface AVPlaybackCoordinator : NSObject

@property (nonatomic, readonly) NSArray *otherParticipants;
@property (nonatomic, readonly) NSArray *suspensionReasons;

+ (void)initialize;

- (id)_currentWaitingPoliciesArray;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { }*)arg1;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { }*)arg1 proposingNewTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)beginSuspensionForReason:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })expectedItemTimeAtHostTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (id)initInternal;
- (bool)isDefunct;
- (id)otherParticipants;
- (long long)participantLimitForWaitingOutSuspensionsWithReason:(id)arg1;
- (bool)pauseSnapsToMediaTimeOfOriginator;
- (void)setParticipantLimit:(long long)arg1 forWaitingOutSuspensionsWithReason:(id)arg2;
- (void)setPauseSnapsToMediaTimeOfOriginator:(bool)arg1;
- (void)setSuspensionReasonsThatTriggerWaiting:(id)arg1;
- (id)suspensionReasons;
- (id)suspensionReasonsThatTriggerWaiting;

@end
