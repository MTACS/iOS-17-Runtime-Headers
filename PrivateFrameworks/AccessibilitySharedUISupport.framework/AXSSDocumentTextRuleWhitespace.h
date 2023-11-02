
@interface AXSSDocumentTextRuleWhitespace : AXSSDocumentTextRule

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)issuesForWord:(id)arg1 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 previousWord:(id)arg3 previousWordRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 inText:(id)arg5 ignoreRuleUntilIndex:(long long*)arg6;

@end
