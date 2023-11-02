
@protocol HMAccessorySettingsMetricsDispatcherFactory <NSObject>

@required

- (HMAccessorySettingsMetricsDispatcher *)createAccessorySettingsMetricsDispatcherWithCoreAnalyticsMetricDispatcher:(HMCoreAnalyticsMetricEventDispatcher *)arg1;

@end
