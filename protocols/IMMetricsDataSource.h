
@protocol IMMetricsDataSource <NSObject>

@required

- (id)metricsContentIdentifier;

@optional

- (NSDictionary *)metricsAdditionalData;

@end
