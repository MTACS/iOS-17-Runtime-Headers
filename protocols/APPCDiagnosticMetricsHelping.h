
@protocol APPCDiagnosticMetricsHelping

@required

- (void)loadFailedWithReason:(NSString *)arg1 code:(long long)arg2;
- (void)mediaPlaybackFailedWithReason:(NSString *)arg1;
- (unsigned long long)networkType;
- (void)setNetworkType:(unsigned long long)arg1;
- (void)templateMetricWithName:(NSString *)arg1 argument:(NSString *)arg2;

@end
