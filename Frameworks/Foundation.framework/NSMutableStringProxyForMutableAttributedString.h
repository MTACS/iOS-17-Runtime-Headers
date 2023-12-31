
@interface NSMutableStringProxyForMutableAttributedString : NSMutableString {
    NSMutableAttributedString * mutableAttributedString;
}

- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithMutableAttributedString:(id)arg1;
- (unsigned long long)length;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;

@end
