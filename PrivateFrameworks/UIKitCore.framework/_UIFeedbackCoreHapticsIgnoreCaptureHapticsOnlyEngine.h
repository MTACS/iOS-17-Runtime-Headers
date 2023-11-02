
@interface _UIFeedbackCoreHapticsIgnoreCaptureHapticsOnlyEngine : _UIFeedbackCoreHapticsEngine

+ (bool)_supportsPlayingIndividualFeedback:(id)arg1;
+ (id)sharedEngine;

- (id)_internal_createCoreHapticsEngine;

@end
