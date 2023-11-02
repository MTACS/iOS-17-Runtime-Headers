
@interface VKInternedString : NSString {
    NSString * original;
}

+ (void)initialize;
+ (id)stringWithString:(id)arg1;

- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 locale:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (unsigned long long)length;
- (id)substringFromIndex:(unsigned long long)arg1;
- (id)substringToIndex:(unsigned long long)arg1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end