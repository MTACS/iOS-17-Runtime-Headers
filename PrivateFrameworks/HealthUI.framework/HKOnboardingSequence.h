
@interface HKOnboardingSequence : NSObject {
    NSArray * _pages;
}

@property (nonatomic, readonly) NSArray *pages;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (void).cxx_destruct;
- (id)initWithPages:(id)arg1;
- (id)pages;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

+ (id)firstTimeAtrialFibrillationAvailabilitySequence;
+ (id)firstTimeAtrialFibrillationOnboardingSequence;
+ (id)firstTimeElectrocardiogramAvailabilitySequence;
+ (id)firstTimeElectrocardiogramOnboardingSequenceWithAlgorithmVersion:(long long)arg1;
+ (id)upgradingElectrocardiogramAvailabilitySequence;
+ (id)upgradingElectrocardiogramSequenceFromAlgorithmVersion:(long long)arg1 toAlgorithmVersion:(long long)arg2;

@end
