
@interface AXHapticFeedbackManager : NSObject

+ (id)sharedManager;

- (void)_playCancelPatternFeedback;
- (void)_playDiscreteFeedbackForType:(long long)arg1;
- (void)_playFeedback:(id)arg1;
- (void)_playFeedbackImpactBehaviorWithIntensity:(double)arg1;
- (void)_playPatternFeedback:(long long)arg1 numberOfRepetitions:(long long)arg2 atInterval:(double)arg3;
- (void)playHapticFeedbackForType:(long long)arg1;

@end
