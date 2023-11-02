
@protocol MXSourcePathUtilProtocol

@required

- (void)cleanDataDirectoryForSource:(long long)arg1;
- (void)cleanDiagnosticsDirectoryForSource:(long long)arg1 andClient:(NSString *)arg2;
- (NSString *)filePathOfDiagnosticSourcePayloadForSourceID:(long long)arg1 andBundleID:(NSString *)arg2 andDate:(NSDate *)arg3;
- (NSString *)filePathOfMetricSourcePayloadForSourceID:(long long)arg1 andBundleID:(NSString *)arg2 andDate:(NSDate *)arg3;
- (void)removeDeliveredDiagnosticsForSourceID:(long long)arg1 forDate:(NSDate *)arg2;

@end
