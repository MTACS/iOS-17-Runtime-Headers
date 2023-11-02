
@interface IOBufferMutableData : NSMutableData {
    void * _bytes;
    id /* block */  _deallocator;
    unsigned long long  _length;
}

@property (copy) id /* block */ deallocator;

- (void).cxx_destruct;
- (const void*)bytes;
- (void)dealloc;
- (id /* block */)deallocator;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id /* block */)arg3;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)setDeallocator:(id /* block */)arg1;
- (void)setLength:(unsigned long long)arg1;

@end
