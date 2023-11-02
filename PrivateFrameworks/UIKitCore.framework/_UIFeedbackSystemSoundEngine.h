
@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine <_UIFeedbackPlayer_Internal> {
    id /* block */  _invalidationBlock;
    NSCountedSet * _suspendedSSIDs;
    NSCountedSet * _warmSSIDs;
}

@property (nonatomic, copy) id /* block */ invalidationBlock;
@property (nonatomic, readonly) NSCountedSet *suspendedSSIDs;
@property (nonatomic, readonly) NSCountedSet *warmSSIDs;

+ (id)_internalQueue;
+ (bool)_supportsPlayingIndividualFeedback:(id)arg1;
+ (id)sharedEngine;

- (void).cxx_destruct;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (void)_internal_performForEachSSIDsInFeedbacks:(id)arg1 block:(id /* block */)arg2;
- (bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (void)_internal_playFeedbackDataNow:(id)arg1 forFeedback:(id)arg2 withOptions:(id)arg3;
- (bool)_internal_prepareSystemSoundID:(unsigned int)arg1 forBeingActive:(bool)arg2;
- (void)_internal_startWarmingFeedbacks:(id)arg1;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_internal_stopWarmingFeedbacks:(id)arg1;
- (void)_internal_updateSuspension;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (id)_stats_key;
- (void)_stopFeedback:(id)arg1;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (id /* block */)invalidationBlock;
- (void)setInvalidationBlock:(id /* block */)arg1;
- (id)suspendedSSIDs;
- (id)warmSSIDs;

@end
