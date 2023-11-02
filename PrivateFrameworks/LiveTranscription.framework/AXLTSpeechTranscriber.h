
@interface AXLTSpeechTranscriber : NSObject <AXLTTranscriberProtocol, SFSpeechRecognitionTaskDelegate, SFSpeechRecognizerDelegate> {
    AVAudioEngine * _audioEngine;
    AVAudioSession * _audioSession;
    NSDate * _bufferLogTime;
    <AXLTTranscriberDelegateProtocol> * _delegate;
    bool  _isTranscribing;
    int  _pid;
    NSDate * _textLogTime;
    AXLTTranscriber * _transcriber;
}

@property (nonatomic, retain) AVAudioEngine *audioEngine;
@property (nonatomic, retain) AVAudioSession *audioSession;
@property (nonatomic, retain) NSDate *bufferLogTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXLTTranscriberDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTranscribing;
@property (nonatomic) int pid;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *textLogTime;
@property (nonatomic, retain) AXLTTranscriber *transcriber;

- (void).cxx_destruct;
- (id)audioEngine;
- (void)audioEngineConfigurationDidChange:(id)arg1;
- (id)audioSession;
- (id)bufferLogTime;
- (void)calcHistogramForBuffer:(id)arg1;
- (void)cleanUp;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)initializeAudioTap;
- (bool)isTranscribing;
- (void)mediaServicesWereReset:(id)arg1;
- (int)pid;
- (void)resetTranscription;
- (void)setAudioEngine:(id)arg1;
- (void)setAudioSession:(id)arg1;
- (void)setBufferLogTime:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsTranscribing:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setTextLogTime:(id)arg1;
- (void)setTranscriber:(id)arg1;
- (void)setupAudioSession;
- (void)setupTranscriberIfNeeded;
- (bool)startTranscription:(id*)arg1;
- (bool)stopTranscription:(id*)arg1;
- (id)textLogTime;
- (id)transcriber;

@end
