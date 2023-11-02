
@interface IRRuleOutputSystemState : IRRuleOutput {
    IRRuleOutputEvaluation * _value;
}

@property (nonatomic, retain) IRRuleOutputEvaluation *value;

- (void).cxx_destruct;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
