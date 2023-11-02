
@interface PreviewsFoundation.CrashReportListener : NSObject <OSADiagnosticObserver> {
    void state;
    void types;
}

- (void).cxx_destruct;
- (void)didWriteDiagnosticLog:(id)arg1 logId:(id)arg2 logFilePath:(id)arg3 logInfo:(id)arg4 error:(id)arg5;
- (id)init;
- (void)willWriteDiagnosticLog:(id)arg1 logId:(id)arg2 logInfo:(id)arg3;

@end
