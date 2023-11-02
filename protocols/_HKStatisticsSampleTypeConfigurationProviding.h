
@protocol _HKStatisticsSampleTypeConfigurationProviding <NSObject>

@required

- (long long)aggregationStyleForStatistics;
- (HKUnit *)canonicalUnitForStatistics;
- (bool)supportsStatisticOptions:(unsigned long long)arg1;
- (HKSampleType *)underlyingSampleType;
- (void)validateUnitForStatistic:(HKUnit *)arg1;

@end
