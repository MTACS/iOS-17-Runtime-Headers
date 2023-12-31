
@interface VSCasePreservingString : NSString {
    NSString * _underlyingString;
}

- (void).cxx_destruct;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithString:(id)arg1;
- (unsigned long long)length;
- (id)localizedCapitalizedString;
- (id)localizedLowercaseString;
- (id)localizedUppercaseString;
- (id)lowercaseString;
- (id)lowercaseStringWithLocale:(id)arg1;
- (id)uppercaseString;
- (id)uppercaseStringWithLocale:(id)arg1;

@end
