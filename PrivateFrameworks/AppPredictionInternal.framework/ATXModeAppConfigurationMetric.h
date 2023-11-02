
@interface ATXModeAppConfigurationMetric : _ATXCoreAnalyticsMetric {
    NSString * _bundleId;
    NSString * _modeSemanticType;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *modeSemanticType;

- (void).cxx_destruct;
- (id)bundleId;
- (id)coreAnalyticsDictionary;
- (id)description;
- (id)metricName;
- (id)modeSemanticType;
- (void)setBundleId:(id)arg1;
- (void)setModeSemanticType:(id)arg1;

@end
