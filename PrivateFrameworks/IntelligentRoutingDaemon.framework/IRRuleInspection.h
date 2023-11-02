
@interface IRRuleInspection : NSObject {
    IRRuleOutputEvaluation * _evaluation;
    NSString * _ruleName;
}

@property (nonatomic, retain) IRRuleOutputEvaluation *evaluation;
@property (nonatomic, retain) NSString *ruleName;

- (void).cxx_destruct;
- (id)evaluation;
- (id)initWithRuleName:(id)arg1 evaluation:(id)arg2;
- (id)ruleName;
- (void)setEvaluation:(id)arg1;
- (void)setRuleName:(id)arg1;

@end
