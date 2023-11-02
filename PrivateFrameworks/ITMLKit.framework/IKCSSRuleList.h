
@interface IKCSSRuleList : NSObject {
    NSMutableArray * rules;
}

- (void).cxx_destruct;
- (void)addRule:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (id)firstRule;
- (id)init;
- (id)lastRule;
- (id)ruleAtIndex:(unsigned long long)arg1;

@end
