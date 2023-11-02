
@interface AXSSDocumentTextRuleCapitals : AXSSDocumentTextRule {
    UITextChecker * _textChecker;
    NSString * _textCheckerLanguage;
}

@property (nonatomic, retain) UITextChecker *textChecker;
@property (nonatomic, copy) NSString *textCheckerLanguage;

- (void).cxx_destruct;
- (bool)checkSpelledCorrectly:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })checkSpellingOfString:(id)arg1 includeAutocorrect:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)issuesForWord:(id)arg1 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 previousWord:(id)arg3 previousWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 inText:(id)arg5 ignoreRuleUntilIndex:(long long*)arg6;
- (void)setTextChecker:(id)arg1;
- (void)setTextCheckerLanguage:(id)arg1;
- (id)textChecker;
- (id)textCheckerLanguage;

@end
