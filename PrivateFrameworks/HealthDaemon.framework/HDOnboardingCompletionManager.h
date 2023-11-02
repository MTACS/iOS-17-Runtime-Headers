
@interface HDOnboardingCompletionManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _observersByFeatureIdentifier;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1;
- (bool)insertCodableOnboardingCompletions:(id)arg1 syncProvenance:(long long)arg2 error:(id*)arg3;
- (bool)insertOnboardingCompletion:(id)arg1 error:(id*)arg2;
- (id)onboardingCompletionsForHighestVersionOfFeatureIdentifier:(id)arg1 error:(id*)arg2;
- (id)onboardingCompletionsForLowestVersionOfFeatureIdentifier:(id)arg1 error:(id*)arg2;
- (void)registerObserver:(id)arg1 featureIdentifier:(id)arg2 queue:(id)arg3;
- (bool)resetOnboardingCompletionsForFeature:(id)arg1 error:(id*)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1 featureIdentifier:(id)arg2;

@end
