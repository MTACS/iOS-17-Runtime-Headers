
@interface BWAudioSourceNode : BWSourceNode <BWAudioSourceRecordingReadinessDelegate, BWZoomCompletionDelegate> {
    struct opaqueCMSession { } * _CMSession;
    NSString * _MXSessionAudioMode;
    struct opaqueCMSimpleQueue { } * _activeBuffersQueue;
    struct opaqueCMFormatDescription { } * _auOutputFormatDescription;
    long long  _auRenderCount;
    unsigned int  _auSubType;
    int  _audioCaptureMode;
    unsigned int  _audioDeviceID;
    int  _audioLevelUnits;
    AVAudioSession * _audioSession;
    NSObject<OS_dispatch_queue> * _audioSessionSetRecordingRelatedPropertyQueue;
    struct OpaqueAudioComponentInstance { } * _audioUnit;
    NSString * _clientAudioClockDeviceUID;
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    int  _clientPID;
    struct OpaqueCMClock { } * _clock;
    bool  _configuresSession;
    struct TimestampedAudioBufferList { 
        struct __CFAllocator {} *allocator; 
        long long auRenderCount; 
        unsigned int dataBytesCapacity; 
        unsigned int numFrames; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } pts; 
        struct AudioBufferList {} *abl; 
        unsigned int numPrependedSilenceFrames; 
        double sampleTime; 
    }  _currentSilenceBuffer;
    bool  _didBeginInterruption;
    bool  _doEndInterruption;
    bool  _endOfDataMarkerSent;
    bool  _flipStereoAudioCaptureChannels;
    NSObject<OS_dispatch_queue> * _generateSamplesDispatchQueue;
    struct opaqueCMSimpleQueue { } * _inactiveBuffersQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _ioprocTimeStampDeltaLimit;
    bool  _isAppAudioSession;
    bool  _isConfiguredForContinuityCapture;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _latencyOffset;
    bool  _levelMeteringEnabled;
    bool  _livePhotoCaptureEnabled;
    long long  _maxZoomFrequencyNanos;
    unsigned long long  _nextExpectedHostTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _nextExpectedSampleTime;
    float  _nextZoomFactor;
    long long  _nextZoomTime;
    BWNodeOutput * _outputsByMicSourcePosition;
    bool  _prefersNoInterruptionsByRingtonesAndAlerts;
    NSObject<OS_dispatch_queue> * _preparedToRecordHandlerCallbackQueue;
    unsigned int  _prevNumFrames;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prevPTS;
    unsigned int  _pullDuration;
    struct opaqueCMSimpleQueue { } * _renderProcErrorQueue;
    double  _sessionRequiredSampleRate;
    bool  _silenceFramesFillingDisabled;
    long long  _silenceFramesGeneratedSinceLastAURenderProc;
    NSObject<OS_dispatch_source> * _silenceTimer;
    NSDictionary * _sourceRequirements;
    float  _stereoAudioCapturePairedCameraBaseFieldOfView;
    float  _stereoAudioCapturePairedCameraZoomFactor;
    bool  _streamInterrupted;
    bool  _streamStarted;
    bool  _useDecoupledIO;
    bool  _videoRecordingEnabled;
    NSObject<OS_dispatch_queue> * _zoomHandlerQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _zoomLock;
    NSObject<OS_dispatch_source> * _zoomTimer;
}

@property (nonatomic, readonly) NSArray *audioLevels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didBeginInterruption;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (readonly) Class superclass;

+ (id)audioSourceNodeWithAttributes:(id)arg1 sessionPreset:(id)arg2 clock:(struct OpaqueCMClock { }*)arg3 doConfigureAudio:(bool)arg4 audioSession:(id)arg5 CMSession:(struct opaqueCMSession { }*)arg6 isAppAudioSession:(bool)arg7 doEndInterruption:(bool)arg8 clientAuditToken:(struct { unsigned int x1[8]; })arg9 clientOSVersionSupportsDecoupledIO:(bool)arg10 clientAudioClockDeviceUID:(id)arg11 audioCaptureConnectionConfigurations:(id)arg12 isConfiguredForContinuityCapture:(bool)arg13;
+ (void)initialize;

- (int)audioCaptureMode;
- (id)audioLevels;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (bool)didBeginInterruption;
- (bool)flipStereoAudioCaptureChannels;
- (bool)hasNonLiveConfigurationChanges;
- (bool)interrupted;
- (bool)levelMeteringEnabled;
- (bool)livePhotoCaptureEnabled;
- (void)makeCurrentConfigurationLive;
- (void)makeOutputsLiveIfNeeded;
- (id)nodeSubType;
- (id)outputForMicSourcePosition:(int)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)prepareToStartRecordingWithOrientation:(int)arg1 recordingSettingsID:(long long)arg2 prefersNoInterruptionsByRingtonesAndAlerts:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setAudioCaptureMode:(int)arg1;
- (void)setFlipStereoAudioCaptureChannels:(bool)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setLevelMeteringEnabled:(bool)arg1;
- (void)setLivePhotoCaptureEnabled:(bool)arg1;
- (void)setStereoAudioCapturePairedCameraBaseFieldOfView:(float)arg1;
- (void)setStereoAudioCapturePairedCameraZoomFactor:(float)arg1;
- (void)setVideoRecordingEnabled:(bool)arg1;
- (bool)start:(id*)arg1;
- (float)stereoAudioCapturePairedCameraBaseFieldOfView;
- (float)stereoAudioCapturePairedCameraZoomFactor;
- (bool)stop:(id*)arg1;
- (void)unprepareForRecording;
- (bool)videoRecordingEnabled;
- (void)zoomCommandHandler:(id)arg1 didApplyZoomFactor:(float)arg2 zoomFactorWithoutFudge:(float)arg3 rampComplete:(bool)arg4 rampCommandID:(int)arg5;

@end
