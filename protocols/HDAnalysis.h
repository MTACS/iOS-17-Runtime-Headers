
@protocol HDAnalysis <NSObject>

@required

- (HDDescription *)analysisDescription;
- (HDAnalysisResult *)analyzeExperimentResult:(HDExperimentResult *)arg1 error:(id*)arg2;

@optional

- (bool)setupWithParameters:(NSDictionary *)arg1 host:(id <HDDiagnosticHost>)arg2 error:(id*)arg3;
- (bool)teardown:(id*)arg1;

@end
