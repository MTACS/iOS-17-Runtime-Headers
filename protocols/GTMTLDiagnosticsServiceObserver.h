
@protocol GTMTLDiagnosticsServiceObserver

@required

- (void)notifyCommandBufferIssue:(GTCommandBufferIssue *)arg1;
- (void)notifyDiagnosticsIssue:(GTDiagnosticsIssue *)arg1;

@end
