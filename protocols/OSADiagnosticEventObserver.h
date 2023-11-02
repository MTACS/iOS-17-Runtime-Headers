
@protocol OSADiagnosticEventObserver <NSObject>

@required

- (void)didReceiveDiagnosticLog:(NSString *)arg1 ofType:(NSString *)arg2 details:(NSDictionary *)arg3;

@end
