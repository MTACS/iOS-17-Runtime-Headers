
@interface TTSSpeechServer : NSObject <TTSSpeechService, TTSSpeechServiceUnitTesting> {
    NSObject<OS_dispatch_queue> * _mobileAssetWorkQueue;
    NSMutableDictionary * _serverInstances;
    TTSSpeechServerInstance * _speechInitializationInstance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *mobileAssetWorkQueue;
@property (nonatomic, retain) TTSSpeechServerInstance *speechInitializationInstance;
@property (readonly) Class superclass;

+ (id)regexRules;

- (void).cxx_destruct;
- (id)_behavesBadlyWithSpellMarkupForVoice:(id)arg1 string:(id)arg2 markupType:(long long)arg3;
- (id)_ttsCopyVoiceInfo:(id)arg1 type:(long long)arg2 queryingMobileAssets:(bool)arg3;
- (id)audioFileSettingsForVoice:(id)arg1;
- (bool)canInitializeSpeech:(id)arg1;
- (id)combinedProsodyMarkupForVoice:(id)arg1 string:(id)arg2 rate:(id)arg3 pitch:(id)arg4 volume:(id)arg5;
- (oneway void)continueSpeechRequest:(id)arg1;
- (id)embeddedPitchMarkupForVoice:(id)arg1 string:(id)arg2 pitch:(double)arg3;
- (id)embeddedRateMarkupForVoice:(id)arg1 string:(id)arg2 rate:(double)arg3;
- (id)embeddedVolumeMarkupForVoice:(id)arg1 string:(id)arg2 volume:(double)arg3;
- (bool)employSpeechMarkupForType:(long long)arg1 language:(id)arg2;
- (id)enclosedStringWithPhonemes:(id)arg1 originalString:(id)arg2;
- (id)genericMarkerMarkupForVoice:(id)arg1 name:(id)arg2;
- (id)getNewSpeechServerInstance;
- (oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(id /* block */)arg2;
- (id)getVocalizerWithLanguage:(id)arg1 defaultLanguage:(id)arg2 reinitIfNecessary:(bool)arg3 forceReinit:(bool)arg4 voiceType:(long long)arg5 gender:(long long)arg6 footprint:(long long)arg7 voiceName:(id)arg8 voiceIdentifier:(id)arg9 error:(id*)arg10;
- (id)init;
- (void)initializeSpeechServerInstance:(unsigned long long)arg1;
- (bool)isNashvilleService;
- (bool)isSiriNeuralVoice:(id)arg1;
- (bool)isSiriService;
- (bool)isVoiceValid:(id)arg1;
- (id)lhPhonemesFromIPA:(id)arg1 language:(id)arg2;
- (struct __CFArray { }*)loadedVoiceResources;
- (id)mobileAssetWorkQueue;
- (oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (id)phonemesFromIPA:(id)arg1 language:(id)arg2;
- (bool)requiresLHPPhonemes;
- (void)setMobileAssetWorkQueue:(id)arg1;
- (void)setServiceQueue:(id)arg1 forSynthesizerInstanceID:(unsigned long long)arg2;
- (void)setSpeechInitializationInstance:(id)arg1;
- (id)speechInitializationInstance;
- (id)speechMarkupStringForType:(long long)arg1 voice:(id)arg2 string:(id)arg3;
- (oneway void)startSpeechRequest:(id)arg1;
- (oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (id)supportedIPAPhonemeLanguages;
- (void)synthesizerInstanceDestroyed:(unsigned long long)arg1;

@end
