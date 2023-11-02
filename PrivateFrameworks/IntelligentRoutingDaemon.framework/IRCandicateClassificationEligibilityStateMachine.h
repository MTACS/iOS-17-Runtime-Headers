
@interface IRCandicateClassificationEligibilityStateMachine : NSObject {
    unsigned long long  _downRankCounter;
    unsigned long long  _downRankDismissAndRejectRankCounter;
    long long  _eligibilityState;
    unsigned long long  _upRankCounter;
}

@property (nonatomic) unsigned long long downRankCounter;
@property (nonatomic) unsigned long long downRankDismissAndRejectRankCounter;
@property (nonatomic) long long eligibilityState;
@property (nonatomic) unsigned long long upRankCounter;

+ (long long)_classificationFromEligibility:(long long)arg1;

- (void)_downRankDismissAndRejectRankCounterIncrementAndTransitionToState:(long long)arg1 ifThresholdCrossed:(unsigned long long)arg2;
- (void)_downRankDismissAndRejectRankCounterReset;
- (void)_downrankCounterIncrementAndTransitionToState:(long long)arg1 ifThresholdCrossed:(unsigned long long)arg2;
- (void)_downrankCounterReset;
- (void)_transitionToState:(long long)arg1;
- (void)_uprankCounterIncrementAndTransitionToState:(long long)arg1 ifThresholdCrossed:(unsigned long long)arg2;
- (void)_uprankCounterReset;
- (unsigned long long)downRankCounter;
- (unsigned long long)downRankDismissAndRejectRankCounter;
- (long long)eligibilityState;
- (void)runWithEventType:(long long)arg1 smSettings:(id)arg2;
- (void)setDownRankCounter:(unsigned long long)arg1;
- (void)setDownRankDismissAndRejectRankCounter:(unsigned long long)arg1;
- (void)setEligibilityState:(long long)arg1;
- (void)setUpRankCounter:(unsigned long long)arg1;
- (unsigned long long)upRankCounter;

@end
