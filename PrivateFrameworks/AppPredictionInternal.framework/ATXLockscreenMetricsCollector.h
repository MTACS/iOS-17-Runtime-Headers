
@interface ATXLockscreenMetricsCollector : NSObject

- (id)_configurationMetricFromPosterConfiguration:(id)arg1 lockscreenId:(id)arg2 modeClient:(id)arg3;
- (id)_dailyMetricsDescriptionGivenConfigurationMetrics:(id)arg1 widgetMetrics:(id)arg2 summaryMetric:(id)arg3;
- (id)_dailyMetricsDescription_shouldPost:(bool)arg1;
- (void)_fillSummaryMetric:(id)arg1 configurations:(id)arg2;
- (void)_postConfigurationMetrics:(id)arg1 widgetMetrics:(id)arg2 summaryMetric:(id)arg3;
- (id)_weeklyRollingIdFromLockscreenId:(id)arg1;
- (id)_widgetMetricFromComplication:(id)arg1 lockscreenId:(id)arg2 isLandscape:(bool)arg3;
- (id)dailyMetricsDescription;
- (void)postDailyMetrics;
- (void)postEditMetricWithEvent:(id)arg1;
- (void)postSwitchMetricWithEvent:(id)arg1;

@end
