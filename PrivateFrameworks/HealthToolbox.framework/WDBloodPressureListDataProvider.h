
@interface WDBloodPressureListDataProvider : WDSampleListDataProvider {
    NSArray * _systolicAndDiastolicTypes;
}

- (void).cxx_destruct;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (id)predicateForType:(id)arg1;
- (id)sampleTypes;
- (id)textForObject:(id)arg1;

@end
