
@protocol MXDiagnosticServicesProtocol

@required

- (void)cleanServiceDiagnosticsDirectoriesForClient:(NSString *)arg1;
- (MXDiagnosticPayload *)diagnosticPayloadForClient:(NSString *)arg1 andDate:(NSDate *)arg2;
- (MXDiagnosticPayload *)diagnosticPayloadForClient:(NSString *)arg1 isExtension:(bool)arg2 andMainAppBundleID:(NSString *)arg3 andDate:(NSDate *)arg4;

@end
