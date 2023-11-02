
@interface VCMediaStreamRateControlConfig : NSObject {
    AVCBasebandCongestionDetector * _basebandCongestionDetector;
    AVCRateControlFeedbackController * _feedbackController;
    void * _mediaControlInfoGenerator;
    unsigned int  _mediaControlInfoGeneratorOptions;
    unsigned int  _mediaControlInfoGeneratorType;
    unsigned char  _mediaControlInfoVersion;
    VCRateControlMediaController * _mediaController;
    struct tagHANDLE { int x1; } * _mediaQueue;
    double  _mediaQueueThrottlingInterval;
    bool  _shouldCreateMediaControlInfoGenerator;
    bool  _shouldRegisterMediaControlInfoGeneratorCallbacks;
    AVCStatisticsCollector * _statisticsCollector;
    struct tagVCMediaQueue { } * _vcMediaQueue;
}

@property (nonatomic, retain) AVCBasebandCongestionDetector *basebandCongestionDetector;
@property (nonatomic, retain) AVCRateControlFeedbackController *feedbackController;
@property (nonatomic) void*mediaControlInfoGenerator;
@property (nonatomic) unsigned int mediaControlInfoGeneratorOptions;
@property (nonatomic) unsigned int mediaControlInfoGeneratorType;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (nonatomic, retain) VCRateControlMediaController *mediaController;
@property (nonatomic) struct tagHANDLE { int x1; }*mediaQueue;
@property (nonatomic) double mediaQueueThrottlingInterval;
@property (nonatomic) bool shouldCreateMediaControlInfoGenerator;
@property (nonatomic) bool shouldRegisterMediaControlInfoGeneratorCallbacks;
@property (nonatomic, retain) AVCStatisticsCollector *statisticsCollector;
@property (nonatomic) struct tagVCMediaQueue { }*vcMediaQueue;

- (id)basebandCongestionDetector;
- (void)dealloc;
- (id)feedbackController;
- (id)init;
- (void*)mediaControlInfoGenerator;
- (unsigned int)mediaControlInfoGeneratorOptions;
- (unsigned int)mediaControlInfoGeneratorType;
- (unsigned char)mediaControlInfoVersion;
- (id)mediaController;
- (struct tagHANDLE { int x1; }*)mediaQueue;
- (double)mediaQueueThrottlingInterval;
- (void)setBasebandCongestionDetector:(id)arg1;
- (void)setFeedbackController:(id)arg1;
- (void)setMediaControlInfoGenerator:(void*)arg1;
- (void)setMediaControlInfoGeneratorOptions:(unsigned int)arg1;
- (void)setMediaControlInfoGeneratorType:(unsigned int)arg1;
- (void)setMediaControlInfoVersion:(unsigned char)arg1;
- (void)setMediaController:(id)arg1;
- (void)setMediaQueue:(struct tagHANDLE { int x1; }*)arg1;
- (void)setMediaQueueThrottlingInterval:(double)arg1;
- (void)setShouldCreateMediaControlInfoGenerator:(bool)arg1;
- (void)setShouldRegisterMediaControlInfoGeneratorCallbacks:(bool)arg1;
- (void)setStatisticsCollector:(id)arg1;
- (void)setVcMediaQueue:(struct tagVCMediaQueue { }*)arg1;
- (bool)shouldCreateMediaControlInfoGenerator;
- (bool)shouldRegisterMediaControlInfoGeneratorCallbacks;
- (id)statisticsCollector;
- (struct tagVCMediaQueue { }*)vcMediaQueue;

@end
