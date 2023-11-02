
@interface ACHWorkoutUtility : NSObject {
    HDDatabaseTransactionContext * _databaseContext;
    HDSQLitePredicate * _firstPartyPredicate;
    HDProfile * _profile;
}

@property (nonatomic, copy) HDDatabaseTransactionContext *databaseContext;
@property (nonatomic, retain) HDSQLitePredicate *firstPartyPredicate;
@property (nonatomic) HDProfile *profile;

- (void).cxx_destruct;
- (unsigned long long)_countOfSamplesWithPredicate:(id)arg1;
- (unsigned long long)_countOfSamplesWithPredicate:(id)arg1 andLocationType:(unsigned long long)arg2;
- (void)_performReadTransaction:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)_predicateWithDuration:(double)arg1 withType:(id)arg2 startingAtOrAfterDate:(id)arg3 endingOnOrBeforeDate:(id)arg4 firstPartyOnly:(bool)arg5;
- (id)_readingContextWithIdentifier:(id)arg1;
- (double)_sumMindfulMinutesForSessions:(id)arg1 dateInterval:(id)arg2;
- (id)bestDistanceForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2;
- (id)databaseContext;
- (id)firstPartyPredicate;
- (id)initWithProfile:(id)arg1;
- (id)mindfulMinutesForForDateInterval:(id)arg1;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(unsigned long long)arg2 andLocation:(unsigned long long)arg3 containedInInterval:(id)arg4;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(unsigned long long)arg2 endingOnOrBeforeDate:(id)arg3;
- (unsigned long long)numberOfWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2;
- (id)profile;
- (void)setDatabaseContext:(id)arg1;
- (void)setFirstPartyPredicate:(id)arg1;
- (void)setProfile:(id)arg1;
- (id)workoutsInDateInterval:(id)arg1;
- (id)workoutsWithDuration:(double)arg1 withType:(id)arg2 startingAtOrAfterDate:(id)arg3 endingOnOrBeforeDate:(id)arg4 firstPartyOnly:(bool)arg5;

@end
