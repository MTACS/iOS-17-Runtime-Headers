
@interface TTSMauiVocalizer : TTSVocalizer {
    char * _ttsVocalizerCurrentLanguageName;
    char * _ttsVocalizerDefaultVoiceName;
    struct _VE_HSAFE { 
        void *pHandleData; 
        unsigned int u32Check; 
    }  _ttsVocalizerHSpeech;
    struct _VE_HSAFE { void *x1; unsigned int x2; } * _ttsVocalizerHSpeechPtr;
    struct _VE_HSAFE { 
        void *pHandleData; 
        unsigned int u32Check; 
    }  _veInstance;
}

- (double)_ttsMauiVocalizerGetSampleRateFromEnum:(int)arg1;
- (id)_ttsVocalizerCreateInstanceWithDesiredVoiceName:(char **)arg1 desiredFootprint:(long long)arg2 languageCode:(struct __CFString { }*)arg3 voiceType:(long long)arg4;
- (void)_ttsVocalizerDestroy;
- (void)_ttsVocalizerDestroyInstance;
- (unsigned int)_ttsVocalizerGetActiveLanguage:(struct _VE_HSAFE { void *x1; unsigned int x2; })arg1 language:(char **)arg2;
- (double)_ttsVocalizerGetSampleRate;
- (id)_ttsVocalizerProcessText:(struct __CFString { }*)arg1 callback:(void*)arg2 context:(void*)arg3;
- (unsigned int)_ttsVocalizerReallyLoadResource:(const char *)arg1 rules:(struct __CFData { }*)arg2 resource:(struct _VE_HSAFE { void *x1; unsigned int x2; }*)arg3 supportsAccurateWordCallbacks:(unsigned char)arg4 resourceIdentifier:(id)arg5;
- (id)_ttsVocalizerSetParameters:(float)arg1 pitch:(float)arg2 volume:(float)arg3 footprintID:(long long)arg4;
- (id)initWithLanguage:(id)arg1 defaultLanguage:(id)arg2 reinitIfNecessary:(bool)arg3 forceReinit:(bool)arg4 voiceType:(long long)arg5 gender:(long long)arg6 footprint:(long long)arg7 voiceName:(id)arg8 voiceIdentifier:(id)arg9 error:(id*)arg10;
- (bool)readyForSynthesis;

@end
