
@interface _PASBigEndianUTF16String : NSString <NSCopying> {
    id  _backingObject;
    unsigned long long  _length;
    const void * _swapped;
}

- (void).cxx_destruct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)init;
- (unsigned long long)length;

@end
