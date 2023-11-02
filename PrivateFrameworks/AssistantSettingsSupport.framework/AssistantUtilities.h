
@interface AssistantUtilities : NSObject

+ (bool)assistantEnabled;
+ (id)assistantLanguage;
+ (bool)deviceIsClass:(struct __CFString { }*)arg1;
+ (bool)deviceIsVision;
+ (bool)deviceIsiPhone;
+ (bool)deviceIsiPod;
+ (void)disableVoiceTrigger;
+ (void)disableVoiceTriggerAndSiriEnrollmentForCurrentLanguage;
+ (void)enableVoiceTrigger;
+ (bool)isHardwareButtonTrigger;
+ (bool)isVoiceTriggerEnabled;
+ (bool)needsTrainingData:(bool)arg1;
+ (id)numberFormatter;
+ (bool)shouldShowCompactVoiceTriggerSpecifier;

@end
