
@interface SSRTriggerPhraseDetectorQuasar : NSObject {
    NSString * _locale;
    _EARSyncSpeechRecognizer * _syncRecognizer;
}

- (void).cxx_destruct;
- (id)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (id)endAudio;
- (id)initWithLocale:(id)arg1 configPath:(id)arg2 resourcePath:(id)arg3;
- (void)reset;

@end
