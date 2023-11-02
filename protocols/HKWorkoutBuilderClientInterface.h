
@protocol HKWorkoutBuilderClientInterface <NSObject>

@required

- (void)clientRemote_didBeginActivity:(HKWorkoutActivity *)arg1;
- (void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (void)clientRemote_didEndActivity:(HKWorkoutActivity *)arg1;
- (void)clientRemote_didFailWithError:(NSError *)arg1;
- (void)clientRemote_didFinishRecovery;
- (void)clientRemote_didRecoverSeriesBuilders:(NSDictionary *)arg1;
- (void)clientRemote_didUpdateActivities:(NSArray *)arg1;
- (void)clientRemote_didUpdateEvents:(NSArray *)arg1;
- (void)clientRemote_didUpdateMetadata:(NSDictionary *)arg1;
- (void)clientRemote_didUpdateStatistics:(HKWorkoutBuilderStatistics *)arg1;
- (void)clientRemote_finishedWorkout:(HKWorkout *)arg1;
- (void)clientRemote_stateDidChange:(long long)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3;
- (void)clientRemote_synchronizeWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
