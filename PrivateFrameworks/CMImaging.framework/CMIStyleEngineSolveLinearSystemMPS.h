
@interface CMIStyleEngineSolveLinearSystemMPS : CMIStyleEngineSolveLinearSystem {
    NSArray * _inputLHS;
    NSArray * _inputRHS;
    NSArray * _inputSolution;
    NSArray * _inputStatus;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 lhsSize:(unsigned int)arg2 rhsSize:(unsigned int)arg3;
- (id)inputLHS;
- (id)inputRHS;
- (id)inputSolution;
- (id)inputStatus;
- (void)setInputLHS:(id)arg1;
- (void)setInputRHS:(id)arg1;
- (void)setInputSolution:(id)arg1;
- (void)setInputStatus:(id)arg1;
- (int)solveLinearSystem:(id)arg1;

@end
