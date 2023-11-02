
@interface VCVideoTransmitterDefault : VCVideoTransmitterBase <VCVideoReceiverFeedbackDelegate> {
    unsigned int  _audioTimestampRate;
    bool  _canLocalResizePIP;
    bool  _canRemoteResizePIP;
    double  _lastSentVideoHostTime;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteExpectedLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteExpectedPortraitAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteScreenLandscapeAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteScreenPortraitAspectRatio;
    int  _transmitterMode;
    VCVideoHardwareDumpCollector * _verificationContext;
    struct tagHANDLE { int x1; } * _videoTransmitterHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) struct tagHANDLE { int x1; }*videoTransmitterHandle;

+ (void)setupBandwidthEstimationOptions:(struct tagBWEOPTION { int x1; int x2; int x3; int x4; }*)arg1;
+ (void)setupBandwidthEstimationOptions:(struct tagBWEOPTION { int x1; int x2; int x3; int x4; }*)arg1 featureString:(id)arg2;

- (void)collectChannelMetrics:(struct { unsigned int x1; unsigned int x2[5]; unsigned int x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; unsigned int x7; double x8; unsigned int x9; unsigned int x10; }*)arg1 interval:(float)arg2;
- (void)dealloc;
- (void)generateKeyFrameWithFIRType:(int)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleActiveConnectionChangeDefault:(id)arg1;
- (void)handleActiveConnectionChangeMultiway:(id)arg1;
- (void)handleThermalLevelChange:(int)arg1;
- (id)initWithConfig:(id)arg1;
- (bool)isRtxEnabled;
- (bool)setEncodingMode:(int)arg1;
- (void)setFECRatio:(double)arg1;
- (void)setFECRedundancyVector:(const struct { unsigned short x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2[32]; }*)arg1;
- (void)setHighestActiveQualityIndex:(unsigned int)arg1;
- (void)setIsEndToEndBasedBandwidthProbingEnabled:(bool)arg1;
- (void)setIsServerBasedBandwidthProbingEnabled:(bool)arg1;
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; }*)arg1;
- (void)setRtxEnabled:(bool)arg1;
- (void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;
- (void)setTargetBitrate:(unsigned int)arg1;
- (void)setTemporalBitrateArray:(id)arg1;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (void)setUpAspectRatios:(bool)arg1;
- (void)setUpAspectRatiosFromFeatureListString:(const char *)arg1;
- (void)startVideo;
- (void)stopVideo;
- (void)updateWindowState:(int)arg1 isLocal:(bool)arg2 windowRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct tagHANDLE { int x1; }*)videoTransmitterHandle;

@end
