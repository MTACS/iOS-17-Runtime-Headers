
@protocol NetDiagnosticsShimDelegate <NSObject>

@optional

- (void)netDiagnosticTaskStatusChangedFor:(NSString *)arg1 toStatus:(int)arg2;

@end
