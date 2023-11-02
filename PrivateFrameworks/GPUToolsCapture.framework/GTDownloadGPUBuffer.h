
@interface GTDownloadGPUBuffer : NSObject {
    <MTLBuffer> * _buffer;
    _Atomic unsigned long long * _usedGPUMemory;
    unsigned long long  offset;
    unsigned long long  size;
}

@property (nonatomic, retain) <MTLBuffer> *buffer;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (id)buffer;
- (void)dealloc;
- (id)initWithTracking:(void *)arg1; // needs 1 arg types, found 2: _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**, unsigned long long
- (unsigned long long)offset;
- (void)setBuffer:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
