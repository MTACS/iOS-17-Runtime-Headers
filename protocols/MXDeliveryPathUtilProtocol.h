
@protocol MXDeliveryPathUtilProtocol

@required

- (NSString *)applicationContainerPath;
- (NSString *)applicationContainerPathForBundleID:(NSString *)arg1;
- (bool)createDiagnosticDirectoryAtPath:(NSString *)arg1 forClient:(NSString *)arg2 withError:(id*)arg3;
- (bool)createMetricDirectoryAtPath:(NSString *)arg1 forClient:(NSString *)arg2 withError:(id*)arg3;
- (NSArray *)diagnosticReportFilepathsFromClient:(NSString *)arg1 withError:(id*)arg2;
- (NSString *)filepathOfDiagnosticForDeliveryFromAppContainerPath:(NSString *)arg1 forClient:(NSString *)arg2 atDate:(NSDate *)arg3;
- (NSString *)filepathOfMetricForDeliveryFromAppContainerPath:(NSString *)arg1 forClient:(NSString *)arg2 atDate:(NSDate *)arg3;
- (NSArray *)metricReportFilepathsFromClient:(NSString *)arg1 withError:(id*)arg2;

@end
