
@interface PLLibraryScopeRuleEvaluator : NSObject {
    PLLibraryScopeRuleInterpreter * _interpreter;
    NSArray * _rules;
}

@property (nonatomic, retain) PLLibraryScopeRuleInterpreter *interpreter;
@property (nonatomic, retain) NSArray *rules;

- (void).cxx_destruct;
- (id)description;
- (id)evaluateObjects:(id)arg1 withResultEnumerationBlock:(id /* block */)arg2;
- (id)initWithRules:(id)arg1 andInterpreter:(id)arg2;
- (id)interpreter;
- (id)rules;
- (void)setInterpreter:(id)arg1;
- (void)setRules:(id)arg1;

@end
