
@interface TTSSynthesisProviderSpeechServer : NSObject <TTSSpeechService, TTSSpeechServiceUnitTesting, TTSSpeechSynthesizerDelegate, TTSSynthesisProviderAudioEngineProtocol> {
    NSMutableDictionary * _requestMapping;
    NSMutableDictionary * _speechEngines;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *requestMapping;
@property (nonatomic, retain) NSMutableDictionary *speechEngines;
@property (readonly) Class superclass;

+ (id)regexRules;

- (void).cxx_destruct;
- (id)_escapeSSML:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nonSSMLSubstringRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromSSML:(id)arg2;
- (id)_performEscapeOrDeEscapeFor:(id)arg1 escape:(bool)arg2;
- (void)_purgeRequest:(id)arg1;
- (id)_speechEngineForSynthesizerInstance:(unsigned long long)arg1;
- (id)_ttsMarkerForSSEMarker:(id)arg1 forRequest:(id)arg2;
- (id)_unescapeDelimeterBoundedSSMLInString:(id)arg1;
- (id)audioFileSettingsForVoice:(id)arg1;
- (bool)canInitializeSpeech:(id)arg1;
- (id)combinedProsodyMarkupForVoice:(id)arg1 string:(id)arg2 rate:(id)arg3 pitch:(id)arg4 volume:(id)arg5;
- (oneway void)continueSpeechRequest:(id)arg1;
- (bool)employSpeechMarkupForType:(long long)arg1 language:(id)arg2;
- (id)enclosedStringWithPhonemes:(id)arg1 originalString:(id)arg2;
- (id)genericMarkerMarkupForVoice:(id)arg1 name:(id)arg2;
- (oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)initializeSpeechServerInstance:(unsigned long long)arg1;
- (bool)isNashvilleService;
- (bool)isSiriService;
- (bool)isVoiceValid:(id)arg1;
- (struct __CFArray { }*)loadedVoiceResources;
- (oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (id)phonemesFromIPA:(id)arg1 language:(id)arg2;
- (id)requestMapping;
- (void)setRequestMapping:(id)arg1;
- (void)setServiceQueue:(id)arg1 forSynthesizerInstanceID:(unsigned long long)arg2;
- (void)setSpeechEngines:(id)arg1;
- (id)speechEngines;
- (id)speechMarkupStringForType:(long long)arg1 voice:(id)arg2 string:(id)arg3;
- (oneway void)startSpeechRequest:(id)arg1;
- (oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (id)supportedIPAPhonemeLanguages;
- (void)synthesisProviderDidFinishSpeakingRequest:(id)arg1 successfully:(bool)arg2 withError:(id)arg3;
- (void)synthesisProviderDidStartSpeakingMarker:(id)arg1 forRequest:(id)arg2;
- (void)synthesizerInstanceDestroyed:(unsigned long long)arg1;

@end
