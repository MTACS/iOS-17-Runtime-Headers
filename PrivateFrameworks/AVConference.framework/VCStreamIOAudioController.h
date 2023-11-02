
@interface VCStreamIOAudioController : VCObject <VCAudioIOControllerControl, VCStreamOutputSource> {
    struct __CFAllocator { } * _audioSampleBufferAllocator;
    struct __CFAllocator { } * _backingBufferAllocator;
    unsigned char  _clientDirection;
    struct opaqueVCAudioBufferList { } * _inputSamples;
    bool  _isRunning;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastHostTime;
    long long  _lastSampleCount;
    unsigned long long  _networkClockID;
    unsigned int  _nextExpectedSampleTime;
    VCAudioRelay * _outputThread;
    VCAudioRelayIO * _outputThreadClient;
    struct PacketThread_s { } * _packetThread;
    VCAudioIOControllerClient * _runningClient;
    bool  _sinkStarted;
    struct _VCAudioIOControllerClientIO { void *x1; int (*x2)(); id x3; unsigned int x4; unsigned int x5; unsigned int x6; struct opaqueVCAudioBufferList {} *x7; bool x8; bool x9; } * _sourceIO;
    bool  _sourceStarted;
    NSObject<OS_dispatch_queue> * _stateQueue;
    VCStreamInputAudio * _streamInput;
    VCStreamOutput * _streamOutput;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _streamOutputLock;
    long long  _streamToken;
    bool  _timestampInitialized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *reportingStats;
@property (retain) VCAudioIOControllerClient *runningClient;
@property (retain) VCStreamOutput *streamOutput;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsVoiceActivityDetection;

- (bool)_packetThreadStartWithClientFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned int x_1_1_8; unsigned int x_1_1_9; } x1; unsigned int x2; }*)arg1;
- (void)_packetThreadStop;
- (bool)canSetDirection:(unsigned char)arg1;
- (void)cleanupOutputThread;
- (void)cleanupStreamOutput;
- (void)dealloc;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x1; double x2; }*)arg1;
- (bool)dispatchedStartClient:(id)arg1 error:(id*)arg2;
- (void)dispatchedStopClient;
- (void)dispatchedUpdateClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x1; bool x2; bool x3; bool x4; }*)arg2;
- (id)initWithStreamInputID:(long long)arg1 streamToken:(long long)arg2 networkClockID:(unsigned long long)arg3;
- (void)invalidate;
- (id)reportingStats;
- (id)runningClient;
- (void)setRunningClient:(id)arg1;
- (void)setStreamOutput:(id)arg1;
- (bool)setupAndStartOutputClientThread;
- (void)startClient:(id)arg1;
- (bool)startInputForClient:(id)arg1 error:(id*)arg2;
- (bool)startOutputForClient:(id)arg1 error:(id*)arg2;
- (void)stopClient:(id)arg1;
- (id)streamOutput;
- (bool)supportsVoiceActivityDetection;
- (void)updateClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x1; bool x2; bool x3; bool x4; }*)arg2;

@end
