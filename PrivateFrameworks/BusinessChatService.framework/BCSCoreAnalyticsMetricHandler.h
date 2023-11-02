
@interface BCSCoreAnalyticsMetricHandler : NSObject <BCSMetricHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleSubmittedMetric:(id)arg1;

@end
