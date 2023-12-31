
@interface VCAudioPowerLevelMonitor : NSObject {
    unsigned int  audioLowPowerTimeInterval;
    float  audioPowerMovingAverageCoefficient;
    float  audioPowerThreshold;
    float  currentAudioAverage;
    NSObject<VCAudioPowerLevelMonitorDelegate> * delegate;
    bool  isAudioPowerBelowThreshold;
    bool  isAudioPowerMovingAverage;
    unsigned int  startDetectRemoteAudioLowPowerTime;
}

@property (nonatomic) NSObject<VCAudioPowerLevelMonitorDelegate> *delegate;

- (id)delegate;
- (void)detectRemoteAveragePowerLevel:(float)arg1 timestamp:(unsigned int)arg2;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
