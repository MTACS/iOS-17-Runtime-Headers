
@interface WFDateFieldParameterState : WFVariableStringParameterState {
    NSDate * _preprocessedDate;
}

@property (nonatomic, retain) NSDate *preprocessedDate;

+ (id)processingValueClasses;

- (void).cxx_destruct;
- (id)preprocessedDate;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (void)setPreprocessedDate:(id)arg1;

@end
