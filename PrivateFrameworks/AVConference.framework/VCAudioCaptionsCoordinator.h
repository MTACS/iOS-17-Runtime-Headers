
@interface VCAudioCaptionsCoordinator : VCObject <VCAudioCaptionsDelegate, VCCaptionsSource> {
    VCAudioCaptions * _audioCaptions;
    VCAudioCaptionsBufferInfoCollection * _bufferInfos;
    <VCCaptionsSourceDelegate> * _captionsDelegate;
    long long  _currentlyCaptionedStreamToken;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    VCCaptionsGibberishDetector * _gibberishDetector;
    bool  _isVoiceDetectorRunning;
    struct tagVCAudioFrameFormat { 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } format; 
        unsigned int samplesPerFrame; 
    }  _lastUsedAudioFormat;
    double  _lowPriorityThresholdSeconds;
    bool  _oneToOneEnabled;
    struct opaqueRTCReporting { } * _reportingAgent;
    NSObject<OS_dispatch_semaphore> * _startStopSemaphore;
    long long  _state;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    struct opaqueVCVoiceDetector { } * _voiceDetector;
}

@property (nonatomic, readonly) bool captionsEnabled;
@property (nonatomic, readonly) bool captionsSupported;
@property (nonatomic) long long currentlyCaptionedStreamToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } stateLock;
@property (readonly) Class superclass;

- (id)captionsDelegate;
- (bool)captionsEnabled;
- (bool)captionsSupported;
- (long long)currentlyCaptionedStreamToken;
- (void)dealloc;
- (void)didDisableCaptions:(bool)arg1 error:(id)arg2;
- (void)didEnableCaptions:(bool)arg1 error:(id)arg2;
- (void)didStartCaptioningWithReason:(int)arg1 streamToken:(long long)arg2;
- (void)didStopCaptioningWithReason:(int)arg1 streamToken:(long long)arg2;
- (void)didUpdateCaptions:(id)arg1;
- (void)enableCaptions:(bool)arg1;
- (id)initWithOneToOneEnabled:(bool)arg1 taskIdentifier:(id)arg2 reportingAgent:(struct opaqueRTCReporting { }*)arg3;
- (void)registerCaptionsEventDelegate:(id)arg1;
- (void)registerStreamToken:(long long)arg1 withFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2;
- (void)setCaptionsLocale:(id)arg1;
- (void)setCurrentlyCaptionedStreamToken:(long long)arg1;
- (void)setOneToOneModeEnabled:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setStateLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (long long)state;
- (struct os_unfair_lock_s { unsigned int x1; })stateLock;

@end
