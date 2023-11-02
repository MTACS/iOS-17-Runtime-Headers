
@protocol MXCoreHandlerDelegate

@required

- (void)clientDidRegisterForBundleID:(NSString *)arg1;
- (void)clientIsAvailableForPreparingDataActivity;
- (void)clientIsNotAvailable;
- (void)metricIsAvailableFromSourceDirectoryForSavingToDeliveryDirectoryWithClientMetrics:(NSDictionary *)arg1;

@end
