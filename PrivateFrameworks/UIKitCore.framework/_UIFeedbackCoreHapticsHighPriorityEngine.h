
@interface _UIFeedbackCoreHapticsHighPriorityEngine : _UIFeedbackCoreHapticsEngine

+ (id)_additionalEngineOptions;
+ (bool)_supportsPlayingIndividualFeedback:(id)arg1;
+ (id)sharedEngine;

- (id)_internal_createCoreHapticsEngine;

@end
