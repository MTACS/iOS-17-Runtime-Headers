
@interface DOMCSSStyleSheet : DOMStyleSheet

@property (readonly) DOMCSSRuleList *cssRules;
@property (readonly) DOMCSSRule *ownerRule;
@property (readonly) DOMCSSRuleList *rules;

- (int)addRule:(id)arg1 style:(id)arg2 index:(unsigned int)arg3;
- (id)cssRules;
- (void)deleteRule:(unsigned int)arg1;
- (unsigned int)insertRule:(id)arg1 :(unsigned int)arg2;
- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;
- (id)ownerRule;
- (void)removeRule:(unsigned int)arg1;
- (id)rules;

@end
