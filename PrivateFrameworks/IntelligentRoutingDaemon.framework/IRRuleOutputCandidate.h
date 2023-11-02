
@interface IRRuleOutputCandidate : IRRuleOutput {
    bool  _isAnyCandidateEvaluatedToYes;
    NSDictionary * _values;
}

@property (nonatomic) bool isAnyCandidateEvaluatedToYes;
@property (nonatomic, retain) NSDictionary *values;

- (void).cxx_destruct;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)arg1;
- (bool)isAnyCandidateEvaluatedToYes;
- (void)setIsAnyCandidateEvaluatedToYes:(bool)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
