
@interface CSVTUIAudioRecorder : NSObject <AVVoiceControllerRecordDelegate, CSAudioSessionEventProviding> {
    struct AudioBufferList { 
        unsigned int mNumberBuffers; 
        struct AudioBuffer { 
            unsigned int mNumberChannels; 
            unsigned int mDataByteSize; 
            void *mData; 
        } mBuffers[1]; 
    }  _interleavedABL;
    NSDictionary * _latestContext;
    NSHashTable * _observers;
    struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; } * _pNonInterleavedABL;
    NSObject<OS_dispatch_queue> * _queue;
    CSVTUIAudioRecorderRemoteDeviceContext * _remoteDeviceContext;
    CSVTUIRemoteRecordClient * _remoteRecordClient;
    AVVoiceController * _voiceController;
    NSObject<OS_dispatch_queue> * _voiceControllerCreationQueue;
    bool  _waitingForDidStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSVTUIAudioRecorderRemoteDeviceContext *remoteDeviceContext;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *voiceControllerCreationQueue;

+ (unsigned long long)_convertDeactivateOption:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_audioRecorderDidStartRecordingSuccessfully:(bool)arg1 streamHandleID:(unsigned long long)arg2 error:(id)arg3;
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1 streamHandleID:(unsigned long long)arg2;
- (id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned int)arg2;
- (void)_destroyVoiceController;
- (id)_getRecordSettingsWithRequest;
- (void)_processAudioBuffer:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;
- (void)_processAudioChain:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 atTime:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5 numberOfChannels:(int)arg6;
- (bool)_shouldUseRemoteBuiltInMic:(id)arg1;
- (id)_voiceControllerWithError:(id*)arg1;
- (bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id*)arg3;
- (bool)deactivateAudioSession:(unsigned long long)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)getPlaybackRouteForStreamID:(unsigned long long)arg1;
- (id)initWithQueue:(id)arg1 error:(id*)arg2;
- (bool)isRecordingWithStreamHandleId:(unsigned long long)arg1;
- (id)observers;
- (bool)prepareAudioStreamRecordWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2;
- (id)queue;
- (id)recordRouteWithStreamHandleId:(unsigned long long)arg1;
- (void)registerObserver:(id)arg1;
- (id)remoteDeviceContext;
- (unsigned long long)setContext:(id)arg1 error:(id*)arg2;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemoteDeviceContext:(id)arg1;
- (void)setVoiceControllerCreationQueue:(id)arg1;
- (bool)startAudioStreamWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2;
- (bool)stopAudioStreamWithStreamHandleId:(unsigned long long)arg1 error:(id*)arg2;
- (void)unregisterObserver:(id)arg1;
- (void)updateAudioRecorderForTrainingDevice:(unsigned long long)arg1 deviceUUIDs:(id)arg2;
- (void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;
- (void)voiceControllerBeginRecordInterruption:(id)arg1;
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;
- (id)voiceControllerCreationQueue;
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(bool)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(bool)arg3 error:(id)arg4;
- (void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;
- (void)voiceControllerEndRecordInterruption:(id)arg1;
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(bool)arg2;

@end
