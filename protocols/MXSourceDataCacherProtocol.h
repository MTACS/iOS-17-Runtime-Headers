
@protocol MXSourceDataCacherProtocol

@required

- (bool)saveToSourceDirectoryWithDiagnosticSourcePayload:(MXSourceXPCPayload *)arg1;
- (bool)saveToSourceDirectoryWithMetricSourcePayload:(MXSourceXPCPayload *)arg1;

@end
