
@interface TTSMatchedRuleReplacement : NSObject {
    TTSRegexMatch * _match;
    NSString * _replacement;
    TTSRuleReplacement * _ruleReplacement;
}

@property (nonatomic, retain) TTSRegexMatch *match;
@property (nonatomic, retain) NSString *replacement;
@property (nonatomic) TTSRuleReplacement *ruleReplacement;

- (void).cxx_destruct;
- (id)match;
- (id)replacement;
- (id)ruleReplacement;
- (void)setMatch:(id)arg1;
- (void)setReplacement:(id)arg1;
- (void)setRuleReplacement:(id)arg1;

@end
