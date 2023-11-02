
@interface CoreEmbeddedSpeechAnalyzer : NSObject <CoreEmbeddedSpeechRecognizerProvider> {
    void _audioEnqueuer;
    void _instanceUUID;
    void _operationEnqueuer;
    void _taskPriority;
    void analyzerOutputHandlerTask;
    void audioDurationMs;
    void audioFormat;
    void bufferedAudioDataLength;
    void bufferedAudioEnded;
    void bufferedAudioPackets;
    void bufferedRequestEagerResultData;
    void delegate;
    void enablesVoiceCommands;
    void finishAudioError;
    void isHighPriority;
    void operationDequeuerTask;
    void processedAudioDuration;
    void recognitionBeginTime;
    void recognitionEndTime;
    void samplingRate;
    void speechAnalyzer;
    void timeUntilRecognitionStartInMs;
    void transcriber;
}

@property (nonatomic) <CoreEmbeddedSpeechRecognizerDelegate> *delegate;

- (void).cxx_destruct;
- (void)addAudioPacket:(id)arg1;
- (void)addAudioPacket:(id)arg1 packetRecordedTime:(id)arg2 packetReadyUpstreamTime:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)finishAudio;
- (id)init;
- (id)initWithDelegate:(id)arg1 instanceUUID:(char *)arg2;
- (void)invalidate;
- (void)pauseRecognition;
- (void)preheatSpeechRecognitionWithAssetConfig:(id)arg1 preheatSource:(id)arg2 modelOverrideURL:(id)arg3;
- (void)requestEagerResult;
- (void)resumeRecognitionWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)startMissingAssetDownload;
- (void)startSpeechRecognitionWithParameters:(id)arg1 didStartHandlerWithInfo:(id /* block */)arg2;
- (void)stopAudioDecoding;

@end
