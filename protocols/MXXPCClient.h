
@protocol MXXPCClient

@required

- (void)registrationProcessed;

@optional

- (void)deliverDiagnosticPayload:(NSArray *)arg1;
- (void)deliverMetricPayload:(NSArray *)arg1;

@end
