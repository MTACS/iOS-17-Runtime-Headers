
@interface _NURenderPipelineBlockVariable : NURenderPipelineFunction {
    id /* block */  _evaluationBlock;
}

- (void).cxx_destruct;
- (id)description;
- (id)evaluate:(id)arg1 error:(out id*)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithEvaluationBlock:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBlockVariable:(id)arg1;

@end
