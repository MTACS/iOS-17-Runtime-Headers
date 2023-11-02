
@interface MetricsModuleCommon : NSObject

+ (Class)daemonDeliveryClass;
+ (void)initialize;
+ (Class)metricClass;
+ (Class)notificationRegistrarClass;
+ (void)setDaemonDeliveryClass:(Class)arg1;
+ (void)setMetricClass:(Class)arg1;
+ (void)setNotificationRegistrarClass:(Class)arg1;

@end
