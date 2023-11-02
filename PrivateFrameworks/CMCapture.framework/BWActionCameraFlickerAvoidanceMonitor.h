
@interface BWActionCameraFlickerAvoidanceMonitor : NSObject {
    int  _confidenceHysteresis;
    int  _confidenceThreshold;
    float  _currentFrameRate;
    NSDictionary * _defaultMaxExposureDurationFrameworkOverrideByPortType;
    int  _flickerFrequency;
    bool  _frameRateAware;
    int  _frameRateCompatibleFlickerFrequency;
    int  _frameRateUpdateCounter;
}

@property (nonatomic) int flickerFrequency;

+ (void)initialize;

- (void)dealloc;
- (bool)detectFlickerWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 fromCaptureStreamWithPortType:(id)arg2;
- (int)flickerFrequency;
- (id)initWithDefaultMaxExposureDurationFrameworkOverrideByPortType:(id)arg1;
- (void)setFlickerFrequency:(int)arg1;

@end
