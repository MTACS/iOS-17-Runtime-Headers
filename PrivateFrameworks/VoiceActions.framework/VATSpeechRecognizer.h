
@interface VATSpeechRecognizer : NSObject <_EARSpeechRecognitionResultStream> {
    NSData * _audioDataWithInjectedSilence;
    _EARSpeechRecognitionAudioBuffer * _buffer;
    bool  _detectedSpeechEndpoint;
    _EARSpeechRecognitionResultPackage * _finalResult;
    NSLocale * _language;
    NSURL * _modelURL;
    NSString * _modelVersion;
    id /* block */  _recognitionHandler;
    NSObject<OS_dispatch_queue> * _recognitionQueue;
    _EARSpeechRecognizer * _recognizer;
    int  _sampleRate;
    NSString * _task;
    double  endAudioTime;
    double  finalResultTime;
    double  firstPartialTime;
    double  firstSampleTime;
}

@property (nonatomic, retain) NSData *audioDataWithInjectedSilence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLocale *language;
@property (nonatomic, readonly) NSURL *modelURL;
@property (nonatomic, readonly) NSString *modelVersion;
@property (nonatomic, copy) id /* block */ recognitionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_recognizedResult:(id)arg1 error:(id)arg2;
- (void)addSpeechAudioData:(id)arg1;
- (id)audioDataWithInjectedSilence;
- (void)cancelRecognition;
- (void)endAudio;
- (id)initWithAssetPath:(id)arg1 language:(id)arg2;
- (id)initWithLanguage:(id)arg1;
- (id)initWithModelURL:(id)arg1 language:(id)arg2 modelVersion:(id)arg3;
- (id)language;
- (id)modelURL;
- (id)modelVersion;
- (id /* block */)recognitionHandler;
- (void)setAudioDataWithInjectedSilence:(id)arg1;
- (void)setRecognitionHandler:(id /* block */)arg1;
- (void)speechRecognizer:(id)arg1 didFinishRecognitionWithError:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResultPackage:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeFinalResults:(id)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizePartialResult:(id)arg2;
- (void)startRecognitionWithAutoStop:(bool)arg1 pcmBuffer:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)startRecognitionWithAutoStop:(bool)arg1 resultHandler:(id /* block */)arg2;
- (void)triggerServerSideEndPointer;

@end
