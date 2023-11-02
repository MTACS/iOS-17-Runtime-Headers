
@interface _HKContextFreeGrammar : NSObject {
    id /* block */  _emptyStringEvaluator;
    NSMutableSet * _nonTerminals;
    _HKCFGNonTerminal * _rootNonTerminal;
    NSCharacterSet * _terminalCharacters;
    NSMutableSet * _terminals;
}

@property (nonatomic, readonly, copy) id /* block */ emptyStringEvaluator;
@property (nonatomic, readonly) _HKCFGNonTerminal *rootNonTerminal;

+ (id)grammarWithRootNonTerminal:(id)arg1;
+ (id)grammarWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_gatherExpressions;
- (void)_gatherExpressionsStartingAt:(id)arg1;
- (id /* block */)emptyStringEvaluator;
- (id)initWithRootNonTerminal:(id)arg1 emptyStringEvaluator:(id /* block */)arg2;
- (void)invalidate;
- (id)parseTreeForString:(id)arg1;
- (id)rootNonTerminal;

@end
