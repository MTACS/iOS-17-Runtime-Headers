
@interface HDHRNotificationAnalytics : NSObject {
    HDHRNotificationMetric * _metric;
}

- (void).cxx_destruct;
- (id)_createMetricFromEventSample:(id)arg1;
- (void)_setDoNotDisturbOn:(bool)arg1;
- (void)_submitMetric;
- (id)initWithEventSample:(id)arg1;
- (void)submit;

@end
