
@interface AXSSDocumentTextRuleBasic : AXSSDocumentTextRule {
    NSArray * _avoidPhrases;
    NSArray * _avoidWords;
    bool  _caseSensitive;
    NSString * _note;
    NSArray * _suggestedWords;
}

@property (nonatomic, copy) NSArray *avoidPhrases;
@property (nonatomic, copy) NSArray *avoidWords;
@property (nonatomic) bool caseSensitive;
@property (nonatomic, copy) NSString *note;
@property (nonatomic, copy) NSArray *suggestedWords;

- (void).cxx_destruct;
- (id)avoidPhrases;
- (id)avoidWords;
- (bool)caseSensitive;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)issuesForWord:(id)arg1 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 previousWord:(id)arg3 previousWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 inText:(id)arg5 ignoreRuleUntilIndex:(long long*)arg6;
- (id)note;
- (void)setAvoidPhrases:(id)arg1;
- (void)setAvoidWords:(id)arg1;
- (void)setCaseSensitive:(bool)arg1;
- (void)setNote:(id)arg1;
- (void)setSuggestedWords:(id)arg1;
- (id)suggestedWords;

@end
