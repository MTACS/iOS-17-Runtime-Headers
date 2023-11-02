
@interface PPScoreInterpreter : NSObject {
    PPScoreInterpreterBytecode * _bytecode;
    _PASLock * _reusableContext;
    PPBaseScoreInputSet * _scoreInputSet;
}

+ (id)scoreInterpreterFromAsset:(id)arg1;
+ (id)scoreInterpreterFromFactorName:(id)arg1 namespaceName:(id)arg2;

- (void).cxx_destruct;
- (void)cleanupReusableComponents;
- (void)evaluateWithPreviousStageSubscores:(id)arg1 scoreInputInitializationBlock:(id /* block */)arg2 scoreInputAssignmentBlock:(id /* block */)arg3 outputBlock:(id /* block */)arg4;
- (id)evaluateWithScoreInputs:(id)arg1;
- (id)evaluateWithScoreInputs:(id)arg1 previousSubscores:(id)arg2;
- (id)init;
- (id)initWithBytecode:(id)arg1;
- (id)initWithBytecode:(id)arg1 scoreInputSet:(id)arg2;
- (id)initWithParseRoot:(id)arg1 scalarSubscoreCount:(unsigned long long)arg2 arraySubscoreCount:(unsigned long long)arg3 objectSubscoreCount:(unsigned long long)arg4;

@end
