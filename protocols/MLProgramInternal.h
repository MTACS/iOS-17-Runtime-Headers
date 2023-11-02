
@protocol MLProgramInternal <MLModeling, MLProgram>

@required

- (<MLFeatureProvider> *)evaluateFunction:(NSString *)arg1 arguments:(id <MLFeatureProvider>)arg2 error:(id*)arg3;
- (MLProgramContext *)newContextAndReturnError:(id*)arg1;

@end
