
@protocol SNSessionObject <NSObject>

@required

- (NSString *)aceId;
- (bool)bufferingAllowedDuringActiveSession;
- (bool)isProvisional;
- (bool)isRestartable;
- (bool)isRetryable;
- (void)logDiagnostics;
- (NSString *)refId;
- (NSString *)requestId;
- (NSObject<OS_dispatch_data> *)serializedAceDataError:(id*)arg1;
- (void)setAceId:(NSString *)arg1;
- (void)setRefId:(NSString *)arg1;
- (void)setSessionRequestId:(NSString *)arg1;
- (bool)supportedByLocalSession;
- (bool)supportedByRemoteLimitedSession;

@end
