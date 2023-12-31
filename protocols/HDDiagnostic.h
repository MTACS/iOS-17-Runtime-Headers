
@protocol HDDiagnostic <NSObject>

@required

- (<HDAnalysis> *)analysis;
- (HDDescription *)diagnosticDescription;
- (<HDExperiment> *)experiment;
- (HDReport *)runWithParameters:(NSDictionary *)arg1 host:(id <HDDiagnosticHost>)arg2 error:(id*)arg3;

@end
