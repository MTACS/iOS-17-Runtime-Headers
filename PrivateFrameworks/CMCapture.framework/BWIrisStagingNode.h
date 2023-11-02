
@interface BWIrisStagingNode : BWNode {
    int  _additionalCompressedBufferCount;
    bool  _applyPreviewShift;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _beginIrisMovieCaptureTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _bufferingTime;
    NSDictionary * _cameraInfoByPortType;
    bool  _captureDeviceHasOverCaptureEnabled;
    bool  _compressSynchronizedSlaveAttachedMedia;
    unsigned long long  _compressedBufferPoolAllocationTimeoutMS;
    <BWIrisStagingNodeIrisRequestDelegate> * _delegate;
    bool  _doingJPEGCompression;
    NSMutableArray * _droppedFramePTSs;
    unsigned long long * _emissionMap;
    bool  _emittedFirstAudio;
    int  _emittedIrisRequestCount;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _endIrisMovieCaptureTime;
    bool  _finishingAllEnqueuedRequests;
    struct { long long x1; int x2; unsigned int x3; long long x4; } * _firstEmittedPTSArray;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstTrimStartPTS;
    bool  _flushAndSuspendPending;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameGovernorNextFrameThreshold;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameGovernorReferenceTime;
    bool  _haveSeenFirstAudioSampleBuffer;
    bool  _haveSeenFirstVideoSampleBuffer;
    unsigned long long  _inferencesInputIndex;
    float  _intermediateJPEGCompressionQuality;
    float  _intermediateJPEGCompressionRate;
    BWIntermediateJPEGCompressor * _intermediateJPEGCompressor;
    int  _intermediateJPEGDownstreamRetainedBufferCount;
    int  _intermediateJPEGSurfaceLocalRetainedBufferCount;
    NSMutableArray * _irisRequestsInFlight;
    NSMutableArray * _irisRequestsSoonToBeEmitted;
    NSMutableArray * _lastEmittedBuffers;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastProcessedVideoPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastReceivedVideoTime;
    int  _lastRecommendedMasterSelectionReason;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    struct OpaqueCMClock { } * _masterClock;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _masterMovieStartPTS;
    NSURL * _masterMovieURL;
    BWMotionDataPreserver * _motionDataPreserver;
    BWMotionDataTimeMachine * _motionDataTimeMachine;
    int  _numEODMessagesReceived;
    int  _numberOfVideoFramesReceived;
    BWStats * _overallVideoFrameReceptionStats;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _readyToEmitPTS;
    bool  _readyToReceiveRequests;
    NSObject<OS_dispatch_group> * _readyToReceiveRequestsGroup;
    NSString * _recommendedMasterPortType;
    BWIrisSequenceAdjuster * _sequenceAdjuster;
    BWIrisSequenceAdjuster * _sequenceAdjusterBackingStore;
    NSURL * _spatialOverCaptureMasterMovieURL;
    float  _spatialOverCapturePercentageToApply;
    NSMutableArray * _stagingQueues;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stagingResumedTime;
    bool  _stagingSuspended;
    struct OpaqueFigSimpleMutex { } * _stateMutex;
    BWSubjectRelightingCalculator * _subjectRelightingCalculator;
    bool  _subjectRelightingEnabled;
    BWSubjectRelightingCalculatorResult * _subjectRelightingResult;
    BWIntermediateJPEGCompressor * _synchronizedSlaveJPEGCompressor;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetFrameDuration;
    NSURL * _temporaryMovieDirectoryURL;
    bool  _trimLivePhotoMovieAtWideAndSuperWideAutoSwitching;
    int  _trimMethod;
    FigIrisAutoTrimmer * _trimmer;
    BWStats * _valveActiveVideoFrameReceptionStats;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _valveDiscontinuitySearchLimit;
    bool  _valveDraining;
    bool  _valveOpen;
    bool  _valveOpenForMomentCaptureMovieRecording;
    long long  _valveOpenerSettingsID;
    float  _videoStabilizationOverscanOverride;
    int  _visMotionMetadataPreloadingMode;
    bool  _vitalityScoringEnabled;
    struct { 
        unsigned short major; 
        unsigned short minor; 
        unsigned short patch; 
    }  _vitalityScoringSmartCameraPipelineVersion;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } beginIrisMovieCaptureTime;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } endIrisMovieCaptureTime;
@property (readonly) BWMotionDataTimeMachine *motionDataTimeMachine;
@property (readonly) NSURL *temporaryMovieDirectoryURL;

+ (void)initialize;

- (unsigned long long)_indexOfBufferBeforeOrEqualToPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputIndex:(unsigned long long)arg2 applyFrameDropsMitigation:(bool)arg3;
- (bool)applyPreviewShift;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })beginIrisMovieCaptureTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })bufferingTime;
- (void)closeValve;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })endIrisMovieCaptureTime;
- (int)enqueueIrisRequest:(id)arg1;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)initWithNumberOfVideoInputs:(unsigned long long)arg1 numberOfAudioInputs:(unsigned long long)arg2 numberOfMetadataInputs:(unsigned long long)arg3 autoTrimMethod:(int)arg4 vitalityScoringEnabled:(bool)arg5 captureDeviceHasOverCaptureEnabled:(bool)arg6 overCaptureEnabled:(bool)arg7 depthEnabled:(bool)arg8 videoStabilizationOverscanOverride:(float)arg9 sequenceAdjusterEnabled:(bool)arg10 visMotionMetadataPreloadingMode:(int)arg11 frameReconstructionEnabled:(bool)arg12 subjectRelightingEnabled:(bool)arg13 intermediateJPEGCompressionQuality:(float)arg14 intermediateJPEGCompressionRate:(float)arg15 maxLossyCompressionLevel:(int)arg16 temporaryMovieDirectoryURL:(id)arg17 cameraInfoByPortType:(id)arg18 irisRequestDelegate:(id)arg19;
- (int)intermediateJPEGDownstreamRetainedBufferCount;
- (struct OpaqueCMClock { }*)masterClock;
- (id)motionDataTimeMachine;
- (int)openValveWithIrisRequest:(id)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)prepareToFinishAllEnqueuedIrisRequestsWithEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setApplyPreviewShift:(bool)arg1;
- (void)setBeginIrisMovieCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setBufferingTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setEndIrisMovieCaptureTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setIntermediateJPEGDownstreamRetainedBufferCount:(int)arg1;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setMomentCaptureMovieRecordingMasterEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forRequestWithSettingsID:(long long)arg2;
- (void)setStagingQueues:(id)arg1;
- (void)setTargetFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVitalityScoringSmartCameraPipelineVersion:(struct { unsigned short x1; unsigned short x2; unsigned short x3; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetFrameDuration;
- (id)temporaryMovieDirectoryURL;
- (bool)valveIsOpen;
- (struct { unsigned short x1; unsigned short x2; unsigned short x3; })vitalityScoringSmartCameraPipelineVersion;
- (bool)waitUntilReadyToReceiveRequestsWithTimeout:(float)arg1;

@end
