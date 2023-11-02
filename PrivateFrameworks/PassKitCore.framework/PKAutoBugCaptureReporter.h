
@interface PKAutoBugCaptureReporter : NSObject {
    SDRDiagnosticReporter * sdrReporter;
}

- (void).cxx_destruct;
- (void)handleResponse:(id)arg1;
- (bool)isExpectedFailureReason:(int)arg1;
- (bool)isRunningUnitTests;
- (void)reportIssueWithDomain:(id)arg1 type:(id)arg2 subtype:(id)arg3 subtypeContext:(id)arg4 payload:(id)arg5;
- (bool)shouldReportIssueOfType:(id)arg1;

@end
