
@interface TTSVocalizer : NSObject {
    long long  _speechGender;
    NSString * _ttsVocalizerCurrentLanguageCode;
    struct { char *x1; char *x2; char *x3; bool x4; int x5; unsigned long long x6; int x7; char *x8[3]; struct __CFString {} *x9; long long x10; long long x11; long long x12; struct __CFString {} *x13; } * _ttsVocalizerDataClass;
    struct __CFArray { } * _ttsVocalizerResourceDataPtrs;
    struct __CFData { } * _ttsVocalizerRulesetData;
}

@property (nonatomic) long long speechGender;
@property (nonatomic, retain) NSString *ttsVocalizerCurrentLanguageCode;
@property (nonatomic) struct { char *x1; char *x2; char *x3; bool x4; int x5; unsigned long long x6; int x7; char *x8[3]; struct __CFString {} *x9; long long x10; long long x11; long long x12; struct __CFString {} *x13; }*ttsVocalizerDataClass;
@property (nonatomic, retain) struct __CFArray { }*ttsVocalizerResourceDataPtrs;
@property (nonatomic, retain) struct __CFData { }*ttsVocalizerRulesetData;

- (void).cxx_destruct;
- (id)_ttsVocalizerAppendPhonemeToString:(unsigned short)arg1 phonemeString:(id)arg2;
- (id)_ttsVocalizerAssetPath:(long long)arg1;
- (id)_ttsVocalizerCopyAvailableVoiceInfo:(const struct __CFArray {}**)arg1;
- (id)_ttsVocalizerCreateInstanceWithDesiredVoiceName:(id)arg1 desiredFootprint:(long long)arg2 languageCode:(id)arg3 voiceType:(long long)arg4;
- (unsigned char)_ttsVocalizerDefaultVoiceIsFallback;
- (void)_ttsVocalizerDestroy;
- (void)_ttsVocalizerDestroyInstance;
- (double)_ttsVocalizerGetSampleRate;
- (bool)_ttsVocalizerIsInitialized;
- (void)_ttsVocalizerLoadProgrammaticRules:(bool)arg1 forTests:(bool)arg2;
- (struct __CFArray { }*)_ttsVocalizerLoadedResources;
- (unsigned int)_ttsVocalizerReallyLoadResource:(const char *)arg1 rules:(id)arg2 resource:(struct _VE_HSAFE { void *x1; unsigned int x2; }*)arg3 supportsAccurateWordCallbacks:(bool)arg4 resourceIdentifier:(id)arg5;
- (id)_ttsVocalizerSetParameters:(float)arg1 pitch:(float)arg2 volume:(float)arg3 footprintID:(long long)arg4;
- (long long)_ttsVocalizerSpeechGender;
- (void)dealloc;
- (id)initWithLanguage:(id)arg1 defaultLanguage:(id)arg2 reinitIfNecessary:(bool)arg3 forceReinit:(bool)arg4 voiceType:(long long)arg5 gender:(long long)arg6 footprint:(long long)arg7 voiceName:(id)arg8 voiceIdentifier:(id)arg9 error:(id*)arg10;
- (void)loadResource:(id)arg1 resourceURL:(id)arg2 supportsAccurateWordCallbacks:(bool)arg3;
- (bool)readyForSynthesis;
- (void)setSpeechGender:(long long)arg1;
- (void)setTtsVocalizerCurrentLanguageCode:(id)arg1;
- (void)setTtsVocalizerDataClass:(struct { char *x1; char *x2; char *x3; bool x4; int x5; unsigned long long x6; int x7; char *x8[3]; struct __CFString {} *x9; long long x10; long long x11; long long x12; struct __CFString {} *x13; }*)arg1;
- (void)setTtsVocalizerResourceDataPtrs:(struct __CFArray { }*)arg1;
- (void)setTtsVocalizerRulesetData:(struct __CFData { }*)arg1;
- (long long)speechGender;
- (void)stopSynthesis;
- (id)ttsVocalizerCurrentLanguageCode;
- (struct { char *x1; char *x2; char *x3; bool x4; int x5; unsigned long long x6; int x7; char *x8[3]; struct __CFString {} *x9; long long x10; long long x11; long long x12; struct __CFString {} *x13; }*)ttsVocalizerDataClass;
- (struct __CFArray { }*)ttsVocalizerResourceDataPtrs;
- (struct __CFData { }*)ttsVocalizerRulesetData;

@end
