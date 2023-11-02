
@interface _PASProxyConcatenatedString : NSString <NSCopying> {
    NSArray * _components;
    unsigned long long  _length;
    unsigned long long * _startIndices;
}

- (void).cxx_destruct;
- (id)_createSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)length;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
