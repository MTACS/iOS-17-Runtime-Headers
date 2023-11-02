
@interface _PASUTF8String : NSString <NSCopying, NSMutableCopying> {
    unsigned int  _asciiPrefixLength;
    NSData * _backingData;
    const char * _buffer;
    const char * _bufferEnd;
    struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 24; } * _chunks;
    unsigned int  _length;
    unsigned int  _nchunks;
    bool  _nullTerminated;
}

- (void).cxx_destruct;
- (const char *)UTF8String;
- (const char *)_pas_overrideFastUTF8StringPtrWithOptions:(unsigned long long)arg1 encodedLength:(unsigned long long*)arg2;
- (id)_pas_overrideStringBackedByUTF8CString;
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;
- (bool)canBeConvertedToEncoding:(unsigned long long)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)fastestEncoding;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithUTF8Data:(id)arg1 asciiPrefixLength:(unsigned int)arg2 nullTerminated:(bool)arg3;
- (unsigned long long)length;
- (unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
