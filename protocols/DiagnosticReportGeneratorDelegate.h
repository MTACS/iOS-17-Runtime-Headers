
@protocol DiagnosticReportGeneratorDelegate <NSObject>

@optional

- (void)reportGeneratorEnded:(DiagnosticReportGenerator *)arg1 reportInfo:(NSDictionary *)arg2 error:(NSError *)arg3;

@end
