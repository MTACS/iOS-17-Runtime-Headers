
@interface ANSpeechUtil : NSObject <VSSpeechSynthesizerDelegate> {
    AVAudioSession * _audioSession;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _requests;
    VSSpeechSynthesizer * _synthesizer;
}

@property (nonatomic, retain) AVAudioSession *audioSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableDictionary *requests;
@property (readonly) Class superclass;
@property (nonatomic, retain) VSSpeechSynthesizer *synthesizer;

+ (id)_pcmAudioDataFromOpusAudio:(id)arg1;
+ (id)sharedUtil;

- (void).cxx_destruct;
- (id)_fileNameGeneratorWithFileExtension:(id)arg1;
- (void)_handleCompletedSpeechRequest:(id)arg1 error:(id)arg2;
- (id)audioSession;
- (id)init;
- (id)queue;
- (id)requests;
- (void)setAudioSession:(id)arg1;
- (void)setRequests:(id)arg1;
- (void)setSynthesizer:(id)arg1;
- (void)speakText:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSynthesisRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)speechSynthesizer:(id)arg1 withSynthesisRequest:(id)arg2 didGenerateAudioChunk:(id)arg3;
- (void)synthesizeSpeechToFileFromText:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)synthesizer;

@end
