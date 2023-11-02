
@interface VCVideoTransmitterBase : NSObject <VCConnectionChangedHandler> {
    unsigned int  _captureHeight;
    unsigned int  _captureWidth;
    void * _controlInfoGenerator;
    unsigned int  _encodingHeight;
    unsigned int  _encodingWidth;
    bool  _isEndToEndBasedBandwidthProbingEnabled;
    bool  _isServerBasedBandwidthProbingEnabled;
    double  _lastKeyFrameSentTime;
    double  _lastSentAudioHostTime;
    unsigned int  _lastSentAudioSampleTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _latestSampleBufferTimestamp;
    NSString * _profileLevel;
    struct tagVCVideoTransmitterRealtimeSPI { 
        int (*setFECRatio)(); 
        int (*enqueueVideoFrame)(); 
        int (*setMediaQueueSize)(); 
    }  _realtimeSPI;
    bool  _rtxEnabled;
    unsigned int  _targetBitrate;
    unsigned int  _targetBitrateChangeCounter;
    unsigned int  _targetFramerate;
    unsigned int  _temporaryMaximumBitrate;
    unsigned int  _timestamp;
    unsigned int  _txMaxBitrate;
    unsigned int  _txMinBitrate;
    VCVideoRule * _videoRule;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int encodingHeight;
@property (readonly) unsigned int encodingWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isEndToEndBasedBandwidthProbingEnabled;
@property (nonatomic) bool isServerBasedBandwidthProbingEnabled;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } lastFrameTime;
@property double lastKeyFrameSentTime;
@property unsigned int lastRTPTimestamp;
@property double lastSentAudioHostTime;
@property unsigned int lastSentAudioSampleTime;
@property (getter=isRtxEnabled, nonatomic) bool rtxEnabled;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int targetBitrate;
@property (nonatomic) unsigned int targetBitrateChangeCounter;
@property (readonly) unsigned int targetFramerate;

- (void)collectChannelMetrics:(struct { unsigned int x1; unsigned int x2[5]; unsigned int x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; unsigned int x7; double x8; unsigned int x9; unsigned int x10; }*)arg1 interval:(float)arg2;
- (void)dealloc;
- (unsigned int)encodingHeight;
- (unsigned int)encodingWidth;
- (void)generateKeyFrameWithFIRType:(int)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleThermalLevelChange:(int)arg1;
- (id)initWithConfig:(id)arg1;
- (bool)isEndToEndBasedBandwidthProbingEnabled;
- (bool)isRtxEnabled;
- (bool)isServerBasedBandwidthProbingEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastFrameTime;
- (double)lastKeyFrameSentTime;
- (unsigned int)lastRTPTimestamp;
- (double)lastSentAudioHostTime;
- (unsigned int)lastSentAudioSampleTime;
- (bool)setEncodingMode:(int)arg1;
- (void)setFECRatio:(double)arg1;
- (void)setFECRedundancyVector:(const struct { unsigned short x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2[32]; }*)arg1;
- (void)setHighestActiveQualityIndex:(unsigned int)arg1;
- (void)setIsEndToEndBasedBandwidthProbingEnabled:(bool)arg1;
- (void)setIsServerBasedBandwidthProbingEnabled:(bool)arg1;
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;
- (void)setLastFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLastKeyFrameSentTime:(double)arg1;
- (void)setLastRTPTimestamp:(unsigned int)arg1;
- (void)setLastSentAudioHostTime:(double)arg1;
- (void)setLastSentAudioSampleTime:(unsigned int)arg1;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; }*)arg1;
- (void)setRtxEnabled:(bool)arg1;
- (void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;
- (void)setTargetBitrate:(unsigned int)arg1;
- (void)setTargetBitrateChangeCounter:(unsigned int)arg1;
- (void)setTemporalBitrateArray:(id)arg1;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (void)startVideo;
- (void)stopVideo;
- (unsigned int)targetBitrate;
- (unsigned int)targetBitrateChangeCounter;
- (unsigned int)targetFramerate;
- (void)updateWindowState:(int)arg1 isLocal:(bool)arg2 windowRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
