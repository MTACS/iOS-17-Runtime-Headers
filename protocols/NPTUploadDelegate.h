
@protocol NPTUploadDelegate <NSObject>

@required

- (void)upload:(NPTUpload *)arg1 didFinishWithError:(NSError *)arg2;
- (void)upload:(NPTUpload *)arg1 didFinishWithResults:(NPTMetricResult *)arg2;
- (void)upload:(NPTUpload *)arg1 didReceiveSpeedMetric:(NPTSpeedMetric *)arg2;
- (void)uploadWillStart;

@end
