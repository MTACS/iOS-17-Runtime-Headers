
@interface DEExpander : NSObject {
    NSDictionary * _parameters;
    bool  _shouldEvaluateConditions;
    bool  _shouldExpandOpts;
}

@property (nonatomic, retain) NSDictionary *parameters;
@property bool shouldEvaluateConditions;
@property bool shouldExpandOpts;

- (void).cxx_destruct;
- (id)expand:(id)arg1 localeString:(id)arg2 expansionType:(int)arg3;
- (id)expandWithParamsString:(id)arg1 localeString:(id)arg2;
- (id)expandWithParamsString:(id)arg1 localeString:(id)arg2 evaluateConditions:(bool)arg3;
- (id)expandWithParamsStringAsDAG:(id)arg1 localeString:(id)arg2;
- (id)init;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (void)setShouldEvaluateConditions:(bool)arg1;
- (void)setShouldExpandOpts:(bool)arg1;
- (bool)shouldEvaluateConditions;
- (bool)shouldExpandOpts;

@end
