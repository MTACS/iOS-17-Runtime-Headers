
@protocol HMDDiagnosticReportLogging

@required

- (void)updateDiagnosticReportSignature:(NSMutableDictionary *)arg1;

@optional

- (NSString *)diagnosticReportEventSubType;
- (NSString *)diagnosticReportEventType;

@end
