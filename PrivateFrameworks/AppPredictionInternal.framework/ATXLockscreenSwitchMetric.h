
@interface ATXLockscreenSwitchMetric : _ATXCoreAnalyticsMetric {
    long long  _duration;
    NSString * _lockscreenId;
    NSString * _outcome;
    NSString * _switchMechanism;
}

@property (nonatomic) long long duration;
@property (nonatomic, copy) NSString *lockscreenId;
@property (nonatomic, copy) NSString *outcome;
@property (nonatomic, copy) NSString *switchMechanism;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (long long)duration;
- (id)lockscreenId;
- (id)metricName;
- (id)outcome;
- (void)setDuration:(long long)arg1;
- (void)setLockscreenId:(id)arg1;
- (void)setOutcome:(id)arg1;
- (void)setSwitchMechanism:(id)arg1;
- (id)switchMechanism;

@end
