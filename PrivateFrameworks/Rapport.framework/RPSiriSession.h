
@interface RPSiriSession : NSObject <AVVoiceControllerRecordDelegate> {
    id /* block */  _activateCompletion;
    int  _activateState;
    AVAudioFormat * _audioFormat;
    <RPSiriSessionDelegate> * _delegate;
    NSString * _destinationID;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    bool  _isDestinationPTTEligible;
    bool  _isSourcePTTEligible;
    <RPMessageable> * _messenger;
    NSObject<OS_dispatch_source> * _recordingLimitTimer;
    RPSiriSession * _selfRef;
    NSString * _sourceID;
    int  _startRecordingState;
    int  _stopRecordingState;
    unsigned long long  _streamId;
    AVVoiceController * _voiceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <RPSiriSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *destinationID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDestinationPTTEligible;
@property (nonatomic, retain) <RPMessageable> *messenger;
@property (nonatomic, retain) NSString *sourceID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate2;
- (void)_activateCompletedWithError:(id)arg1;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_invalidateWithCompletion:(id /* block */)arg1;
- (void)_invalidated;
- (void)_recordingLimitTimerFired;
- (void)_recordingLimitTimerStart:(unsigned int)arg1;
- (void)_sendSiriStop;
- (void)_startActivationWithDestinationID:(id)arg1 messenger:(id)arg2 completion:(id /* block */)arg3;
- (void)_stopRecording;
- (void)_teardownVoiceController;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)destinationID;
- (id)init;
- (void)invalidate;
- (void)invalidateWithCompletion:(id /* block */)arg1;
- (bool)isDestinationPTTEligible;
- (id)messenger;
- (void)prewarmWithCompletion:(id /* block */)arg1;
- (void)receivedButtonUpWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationID:(id)arg1;
- (void)setIsDestinationPTTEligible:(bool)arg1;
- (void)setMessenger:(id)arg1;
- (void)setSourceID:(id)arg1;
- (id)sourceID;
- (void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;
- (void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(bool)arg3 error:(id)arg4;
- (void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerMediaServicesWereReset:(id)arg1;
- (bool)voiceControllerSetupAndReturnError:(id*)arg1;
- (void)voiceControllerTearDown;

@end
