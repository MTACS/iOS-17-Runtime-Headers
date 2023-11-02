
@interface _PFResultUniString : _PFResultString {
    unsigned int  _length;
}

+ (unsigned long long)bufferOffset;
+ (struct __CFAllocator { }*)cfDeallocator;
+ (void)initialize;

- (const char *)UTF8String;
- (bool)_isCString;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCString:(char *)arg1;
- (void)getCharacters:(unsigned short*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (unsigned long long)length;

@end
