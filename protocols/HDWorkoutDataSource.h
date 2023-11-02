
@protocol HDWorkoutDataSource <NSObject>

@required

- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didBeginActivity:(HKWorkoutActivity *)arg2;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didEndActivity:(HKWorkoutActivity *)arg2;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didInsertEvent:(HKWorkoutEvent *)arg2;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 didUpdateConfiguration:(HKWorkoutConfiguration *)arg2;
- (void)workoutDataDestination:(id <HDWorkoutDataDestination>)arg1 requestsDataFrom:(NSDate *)arg2 to:(NSDate *)arg3;
- (void)workoutDataDestination:(void *)arg1 requestsFinalDataFrom:(void *)arg2 to:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <HDWorkoutDataDestination> *, NSDate *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (HKDataFlowLink *)workoutDataFlowLink;
- (NSUUID *)workoutDataProcessorUUID;

@optional

- (NSSet *)quantityTypesToIncludeWhilePaused;

@end
