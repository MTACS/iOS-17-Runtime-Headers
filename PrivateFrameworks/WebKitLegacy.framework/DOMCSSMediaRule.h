
@interface DOMCSSMediaRule : DOMCSSRule

@property (readonly) DOMCSSRuleList *cssRules;
@property (readonly) DOMMediaList *media;

- (id)cssRules;
- (void)deleteRule:(unsigned int)arg1;
- (unsigned int)insertRule:(id)arg1 :(unsigned int)arg2;
- (unsigned int)insertRule:(id)arg1 index:(unsigned int)arg2;
- (id)media;

@end
