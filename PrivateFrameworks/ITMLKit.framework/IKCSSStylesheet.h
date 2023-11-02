
@interface IKCSSStylesheet : NSObject {
    IKCSSRuleList * _ruleList;
}

@property (nonatomic, retain) IKCSSRuleList *ruleList;

- (void).cxx_destruct;
- (id)description;
- (id)ruleList;
- (void)setRuleList:(id)arg1;

@end
