
@interface PGMomentNodeRuleInterpreter : PLLibraryScopeRuleInterpreter {
    PGGraph * _graph;
}

@property (nonatomic, retain) PGGraph *graph;

- (void).cxx_destruct;
- (id)evaluateMomentNodes:(id)arg1 forDateRangeCondition:(id)arg2;
- (id)evaluateMomentNodes:(id)arg1 forPersonCondition:(id)arg2;
- (id)evaluateObjects:(id)arg1 forCondition:(id)arg2;
- (id)graph;
- (id)initWithGraph:(id)arg1;
- (void)setGraph:(id)arg1;

@end
