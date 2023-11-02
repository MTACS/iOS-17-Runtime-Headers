
@interface CoreAnalyticsReportOutlet : CaseReportOutlet

- (id)buildDiagnosticIncidentEventForCase:(id)arg1;
- (id)closureTypeForClosure:(short)arg1;
- (id)dampeningResultForDampeningType:(short)arg1;
- (id)handledResultForDampeningType:(short)arg1;
- (bool)publishReportForCase:(id)arg1 options:(id)arg2;

@end
