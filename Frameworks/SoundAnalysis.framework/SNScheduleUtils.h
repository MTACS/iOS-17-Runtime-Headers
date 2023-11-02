
@interface SNScheduleUtils : NSObject

+ (bool)scheduleOntoBudgetedQueue:(id)arg1 block:(id /* block */)arg2 blockCost:(long long)arg3 queueFundsSpent:(void*)arg4 queueFundsEarned:(void*)arg5 queueStopped:(void*)arg6;
+ (bool)startStopServiceWithClientCount:(long long)arg1 serviceIsRunning:(bool)arg2 startAction:(id /* block */)arg3 stopAction:(id /* block */)arg4;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })updateHeartbeatTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 givenCurrentAudioTime:(id)arg2 heartbeatIntervalSeconds:(double)arg3 preferredIntervalTimescale:(int)arg4 reanchor:(id /* block */)arg5 action:(id /* block */)arg6 error:(id*)arg7;

- (id)init;

@end
