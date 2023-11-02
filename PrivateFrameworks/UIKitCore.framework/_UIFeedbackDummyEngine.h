
@interface _UIFeedbackDummyEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal> {
    id /* block */  _invalidationBlock;
}

@property (nonatomic, copy) id /* block */ invalidationBlock;

+ (bool)_supportsPlayingIndividualFeedback:(id)arg1;
+ (id)sharedEngine;

- (void).cxx_destruct;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (id)_stats_key;
- (void)_stopFeedback:(id)arg1;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (id /* block */)invalidationBlock;
- (void)setInvalidationBlock:(id /* block */)arg1;

@end
