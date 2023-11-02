
@interface HKFeatureOnboardingRecordInaccessibilityCache : NSObject <HKFeatureOnboardingRecordFallbackProviding> {
    NSUserDefaults * _cachingDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedOnboardingRecordForFeatureIdentifier:(id)arg1;
- (id)fallbackOnboardingRecordForError:(id)arg1 featureIdentifier:(id)arg2;
- (id)initWithCachingDefaults:(id)arg1;
- (void)updateForRetrievedOnboardingRecord:(id)arg1 featureIdentifier:(id)arg2;

@end
