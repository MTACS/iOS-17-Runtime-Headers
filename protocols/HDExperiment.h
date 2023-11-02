
@protocol HDExperiment <NSObject>

@required

- (HDDescription *)experimentDescription;
- (HDExperimentResult *)run:(id*)arg1;

@optional

- (bool)setupWithParameters:(NSDictionary *)arg1 host:(id <HDDiagnosticHost>)arg2 error:(id*)arg3;
- (bool)teardown:(id*)arg1;

@end
