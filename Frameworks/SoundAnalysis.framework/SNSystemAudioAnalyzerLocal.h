
@interface SNSystemAudioAnalyzerLocal : NSObject <SNSystemAudioAnalyzerProtocol> {
    bool  _allowSuppressionOfMicrophoneUsageIndicator;
    NSObject<OS_dispatch_queue> * _analysisQueue;
    SNAudioConfiguration * _audioConfiguration;
    bool  _audioIsRunning;
    AVAudioSession * _audioSession;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _observers;
    AVAudioFormat * _recordFormat;
    SNAudioRecordingQueue * _recordingQueue;
    NSMutableArray * _requests;
    SNAudioStreamAnalyzer * _streamAnalyzer;
}

- (void).cxx_destruct;
- (bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id*)arg3;
- (void)handleAVAudioSessionInterruption:(id)arg1;
- (void)handleAVAudioSessionMediaServicesLost:(id)arg1;
- (void)handleAVAudioSessionMediaServicesReset:(id)arg1;
- (void)handleAVAudioSessionRouteChange:(id)arg1;
- (id)init;
- (id)initAllowingSuppresionOfMicrophoneUsageIndicator:(bool)arg1;
- (void)removeAllRequests;
- (void)removeRequest:(id)arg1;
- (void)setAudioConfiguration:(id)arg1;

@end
