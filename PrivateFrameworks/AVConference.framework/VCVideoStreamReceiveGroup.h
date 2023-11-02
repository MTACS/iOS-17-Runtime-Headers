
@interface VCVideoStreamReceiveGroup : VCMediaStreamReceiveGroup <VCRedundancyControllerDelegate> {
    bool  _didReportExtendedPoorConnection;
    double  _displayLatency;
    bool  _haveReportedPerfTimers;
    bool  _isMediaSuspended;
    bool  _isProcessingVideoOptIn;
    bool  _isRedundancyRequested;
    bool  _isRemoteMediaStalled;
    bool  _isVideoDegraded;
    double  _isVideoDegradedStartTime;
    bool  _isVideoExpected;
    double  _lastVideoExpectationSwitch;
    unsigned char  _lastVideoPriority;
    NSNumber * _previousOptedInStreamID;
    bool  _remoteVideoEnabled;
    bool  _remoteVideoPaused;
    bool  _shouldConvertSourceRTPTimestamp;
    unsigned long long  _syncUpdateCalled;
    _Atomic unsigned char  _videoPriority;
    unsigned char  _videoQuality;
    VCRedundancyControllerVideo * _videoRedundancyController;
    unsigned int  _visibilityIndex;
}

@property (nonatomic) bool isRemoteMediaStalled;
@property (nonatomic, readonly) unsigned int lastDisplayedFrameRTPTimestamp;
@property (getter=isRemoteVideoEnabled, nonatomic) bool remoteVideoEnabled;
@property (getter=isRemoteVideoPaused, nonatomic) bool remoteVideoPaused;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;

- (void)checkForExtendedPoorConnection;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x1; unsigned int x2[5]; unsigned int x3; double x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; double x6; unsigned int x7; double x8; unsigned int x9; unsigned int x10; }*)arg1;
- (void)dealloc;
- (void)didStart;
- (id)initWithConfig:(id)arg1;
- (bool)isRemoteMediaStalled;
- (bool)isRemoteVideoEnabled;
- (bool)isRemoteVideoPaused;
- (bool)isVideoExpected;
- (bool)isVisible;
- (unsigned int)lastDisplayedFrameRTPTimestamp;
- (void)mediaStream:(id)arg1 didReceiveNewMediaKeyIndex:(id)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(struct { unsigned short x1; struct { unsigned char x_2_1_1; unsigned char x_2_1_2; } x2[32]; })arg2;
- (void)reportParticipantsPerfTimingsOnce;
- (void)resetDidReceiveFirstFrame;
- (void)resetPerfTimers;
- (void)setActiveStreamIDs:(id)arg1;
- (void)setIsRemoteMediaStalled:(bool)arg1;
- (void)setMediaSuspended:(bool)arg1 forStreamToken:(id)arg2;
- (void)setOptedInStreamID:(id)arg1;
- (void)setRemoteVideoEnabled:(bool)arg1;
- (void)setRemoteVideoPaused:(bool)arg1;
- (void)setShouldEnableFaceZoom:(bool)arg1;
- (void)setShouldEnableMLEnhance:(bool)arg1 streamID:(unsigned short)arg2;
- (bool)setSyncSource:(id)arg1;
- (void)setVideoDegraded:(bool)arg1;
- (void)setVideoQuality:(unsigned char)arg1;
- (void)setVideoStreamDelegate:(id)arg1 delegateFunctions:(const struct tagVCVideoStreamDelegateRealtimeInstanceVTable { int (*x1)(); }*)arg2;
- (void)setVisibilityIndex:(unsigned int)arg1;
- (id)setupRedundancyController;
- (void)setupVideoPriority;
- (void)updateShouldEnableFaceZoom;
- (void)updateVideoExpected;
- (void)updateVideoPriority:(unsigned char)arg1;
- (void)vcMediaStream:(id)arg1 didReceiveFirstFrameWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)vcMediaStream:(id)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcMediaStream:(id)arg1 priorityDidChange:(unsigned char)arg2;
- (void)vcMediaStream:(id)arg1 remoteMediaStalled:(bool)arg2 duration:(double)arg3;
- (void)vcMediaStream:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;
- (unsigned char)videoQuality;
- (unsigned int)visibilityIndex;
- (id)willStart;
- (void)willStop;

@end
