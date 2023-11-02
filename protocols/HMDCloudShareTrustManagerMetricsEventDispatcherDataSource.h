
@protocol HMDCloudShareTrustManagerMetricsEventDispatcherDataSource

@required

- (HMDHome *)homeForCloudShareTrustManagerMetricsEventDispatcher:(HMDCloudShareTrustManagerMetricsEventDispatcher *)arg1;
- (bool)isFromOwnerForCloudShareTrustManagerMetricsEventDispatcher:(HMDCloudShareTrustManagerMetricsEventDispatcher *)arg1;
- (long long)trustConfigureStateForCloudShareTrustManagerMetricsEventDispatcher:(HMDCloudShareTrustManagerMetricsEventDispatcher *)arg1;
- (struct CloudShareTrustManagerTrustStatusCounts { long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; })trustStatusCountsForCloudShareTrustManagerMetricsEventDispatcher:(HMDCloudShareTrustManagerMetricsEventDispatcher *)arg1;

@end
