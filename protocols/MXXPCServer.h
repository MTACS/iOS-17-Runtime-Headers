
@protocol MXXPCServer

@required

- (void)registerClient;

@optional

- (void)retrieveDiagnostics;
- (void)retrieveMetrics;

@end
