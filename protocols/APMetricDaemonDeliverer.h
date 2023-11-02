
@protocol APMetricDaemonDeliverer <NSObject>

@required

+ (<APMetricDaemonDeliverer><APMetricNotificationRegisterOwner><APMetricReceiving> *)daemonDelivery;
+ (void)setDaemonDelivery:(id <APMetricDaemonDeliverer><APMetricNotificationRegisterOwner><APMetricReceiving>)arg1;

@end
