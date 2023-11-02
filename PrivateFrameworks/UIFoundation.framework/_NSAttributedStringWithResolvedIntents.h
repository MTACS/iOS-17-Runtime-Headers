
@interface _NSAttributedStringWithResolvedIntents : NSAttributedString {
    Class  _resolver;
    NSAttributedString * _string;
}

- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)initWithUnresolvedString:(id)arg1 resolver:(Class)arg2;
- (id)string;

@end
