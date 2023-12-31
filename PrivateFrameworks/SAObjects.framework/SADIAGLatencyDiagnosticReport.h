
@interface SADIAGLatencyDiagnosticReport : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *diagnosticReports;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)latencyDiagnosticReport;
+ (id)latencyDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2;

- (id)diagnosticReports;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDiagnosticReports:(id)arg1;

@end
