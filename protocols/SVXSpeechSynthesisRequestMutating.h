
@protocol SVXSpeechSynthesisRequestMutating <NSObject>

@required

- (void)setLocalizationKey:(NSString *)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPresynthesizedAudio:(SVXSpeechSynthesisAudio *)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSpeakableContext:(NSDictionary *)arg1;
- (void)setSpeakableText:(NSString *)arg1;
- (void)setStreamID:(NSString *)arg1;

@end
