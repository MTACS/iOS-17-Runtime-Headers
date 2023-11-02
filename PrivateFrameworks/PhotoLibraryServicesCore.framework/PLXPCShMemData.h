
@interface PLXPCShMemData : NSData {
    void * _buffer;
    unsigned long long  _bufferLength;
    unsigned long long  _dataLength;
}

- (const void*)bytes;
- (void)dealloc;
- (id)description;
- (id)initWithXPCShmem:(id)arg1;
- (id)initWithXPCShmem:(id)arg1 length:(long long)arg2;
- (unsigned long long)length;

@end
