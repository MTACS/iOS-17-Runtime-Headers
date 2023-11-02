
@interface TTSRuleReplacement : NSObject {
    TTSRuleGroup * _group;
    unsigned long long  _index;
    bool  _isTerminalRule;
    id /* block */  _postMatch;
    TTSRegex * _regex;
    NSString * _replacement;
    TTSRuleset * _ruleset;
}

@property (nonatomic, retain) TTSRuleGroup *group;
@property (nonatomic) unsigned long long index;
@property (nonatomic) bool isTerminalRule;
@property (nonatomic, copy) id /* block */ postMatch;
@property (nonatomic, retain) TTSRegex *regex;
@property (nonatomic, retain) NSString *replacement;
@property (nonatomic) TTSRuleset *ruleset;

- (void).cxx_destruct;
- (unsigned long long)effectiveIndex;
- (id)group;
- (unsigned long long)index;
- (bool)isTerminalRule;
- (id /* block */)postMatch;
- (id)regex;
- (id)replacement;
- (id)ruleset;
- (void)setGroup:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setIsTerminalRule:(bool)arg1;
- (void)setPostMatch:(id /* block */)arg1;
- (void)setRegex:(id)arg1;
- (void)setReplacement:(id)arg1;
- (void)setRuleset:(id)arg1;

@end
