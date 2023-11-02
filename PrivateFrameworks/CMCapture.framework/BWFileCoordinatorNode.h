
@interface BWFileCoordinatorNode : BWNode {
    bool  _attachOverCaptureActiveSlaveStreamForcedOffMarkerBuffer;
    <BWAudioSourceRecordingReadinessDelegate> * _audioSourceDelegate;
    unsigned long long  _cinematicLookAheadFrameCount;
    long long  _currSettingsID;
    bool  _currSettingsIsIris;
    bool  _currSettingsIsIrisMovieRecording;
    bool  _currSettingsPrefersNoInterruptionsByRingtonesAndAlerts;
    unsigned long long  _droppedFramesCountDueToISP;
    struct OpaqueCMBlockBuffer { } * _emptyMetadataSampleData;
    <BWNodeFileCoordinatorStatusDelegate> * _fileCoordiatorStatusDelegate;
    bool  _firstAudioHasBeenProcessed;
    unsigned long long  _firstAudioInputIndex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstAudioPTSReadyForRecording;
    int  _firstFrameAFStatus;
    int  _firstFrameFocusingMethod;
    bool  _flagsLastFrameForVideoCompressor;
    double  _focusWaitTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _focusWaitTimeStart;
    bool  _focusWaitTimedOut;
    const struct opaqueCMFormatDescription {} ** _formatDescriptionsForInputs;
    bool  _haveSeenAudioWhenStarting;
    NSMutableArray * _idleInputIndicesWaitingForFlush;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _inputOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _largestAudioPTS;
    unsigned long long  _largestEmittedLookAheadMotionDataSerialNumber;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _largestMetadataPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _largestStagedSupportingAudioVideoStagedPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMasterDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMasterEndingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastMasterPTS;
    NSString * _lastPortType;
    bool  _lookAheadMotionDataPreloadHasBeenAttached;
    bool  _lowLatencyCanTossExtraVideoWhenStopping;
    bool  _lowLatencyCanTransitionEarlyToRecording;
    bool  _lowLatencyModeEnabled;
    BWNodeInput * _masterInput;
    unsigned long long  _masterInputIndex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterStartingPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterStoppingPTS;
    double  _maxFocusWaitTime;
    float  _maxFrameRate;
    BWMotionDataTimeMachine * _motionDataTimeMachine;
    unsigned long long  _numActionOnlyOutputs;
    unsigned long long  _numAudioInputs;
    unsigned long long  _numInputs;
    unsigned long long  _numMetadataInputs;
    unsigned long long  _numOutputs;
    unsigned long long  _numVideoInputs;
    int  _numberOfFocusWaitBuffersDropped;
    int  _numberOfTorchWaitBuffersDropped;
    bool  _overCaptureActiveSlaveStreamForcedOff;
    bool  _overCaptureEnabled;
    bool  _overCaptureIsRequested;
    NSMutableArray * _pendingIrisRequestMarkerBuffers;
    unsigned long long  _pendingMotionDataSerialNumber;
    bool  _receivedFinalEnqueuedIrisReferenceRequest;
    int  _recordingState;
    bool  _sendFlushMarkerWhenStopping;
    FigCaptureRecordingSettings * _settings;
    NSArray * _stagingQueues;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startAfterPTS;
    struct OpaqueFigSimpleMutex { } * _stateMutex;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stopRecordingAudioOffset;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stopRecordingObservedLastVideoPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stopRecordingPTS;
    int  _terminationErrorCode;
    double  _torchWaitTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _torchWaitTimeStart;
    NSMutableArray * _videoSampleBuffersWaitingForMetadata;
    NSDictionary * _videoSettings;
}

+ (void)initialize;

- (id)audioSourceDelegate;
- (void)cancelStartRecordingWithSettings:(id)arg1;
- (int)cinematicLookAheadFrameCount;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)fileCoordiatorStatusDelegate;
- (bool)flagsLastFrameForVideoCompressor;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 numberOfActionOnlyOutputs:(unsigned long long)arg4 overCaptureEnabled:(bool)arg5 allowLowLatencyWhenPossible:(bool)arg6 motionDataTimeMachine:(id)arg7;
- (id)nodeSubType;
- (id)nodeType;
- (void)pauseRecording;
- (void)recordingTerminated:(long long)arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)resumeRecording;
- (void)setAudioSourceDelegate:(id)arg1;
- (void)setCinematicLookAheadFrameCount:(int)arg1;
- (void)setFileCoordiatorStatusDelegate:(id)arg1;
- (void)setFlagsLastFrameForVideoCompressor:(bool)arg1;
- (int)startRecordingWithSettings:(id)arg1 videoSettings:(id)arg2 maxFrameRate:(float)arg3 stopAtPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 startAfterPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
- (void)stopRecordingWithErrorCode:(int)arg1;
- (void)tryToEmitFramesWaitingForMotion;
- (bool)updateStopPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 audioOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 previousStopPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 previousAudioOffset:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4;

@end
