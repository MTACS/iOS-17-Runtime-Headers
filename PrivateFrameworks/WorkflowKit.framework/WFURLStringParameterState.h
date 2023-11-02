
@interface WFURLStringParameterState : WFVariableStringParameterState

+ (id)forceStringToURL:(id)arg1 error:(id*)arg2;
+ (Class)processingValueClass;

- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;

@end
