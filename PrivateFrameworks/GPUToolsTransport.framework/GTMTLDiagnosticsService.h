
@interface GTMTLDiagnosticsService : NSObject <GTMTLDiagnosticsService, GTMTLDiagnosticsServiceObserver> {
    NSObject<OS_os_log> * _log;
    GTObservableService * _observers;
}

- (void).cxx_destruct;
- (void)deregisterObserver:(unsigned long long)arg1;
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;
- (id)init;
- (void)notifyCommandBufferIssue:(id)arg1;
- (void)notifyDiagnosticsIssue:(id)arg1;
- (void)raiseRuntimeIssue:(id)arg1;
- (unsigned long long)registerObserver:(id)arg1;

@end
