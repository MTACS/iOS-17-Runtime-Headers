
@interface HKHRCardioFitnessAnalyticsClientSignalSource : HKHRCardioFitnessAnalyticsSignalSource {
    HKHealthStore * _healthStore;
}

- (void).cxx_destruct;
- (id)biologicalSexStringWithError:(id*)arg1;
- (long long)bucketedAgeWithError:(id*)arg1;
- (id)initWithHealthStore:(id)arg1;

@end
