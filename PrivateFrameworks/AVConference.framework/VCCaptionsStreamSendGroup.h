
@interface VCCaptionsStreamSendGroup : VCMediaStreamSendGroup <VCAudioCaptionsDelegate, VCAudioStreamGroup, VCCaptionsSource> {
    NSNumber * _activeCaptionsStreamID;
    VCAudioCaptions * _audioCaptions;
    <VCCaptionsSourceDelegate> * _captionsDelegate;
    struct opaqueVCCaptionsEncoder { } * _captionsEncoder;
    VCAudioStreamGroupCommon * _common;
}

@property (nonatomic, readonly) bool captionsEnabled;
@property (nonatomic, readonly) bool captionsSupported;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int deviceRole;
@property (readonly) unsigned long long hash;
@property (setter=setMuted:, nonatomic) bool isMuted;
@property (setter=setPowerSpectrumEnabled:) bool isPowerSpectrumEnabled;
@property (readonly) Class superclass;

- (id)activeStreamKeys;
- (id)captionsDelegate;
- (bool)captionsEnabled;
- (bool)captionsSupported;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x1; unsigned int x2[5]; unsigned int x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; unsigned int x7; double x8; unsigned int x9; unsigned int x10; }*)arg1;
- (void)dealloc;
- (int)deviceRole;
- (void)didDisableCaptions:(bool)arg1 error:(id)arg2;
- (void)didEnableCaptions:(bool)arg1 error:(id)arg2;
- (void)didStartCaptioningWithReason:(int)arg1 streamToken:(long long)arg2;
- (void)didStop;
- (void)didStopCaptioningWithReason:(int)arg1 streamToken:(long long)arg2;
- (void)didUpdateCaptions:(id)arg1;
- (void)dispatchedUpdateActiveMediaStreamIDs:(id)arg1 withTargetBitrate:(unsigned int)arg2 mediaBitrates:(id)arg3 rateChangeCounter:(unsigned int)arg4;
- (void)enableCaptions:(bool)arg1;
- (id)initWithConfig:(id)arg1;
- (bool)isMuted;
- (bool)isPowerSpectrumEnabled;
- (void)onVideoFrame:(struct opaqueCMSampleBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 attribute:(struct { bool x1; bool x2; int x3; bool x4; bool x5; int x6; unsigned char x7; })arg3;
- (void)registerCaptionsEventDelegate:(id)arg1;
- (void)setCaptionsLocale:(id)arg1;
- (bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;
- (void)setMuted:(bool)arg1;
- (void)setPowerSpectrumEnabled:(bool)arg1;
- (void)setReportingAgent:(struct opaqueRTCReporting { }*)arg1;
- (id)startCapture;
- (id)stopCapture;
- (void)transmitTranscription:(id)arg1;
- (id)willStart;

@end
