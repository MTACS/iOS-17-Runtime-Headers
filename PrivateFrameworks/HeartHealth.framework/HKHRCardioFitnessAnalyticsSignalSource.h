
@interface HKHRCardioFitnessAnalyticsSignalSource : NSObject

@property (nonatomic, readonly) NSString *activeWatchProductType;
@property (nonatomic, readonly) NSString *featureVersion;
@property (nonatomic, readonly) bool isImproveHealthAndActivityAllowed;

- (id)activeWatchProductType;
- (id)biologicalSexStringForBiologicalSex:(long long)arg1;
- (id)biologicalSexStringWithError:(id*)arg1;
- (long long)bucketedAgeForDateOfBirthComponents:(id)arg1;
- (long long)bucketedAgeWithError:(id*)arg1;
- (id)featureVersion;
- (bool)isImproveHealthAndActivityAllowed;

@end
