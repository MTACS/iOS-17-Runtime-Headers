
@interface _PFEncodedString : _PFAbstractString {
    int  _cd_rc;
    unsigned int  _length;
    id  _sourceData;
}

- (const char *)UTF8String;
- (bool)_isCString;
- (bool)_isDeallocating;
- (bool)_tryRetain;
- (unsigned long long)cStringLength;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getCString:(char *)arg1;
- (void)getCharacters:(unsigned short*)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (unsigned long long)length;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
