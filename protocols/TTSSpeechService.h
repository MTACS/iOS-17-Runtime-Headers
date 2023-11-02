
@protocol TTSSpeechService <NSObject>

@required

- (oneway void)continueSpeechRequest:(TTSSpeechRequest *)arg1;
- (oneway void)getSpeechIsActiveForRequest:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: TTSSpeechRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)initializeSpeechServerInstance:(unsigned long long)arg1;
- (bool)isVoiceValid:(TTSSpeechVoice *)arg1;
- (oneway void)pauseSpeechRequest:(TTSSpeechRequest *)arg1 atMark:(long long)arg2;
- (void)setServiceQueue:(NSObject<OS_dispatch_queue> *)arg1 forSynthesizerInstanceID:(unsigned long long)arg2;
- (NSString *)speechMarkupStringForType:(long long)arg1 voice:(TTSSpeechVoice *)arg2 string:(NSString *)arg3;
- (oneway void)startSpeechRequest:(TTSSpeechRequest *)arg1;
- (oneway void)stopSpeechRequest:(TTSSpeechRequest *)arg1 atMark:(long long)arg2;
- (NSSet *)supportedIPAPhonemeLanguages;
- (void)synthesizerInstanceDestroyed:(unsigned long long)arg1;

@optional

- (NSDictionary *)audioFileSettingsForVoice:(TTSSpeechVoice *)arg1;
- (NSString *)combinedProsodyMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 rate:(NSNumber *)arg3 pitch:(NSNumber *)arg4 volume:(NSNumber *)arg5;
- (NSString *)embeddedPitchMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 pitch:(double)arg3;
- (NSString *)embeddedRateMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 rate:(double)arg3;
- (NSString *)embeddedVolumeMarkupForVoice:(TTSSpeechVoice *)arg1 string:(NSString *)arg2 volume:(double)arg3;
- (bool)employSpeechMarkupForType:(long long)arg1 language:(NSString *)arg2;
- (NSString *)enclosedStringWithPhonemes:(NSString *)arg1 originalString:(NSString *)arg2;
- (NSString *)genericMarkerMarkupForVoice:(TTSSpeechVoice *)arg1 name:(NSString *)arg2;
- (bool)isNashvilleService;
- (bool)isSiriNeuralVoice:(TTSSpeechVoice *)arg1;
- (bool)isSiriService;
- (NSString *)lhPhonemesFromIPA:(NSString *)arg1 language:(NSString *)arg2;
- (NSString *)phonemesFromIPA:(NSString *)arg1 language:(NSString *)arg2;
- (NSString *)phonemesFromLHPhonemes:(NSString *)arg1 language:(NSString *)arg2;
- (NSString *)serviceIdentifier;

@end
