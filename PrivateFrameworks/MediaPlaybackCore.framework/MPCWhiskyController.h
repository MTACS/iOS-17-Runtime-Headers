
@interface MPCWhiskyController : MPCSingleTrackAudioProcessor <MPCPlaybackEngineEventObserving, MPCVocalAttenuationPolicyControllerDelegate> {
    float  _defaultVocalLevel;
    MPCWhiskyControllerDisabledState * _disabledState;
    float  _maxVocalLevel;
    float  _minVocalLevel;
    <MPCVocalAttenuationModelProvider> * _modelProvider;
    MPCVocalAttenuationPolicyController * _policyController;
    bool  _processIsBackgrounded;
    <MPCVocalAttenuationProcessor> * _processor;
    MPCRecordingSession * _recordingSession;
    NSObject<OS_dispatch_queue> * _setupQueue;
    NSDate * _shutdownSequenceStartDate;
    MSVTimer * _shutdownTimer;
    long long  _state;
    float  _vocalLevel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly) <MPCVocalAttenuationModelProvider> *modelProvider;
@property (nonatomic, readonly) MPCVocalAttenuationPolicyController *policyController;
@property (nonatomic, readonly) <MPCVocalAttenuationProcessor> *processor;
@property (nonatomic, readonly) MPCRecordingSession *recordingSession;
@property (nonatomic, readonly) double renderingTimeLimit;
@property (nonatomic, retain) MSVTimer *shutdownTimer;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_emitStatisticsEvent;
- (void)_loadModel;
- (float)_processorLevelForVocalLevel:(float)arg1;
- (void)_startShutdownSequenceIfRelevant;
- (void)_stopShutdownSequenceIfRelevant;
- (void)_tearDownTapData;
- (void)_updateState:(long long)arg1;
- (float)_vocalLevelForProcessorLevel:(float)arg1;
- (id)blockingPolicy;
- (unsigned int)creationFlags;
- (void)dealloc;
- (id)description;
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (void)engineDidResetMediaServices:(id)arg1;
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap { }*)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1 modelProvider:(id)arg2 processor:(id)arg3;
- (id)modelID;
- (id)modelProvider;
- (id)policyController;
- (void)prepareTap:(struct opaqueMTAudioProcessingTap { }*)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg3;
- (void)processTap:(struct opaqueMTAudioProcessingTap { }*)arg1 sampleIndex:(long long)arg2 numberFrames:(long long)arg3 flags:(unsigned int)arg4 audioBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg5 numberFramesOut:(long long*)arg6 flagsOut:(unsigned int*)arg7;
- (id)processor;
- (id)recordingSession;
- (double)renderingTimeLimit;
- (void)setShutdownTimer:(id)arg1;
- (void)setState:(long long)arg1;
- (bool)shouldAttachAudioTapToItem:(id)arg1;
- (id)shutdownTimer;
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap { }*)arg1;
- (void)vocalAttenuationPolicyControllerDidChange:(id)arg1;

@end
