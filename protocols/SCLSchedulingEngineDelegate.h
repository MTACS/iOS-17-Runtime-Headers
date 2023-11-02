
@protocol SCLSchedulingEngineDelegate <NSObject>

@required

- (void)schedulingEngine:(SCLSchedulingEngine *)arg1 didUpdateState:(SCLState *)arg2 fromState:(SCLState *)arg3 nextEvaluationDate:(NSDate *)arg4;

@end
