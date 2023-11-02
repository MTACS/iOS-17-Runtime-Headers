
@interface AXSSDocumentTextRule : NSObject <NSCopying> {
    long long  _granularity;
    long long  _severity;
}

@property (nonatomic) long long granularity;
@property (nonatomic) long long severity;

+ (id)matchReplacementArrayCapitalization:(id)arg1 withSource:(id)arg2;
+ (id)matchReplacementCapitalization:(id)arg1 withSource:(id)arg2;
+ (id)replaceCustomRegexNotation:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)granularity;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issuesForWord:(id)arg1 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 previousWord:(id)arg3 previousWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 inText:(id)arg5 ignoreRuleUntilIndex:(long long*)arg6;
- (id)issuesInText:(id)arg1;
- (void)setGranularity:(long long)arg1;
- (void)setSeverity:(long long)arg1;
- (long long)severity;

@end
