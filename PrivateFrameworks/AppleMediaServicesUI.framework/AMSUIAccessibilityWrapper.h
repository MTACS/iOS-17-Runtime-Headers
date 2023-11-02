
@interface AMSUIAccessibilityWrapper : NSObject

+ (bool)buttonShapesEnabled;
+ (bool)isAssistiveTouchRunning;
+ (bool)isBoldTextEnabled;
+ (bool)isClosedCaptioningEnabled;
+ (bool)isDarkerSystemColorsEnabled;
+ (bool)isGrayscaleEnabled;
+ (bool)isGuidedAccessEnabled;
+ (bool)isInvertColorsEnabled;
+ (bool)isMonoAudioEnabled;
+ (bool)isOnOffSwitchLabelsEnabled;
+ (bool)isReduceMotionEnabled;
+ (bool)isReduceTransparencyEnabled;
+ (bool)isShakeToUndoEnabled;
+ (bool)isSpeakScreenEnabled;
+ (bool)isSpeakSelectionEnabled;
+ (bool)isSwitchControlRunning;
+ (bool)isVideoAutoplayEnabled;
+ (bool)isVoiceOverRunning;
+ (bool)prefersCrossFadeTransitions;
+ (bool)shouldDifferentiateWithoutColor;

@end
