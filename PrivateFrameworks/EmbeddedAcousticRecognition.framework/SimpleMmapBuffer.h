
@interface SimpleMmapBuffer : NSObject {
    void * _dataPointer;
    unsigned long long  _size;
}

@property void*dataPointer;
@property unsigned long long size;

- (void*)dataPointer;
- (void)dealloc;
- (id)initWithData:(const void*)arg1 ofSize:(unsigned long long)arg2;
- (void)setDataPointer:(void*)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
