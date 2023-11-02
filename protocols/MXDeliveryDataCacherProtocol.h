
@protocol MXDeliveryDataCacherProtocol <NSObject>

@required

- (NSArray *)diagnosticsForClient:(NSString *)arg1;
- (NSArray *)metricsForClient:(NSString *)arg1;
- (void)notifyDataAvailableForDelivery;
- (bool)saveDiagnostic:(MXDiagnosticPayload *)arg1 toDeliveryDirectoryForBundleID:(NSString *)arg2;
- (bool)saveMetrics:(NSArray *)arg1 toDeliveryDirectoryForBundleID:(NSString *)arg2;
- (bool)writeDiagnosticReport:(MXDiagnosticPayload *)arg1 atAppContainerPath:(NSString *)arg2 forClient:(NSString *)arg3 withError:(id*)arg4;
- (bool)writeMetricReport:(MXMetricPayload *)arg1 atAppContainerPath:(NSString *)arg2 forClient:(NSString *)arg3 withError:(id*)arg4;

@end
