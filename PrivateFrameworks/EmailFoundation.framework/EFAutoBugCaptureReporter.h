
@interface EFAutoBugCaptureReporter : NSObject <EFLoggable> {
    SDRDiagnosticReporter * _diagnosticReporter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SDRDiagnosticReporter *diagnosticReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)sharedReporter;

- (void).cxx_destruct;
- (id)diagnosticReporter;
- (id)init;
- (void)reportIssueType:(id)arg1 description:(id)arg2;
- (void)setDiagnosticReporter:(id)arg1;

@end
