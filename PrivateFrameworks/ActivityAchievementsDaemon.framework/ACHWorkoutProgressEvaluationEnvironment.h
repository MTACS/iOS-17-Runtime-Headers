
@interface ACHWorkoutProgressEvaluationEnvironment : NSObject {
    unsigned long long  _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
    unsigned long long  _numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek;
}

@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek;

- (id)initWithNumberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek:(unsigned long long)arg1;
- (unsigned long long)numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
- (unsigned long long)numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek;
- (id)valueForUndefinedKey:(id)arg1;

@end
