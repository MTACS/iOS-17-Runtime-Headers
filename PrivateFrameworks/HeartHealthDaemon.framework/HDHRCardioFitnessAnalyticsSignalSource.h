
@interface HDHRCardioFitnessAnalyticsSignalSource : HKHRCardioFitnessAnalyticsSignalSource {
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (long long)_biologicalSexWithError:(id*)arg1;
- (id)_birthDateComponentsWithError:(id*)arg1;
- (id)_classificationStringForCardioFitnessValue:(double)arg1 age:(long long)arg2 biologicalSex:(long long)arg3;
- (id)_latestCardioFitnessValueWithError:(id*)arg1;
- (id)biologicalSexStringWithError:(id*)arg1;
- (long long)bucketedAgeWithError:(id*)arg1;
- (id)initWithProfile:(id)arg1;
- (id)latestClassificationWithIsOnboarded:(bool)arg1 error:(id*)arg2;

@end
