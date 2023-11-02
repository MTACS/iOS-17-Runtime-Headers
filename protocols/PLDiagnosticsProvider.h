
@protocol PLDiagnosticsProvider <NSObject>

@optional

- (NSString *)diagnosticInformation;
- (bool)supportsDiagnosticInformation;

@end
