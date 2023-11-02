
@protocol HDWorkoutDataDestination <NSObject>

@required

- (void)addMetadata:(NSDictionary *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (void)addOtherSamples:(NSArray *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (void)addQuantities:(NSArray *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (void)addWorkoutEvents:(NSArray *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (void)didBeginActivity:(HKWorkoutActivity *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (void)didEndActivity:(HKWorkoutActivity *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (void)didSuggestActivity:(HKWorkoutActivity *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (void)updateWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 dataSource:(id <HDWorkoutDataSource>)arg2;
- (<HDWorkoutDataAccumulator> *)workoutDataAccumulator;
- (unsigned long long)workoutDataDestinationState;
- (HKDataFlowLink *)workoutDataFlowLink;
- (NSUUID *)workoutDataProcessorUUID;

@optional

- (void)didDisconnectFromRemoteWithError:(NSError *)arg1;
- (void)didReceiveDataFromRemoteWorkoutSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)didSyncCurrentActivity:(HKWorkoutActivity *)arg1;
- (void)didSyncStateEvent:(long long)arg1 date:(NSDate *)arg2;
- (void)didSyncTransitionToNewState:(long long)arg1 date:(NSDate *)arg2;
- (void)remoteSessionDidRecover;

@end
