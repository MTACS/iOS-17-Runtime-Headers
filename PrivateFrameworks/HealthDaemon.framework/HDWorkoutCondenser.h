
@interface HDWorkoutCondenser : NSObject <HDPeriodicActivityDelegate> {
    _HDWorkoutCondenserAnalyticsAccumulator * _analyticsAccumulator;
    long long  _deletedSamplesThreshold;
    long long  _maximumSeriesSize;
    long long  _minimumSeriesSize;
    HDPeriodicActivity * _periodicActivity;
    HDAssertion * _preparedDatabaseAccessibilityAssertion;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)condensableQuantityTypes;
+ (id)seriesSyncIdentifierForEntity:(id)arg1 workout:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)workoutEntitiesRequiringCondensationWithProfile:(id)arg1 limit:(long long)arg2 allowRecondensation:(bool)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)condensableWorkoutsWithError:(id*)arg1;
- (bool)condenseWorkout:(id)arg1 error:(id*)arg2;
- (void)condenseWorkoutsForReason:(long long)arg1 workoutBatchLimit:(long long)arg2 completion:(id /* block */)arg3;
- (id)condensedWorkoutsWithError:(id*)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)setDeletedSamplesThreshold:(long long)arg1;
- (void)setMaximumSeriesSize:(long long)arg1;
- (void)setMinimumSeriesSize:(long long)arg1;

@end
