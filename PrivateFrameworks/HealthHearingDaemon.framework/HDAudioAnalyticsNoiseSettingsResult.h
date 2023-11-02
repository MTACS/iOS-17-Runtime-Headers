
@interface HDAudioAnalyticsNoiseSettingsResult : NSObject {
    bool  _hasNoiseEnabled;
    bool  _hasNoiseNotificationsEnabled;
    bool  _hasWatchPairedWithNoiseApp;
    NSNumber * _noiseThreshold;
}

@property (nonatomic) bool hasNoiseEnabled;
@property (nonatomic) bool hasNoiseNotificationsEnabled;
@property (nonatomic) bool hasWatchPairedWithNoiseApp;
@property (nonatomic, readonly) NSNumber *noiseThreshold;

- (void).cxx_destruct;
- (bool)hasNoiseEnabled;
- (bool)hasNoiseNotificationsEnabled;
- (bool)hasWatchPairedWithNoiseApp;
- (id)initWithWatchPairedWithNoiseApp:(bool)arg1 hasNoiseEnabled:(bool)arg2 hasNoiseNotificationsEnabled:(bool)arg3 noiseThreshold:(id)arg4;
- (id)noiseThreshold;
- (void)setHasNoiseEnabled:(bool)arg1;
- (void)setHasNoiseNotificationsEnabled:(bool)arg1;
- (void)setHasWatchPairedWithNoiseApp:(bool)arg1;

@end
