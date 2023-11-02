
@interface CSVTUITrainingSession : NSObject <CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate, SFSpeechRecognitionTaskDelegate> {
    bool  _ASRErrorOccured;
    <CSVTUIAudioSession> * _audioSession;
    CSAudioZeroCounter * _continuousZeroCounter;
    CSVTUITrainingSessionHelper * _helper;
    CSVTUIKeywordDetector * _keywordDetector;
    NSString * _locale;
    NSTimer * _masterTimer;
    NSUUID * _mhUUID;
    long long  _numRequiredTrailingSamples;
    long long  _numTrailingSamples;
    NSMutableArray * _pcmBufArray;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _resultReported;
    <CSVTUITrainingSessionDelegate> * _sessionDelegate;
    long long  _sessionNumber;
    bool  _sessionProcess;
    bool  _sessionSuspended;
    SFSpeechAudioBufferRecognitionRequest * _speechRecognitionRequest;
    SFSpeechRecognitionTask * _speechRecognitionTask;
    SFSpeechRecognizer * _speechRecognizer;
    long long  _status;
    id /* block */  _trainingCompletion;
    id /* block */  _trainingCompletionWithResult;
    long long  _utteranceId;
    NSDictionary * _voiceTriggerEventInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *voiceTriggerEventInfo;

- (void).cxx_destruct;
- (void)_registerEndPointTimeout;
- (void)audioSessionDidStartRecording:(bool)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (void)closeSessionWithCompletion:(id /* block */)arg1;
- (void)closeSessionWithStatus:(int)arg1 successfully:(bool)arg2;
- (void)closeSessionWithStatus:(int)arg1 successfully:(bool)arg2 complete:(id /* block */)arg3;
- (void)closeSessionWithStatus:(int)arg1 successfully:(bool)arg2 voiceTriggerEventInfo:(id)arg3 completeWithResult:(id /* block */)arg4;
- (void)computeRequiredTrailingSamples;
- (id)createAVAudioPCMBufferWithNSData:(id)arg1;
- (id)createDigitalZeroReporterWithVoiceTriggerEventInfo:(id)arg1;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)arg1;
- (void)feedSpeechRecognitionTrailingSamplesWithCompletedBlock:(id /* block */)arg1;
- (void)feedSpeechRecognitionWithPCMBuffer;
- (void)finishSpeechRecognitionTask;
- (int)getTrainingAudioStatusWithVTEI:(id)arg1 digitalZeroReporter:(id)arg2;
- (void)handleAudioBufferForVTWithAudioInput:(id)arg1 withDetectedBlock:(id /* block */)arg2;
- (void)handleAudioInput:(id)arg1;
- (void)handleMasterTimeout:(id)arg1;
- (id)initWithUtteranceId:(long long)arg1 sessionNumber:(long long)arg2 Locale:(id)arg3 audioSession:(id)arg4 keywordDetector:(id)arg5 speechRecognizer:(id)arg6 speechRecognitionRequest:(id)arg7 sessionDelegate:(id)arg8 sessionDispatchQueue:(id)arg9 mhUUID:(id)arg10 zeroCounter:(id)arg11 completionWithResult:(id /* block */)arg12;
- (id)initWithUtteranceId:(long long)arg1 sessionNumber:(long long)arg2 Locale:(id)arg3 audioSession:(id)arg4 keywordDetector:(id)arg5 speechRecognizer:(id)arg6 speechRecognitionRequest:(id)arg7 sessionDelegate:(id)arg8 sessionDispatchQueue:(id)arg9 zeroCounter:(id)arg10 completion:(id /* block */)arg11;
- (void)logTrainingSessionCompleteWithVoiceTriggerEventInfo:(id)arg1;
- (long long)numSamplesInPCMBuffer;
- (void)pushAudioInputIntoPCMBuffer:(id)arg1;
- (id)requestTriggeredUtterance:(id)arg1;
- (bool)resultAlreadyReported;
- (void)resumeTraining;
- (void)setVoiceTriggerEventInfo:(id)arg1;
- (bool)setupPhraseSpotter;
- (void)setupSpeechRecognitionTaskWithVoiceTriggerEventInfo:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)startMasterTimerWithTimeout:(float)arg1;
- (void)startTraining;
- (void)stopMasterTimer;
- (void)suspendTraining;
- (void)trimBeginingOfPCMBufferWithVoiceTriggerEventInfo:(id)arg1;
- (void)updateMeterAndForward;
- (id)voiceTriggerEventInfo;

@end
