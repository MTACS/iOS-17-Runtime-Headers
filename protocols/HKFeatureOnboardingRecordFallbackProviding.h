
@protocol HKFeatureOnboardingRecordFallbackProviding <NSObject>

@required

- (HKFeatureOnboardingRecord *)fallbackOnboardingRecordForError:(NSError *)arg1 featureIdentifier:(NSString *)arg2;
- (void)updateForRetrievedOnboardingRecord:(HKFeatureOnboardingRecord *)arg1 featureIdentifier:(NSString *)arg2;

@end
