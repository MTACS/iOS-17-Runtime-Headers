
@protocol GTMTLDiagnosticsService

@required

- (void)deregisterObserver:(unsigned long long)arg1;
- (void)raiseRuntimeIssue:(NSString *)arg1;
- (unsigned long long)registerObserver:(id <GTMTLDiagnosticsServiceObserver>)arg1;

@end
