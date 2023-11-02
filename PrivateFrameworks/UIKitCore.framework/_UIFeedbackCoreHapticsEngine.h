
@interface _UIFeedbackCoreHapticsEngine : _UIFeedbackEngine {
    CHHapticEngine * _coreHapticsEngine;
    NSMutableSet * _playersInUse;
    NSMutableSet * _playersToInvalidate;
}

@property (nonatomic, readonly) CHHapticEngine *coreHapticsEngine;

+ (id)_additionalEngineOptions;
+ (id)_internalQueue;
+ (void)_loadHapticEngineClass;
+ (void)_setHapticEngineCreationBlock:(id /* block */)arg1;
+ (void)_setHapticPatternClass:(Class)arg1;
+ (bool)_supportsAbortingDeactivation;
+ (bool)_supportsPlayingFeedbackPatternsDirectly;
+ (bool)_supportsPlayingIndividualFeedback:(id)arg1;
+ (bool)_supportsPlayingIndividualFeedback:(id)arg1 allowsIgnoreCapture:(bool)arg2;
+ (id)sharedEngine;

- (void).cxx_destruct;
- (void)_coreHapticsEngineStoppedForReason:(long long)arg1;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)arg1;
- (void)_internal_coreHapticsEngineFinishedWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)_internal_coreHapticsEngineStoppedForReason:(long long)arg1;
- (id)_internal_createCoreHapticsEngine;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(id /* block */)arg1;
- (bool)_internal_initializeCoreHapticsEngine;
- (void)_internal_prewarmUnderlyingPlayerWithCompletion:(id /* block */)arg1;
- (void)_internal_resetCoreHapticsEngine;
- (void)_internal_startRunningFeedbackPlayerWithCompletion:(id /* block */)arg1;
- (void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(id /* block */)arg1;
- (void)_resetCoreHapticsEngine;
- (id)_stats_key;
- (id)coreHapticsEngine;
- (id)init;

@end
