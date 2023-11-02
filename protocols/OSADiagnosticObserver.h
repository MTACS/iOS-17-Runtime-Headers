
@protocol OSADiagnosticObserver <NSObject>

@required

- (void)didWriteDiagnosticLog:(NSString *)arg1 logId:(NSString *)arg2 logFilePath:(NSString *)arg3 logInfo:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)willWriteDiagnosticLog:(NSString *)arg1 logId:(NSString *)arg2 logInfo:(NSDictionary *)arg3;

@end
