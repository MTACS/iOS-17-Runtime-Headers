
@protocol VCAudioPowerLevelMonitorDelegate <NSObject>

@required

- (void)vcAudioPowerLevelMonitor:(VCAudioPowerLevelMonitor *)arg1 isAudioBelowThreshold:(bool)arg2;

@end
