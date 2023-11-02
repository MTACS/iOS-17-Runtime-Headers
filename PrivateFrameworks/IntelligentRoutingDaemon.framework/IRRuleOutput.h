
@interface IRRuleOutput : NSObject {
    IRRule * _rule;
}

@property (nonatomic, readonly) IRRule *rule;

- (void).cxx_destruct;
- (id)evaluateRuleOutputWithCandidateIdentifier:(id)arg1;
- (id)initWithRule:(id)arg1;
- (id)rule;

@end
