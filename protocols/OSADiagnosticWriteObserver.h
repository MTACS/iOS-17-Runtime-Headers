
@protocol OSADiagnosticWriteObserver <NSObject>

@required

- (void)didWriteDiagnosticLog:(NSString *)arg1 ofType:(NSString *)arg2 toPath:(NSString *)arg3;
- (void)failedToWriteDiagnosticLog:(NSString *)arg1 ofType:(NSString *)arg2 error:(NSError *)arg3;
- (void)willWriteDiagnosticLog:(NSString *)arg1 ofType:(NSString *)arg2;

@end
