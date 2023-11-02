
@interface VCSessionParticipantOneToOneConfig : VCObject {
    void * _audioMediaControlInfoGenerator;
    AVCBasebandCongestionDetector * _basebandCongestionDetector;
    int  _deviceRole;
    AVCRateControlFeedbackController * _feedbackController;
    unsigned long long  _idsParticipantID;
    bool  _initUsingWifiTiers;
    VCRateControlMediaController * _mediaController;
    struct tagHANDLE { int x1; } * _mediaQueue;
    bool  _negotiatedScreenEnabled;
    bool  _negotiatedVideoEnabled;
    VCNetworkFeedbackController * _networkFeedbackController;
    int  _operatingMode;
    AVCStatisticsCollector * _statisticsCollector;
    struct tagVCMediaQueue { } * _vcMediaQueue;
    void * _videoMediaControlInfoGenerator;
}

@property (nonatomic) void*audioMediaControlInfoGenerator;
@property (nonatomic, retain) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic) int deviceRole;
@property (nonatomic, retain) AVCRateControlFeedbackController *feedbackController;
@property (nonatomic) unsigned long long idsParticipantID;
@property (nonatomic) bool initUsingWifiTiers;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic) struct tagHANDLE { int x1; }*mediaQueue;
@property (nonatomic) bool negotiatedScreenEnabled;
@property (nonatomic) bool negotiatedVideoEnabled;
@property (nonatomic, retain) VCNetworkFeedbackController *networkFeedbackController;
@property (nonatomic) int operatingMode;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) struct tagVCMediaQueue { }*vcMediaQueue;
@property (nonatomic) void*videoMediaControlInfoGenerator;

- (void*)audioMediaControlInfoGenerator;
- (id)basebandCongestionDetector;
- (void)dealloc;
- (int)deviceRole;
- (id)feedbackController;
- (unsigned long long)idsParticipantID;
- (id)init;
- (bool)initUsingWifiTiers;
- (id)mediaController;
- (struct tagHANDLE { int x1; }*)mediaQueue;
- (bool)negotiatedScreenEnabled;
- (bool)negotiatedVideoEnabled;
- (id)networkFeedbackController;
- (int)operatingMode;
- (void)setAudioMediaControlInfoGenerator:(void*)arg1;
- (void)setBasebandCongestionDetector:(id)arg1;
- (void)setDeviceRole:(int)arg1;
- (void)setFeedbackController:(id)arg1;
- (void)setIdsParticipantID:(unsigned long long)arg1;
- (void)setInitUsingWifiTiers:(bool)arg1;
- (void)setMediaController:(id)arg1;
- (void)setMediaQueue:(struct tagHANDLE { int x1; }*)arg1;
- (void)setNegotiatedScreenEnabled:(bool)arg1;
- (void)setNegotiatedVideoEnabled:(bool)arg1;
- (void)setNetworkFeedbackController:(id)arg1;
- (void)setOperatingMode:(int)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setVcMediaQueue:(struct tagVCMediaQueue { }*)arg1;
- (void)setVideoMediaControlInfoGenerator:(void*)arg1;
- (id)statisticsCollector;
- (struct tagVCMediaQueue { }*)vcMediaQueue;
- (void*)videoMediaControlInfoGenerator;

@end
