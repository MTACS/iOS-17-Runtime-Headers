
@interface SBVoiceDisabledBundles : NSObject

+ (void)setAppDisabledVoiceControl:(bool)arg1 bundleIdentifier:(id)arg2;
+ (bool)voiceControlDisabledByCurrentlyRunningApp;

@end
