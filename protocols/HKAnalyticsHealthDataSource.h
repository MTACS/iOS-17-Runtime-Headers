
@protocol HKAnalyticsHealthDataSource <NSObject>

@required

- (NSNumber *)ageWithCurrentDate:(NSDate *)arg1 error:(id*)arg2;
- (HKBiologicalSexObject *)biologicalSexWithError:(id*)arg1;
- (<HKFeatureAvailabilityProviding> *)featureAvailabilityProviderForIdentifier:(NSString *)arg1;
- (<HKFeatureStatusProviding> *)featureStatusProviderForIdentifier:(NSString *)arg1;
- (NSNumber *)isImproveHealthRecordsAllowedWithError:(id*)arg1;

@end
