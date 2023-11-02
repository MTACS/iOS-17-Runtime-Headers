
@protocol _UIFeedbackData <NSObject>

@required

- (_UIFeedbackParameters *)audioParameters;
- (bool)canReuseCoreHapticsPlayer;
- (bool)disableEventUseVolumeEnvelope;
- (double)effectiveDelay;
- (double)effectiveDuration;
- (unsigned long long)effectiveEnabledFeedbackTypes;
- (unsigned long long)effectiveEventType;
- (unsigned int)effectiveSystemSoundID;
- (unsigned long long)fileFeedbackType;
- (NSURL *)fileURL;
- (_UIFeedbackParameters *)hapticParameters;
- (float)intensity;
- (bool)isTransientHaptic;
- (CHHapticPattern *)pattern;
- (float)sharpness;

@end
