
@interface CACBugReporter : NSObject {
    SDRDiagnosticReporter * _diagnosticReporter;
}

@property (retain) SDRDiagnosticReporter *diagnosticReporter;

+ (id)sharedReporter;

- (void).cxx_destruct;
- (id)diagnosticReporter;
- (id)init;
- (void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3;
- (void)reportIssue:(id)arg1 subtype:(id)arg2 description:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setDiagnosticReporter:(id)arg1;

@end
