
@protocol NPTDownloadDelegate <NSObject>

@required

- (void)download:(NPTDownload *)arg1 didFinishWithError:(NSError *)arg2;
- (void)download:(NPTDownload *)arg1 didFinishWithResults:(NPTMetricResult *)arg2;
- (void)download:(NPTDownload *)arg1 didReceiveSpeedMetric:(NPTSpeedMetric *)arg2;
- (void)downloadWillStart;

@end
