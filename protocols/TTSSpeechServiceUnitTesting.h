
@protocol TTSSpeechServiceUnitTesting <NSObject>

@required

+ (NSSet *)regexRules;

- (bool)canInitializeSpeech:(TTSSpeechVoice *)arg1;
- (struct __CFArray { }*)loadedVoiceResources;
- (NSString *)speechMarkupStringForType:(long long)arg1 voice:(TTSSpeechVoice *)arg2 string:(NSString *)arg3;

@end
