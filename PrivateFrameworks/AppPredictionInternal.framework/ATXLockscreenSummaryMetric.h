
@interface ATXLockscreenSummaryMetric : _ATXCoreAnalyticsMetric {
    unsigned long long  _editingUiExperienced;
}

@property (nonatomic) unsigned long long editingUiExperienced;

- (id)coreAnalyticsDictionary;
- (unsigned long long)editingUiExperienced;
- (id)metricName;
- (void)setEditingUiExperienced:(unsigned long long)arg1;

@end
