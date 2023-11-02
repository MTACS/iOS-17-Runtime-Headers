
@interface MLProgramEvaluator : NSObject {
    <MLProgramInternal> * _program;
}

@property (readonly, copy) <MLModeling> *model;
@property (nonatomic, retain) <MLProgramInternal> *program;

- (void).cxx_destruct;
- (id)evaluateFunction:(id)arg1 arguments:(id)arg2 context:(id)arg3 error:(id*)arg4;
- (id)evaluateFunction:(id)arg1 arguments:(id)arg2 context:(id)arg3 updateContext:(bool)arg4 error:(id*)arg5;
- (id)initWithProgram:(id)arg1 error:(id*)arg2;
- (id)model;
- (id)newContextAndReturnError:(id*)arg1;
- (id)prepareArgumentsFromFeatures:(id)arg1 context:(id)arg2 forFunctionName:(id)arg3;
- (id)program;
- (void)setProgram:(id)arg1;
- (void)updateContext:(id)arg1 functionName:(id)arg2 result:(id)arg3;

@end
