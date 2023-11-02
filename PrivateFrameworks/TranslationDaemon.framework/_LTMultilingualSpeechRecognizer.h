
@interface _LTMultilingualSpeechRecognizer : NSObject {
    NSDictionary * _recognizers;
}

- (void).cxx_destruct;
- (void)addSpeechAudioData:(id)arg1;
- (void)cancelRecognition;
- (void)endAudio;
- (id)initWithModelURLs:(id)arg1 modelVersions:(id)arg2;
- (void)setLanguagesRecognized:(id)arg1;
- (void)startRecognitionForLocale:(id)arg1 autoEndpoint:(bool)arg2 resultHandler:(id /* block */)arg3;

@end
