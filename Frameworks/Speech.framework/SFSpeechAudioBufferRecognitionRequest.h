
@interface SFSpeechAudioBufferRecognitionRequest : SFSpeechRecognitionRequest {
    bool  _audioEnded;
    <SFSpeechRecognitionBufferDelegate> * _bufferDelegate;
    AVAudioConverter * _converter;
    bool  _narrowband;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queuedBuffers;
}

@property (nonatomic, readonly) AVAudioFormat *nativeAudioFormat;

- (void).cxx_destruct;
- (id)_initWithNarrowband:(bool)arg1;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;
- (id)_startedLocalConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 taskIdentifier:(id)arg5;
- (void)appendAudioPCMBuffer:(id)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)endAudio;
- (id)init;
- (id)nativeAudioFormat;

@end
