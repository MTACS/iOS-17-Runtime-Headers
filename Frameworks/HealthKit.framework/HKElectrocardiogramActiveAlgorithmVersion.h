
@interface HKElectrocardiogramActiveAlgorithmVersion : NSObject

+ (id)_maxKnownAlgorithmVersionOnboardedWithKeyValueDomain:(id)arg1;
+ (long long)algorithmVersionForOnboardingVersion:(long long)arg1;
+ (id)knownAlgorithmVersionFromOnboardedVersion:(id)arg1 keyValueDomain:(id)arg2;
+ (unsigned long long)onboardingVersionForKnownAlgorithmVersion:(long long)arg1;
+ (id)versionWithHealthStore:(id)arg1 error:(id*)arg2;

@end
