
@interface __NSCFLocalizedAttributedString : NSString <NSSecureCoding> {
    NSString * _apparentString;
    NSDictionary * _formatConfiguration;
    NSAttributedString * _original;
}

+ (struct __CFString { }*)copyStringWithMarkdown:(struct __CFString { }*)arg1 formatConfiguration:(struct __CFDictionary { }*)arg2 bundle:(struct __CFBundle { }*)arg3 tableURL:(struct __CFURL { }*)arg4;
+ (struct __CFString { }*)createStringRequiringInflectionWithFormat:(struct __CFString { }*)arg1 formatOptions:(struct __CFDictionary { }*)arg2 arguments:(char *)arg3;
+ (id)stringEncapsulatingBaseAttributedString:(id)arg1;

- (id)__baseAttributedString;
- (const char *)_fastCStringContents:(bool)arg1;
- (const unsigned short*)_fastCharacterContents;
- (id)_initWithAttributedString:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fastestEncoding;
- (id)formatConfiguration;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithAttributedStringMarkdown:(id)arg1 formatConfiguration:(id)arg2 bundle:(struct __CFBundle { }*)arg3 tableURL:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
