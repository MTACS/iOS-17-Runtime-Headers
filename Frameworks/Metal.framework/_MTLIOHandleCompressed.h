
@interface _MTLIOHandleCompressed : _MTLObjectWithLabel <MTLIOHandleSPI> {
    <MTLDevice> * _device;
    int  _fd;
    void * _handle;
    unsigned long long  _labelTraceID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long globalTraceObjectID;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (readonly) unsigned int vnioID;

- (void)dealloc;
- (long long)decompress:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5;
- (unsigned long long)getHandleOffset:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)globalTraceObjectID;
- (id)initWithDevice:(id)arg1 path:(const char *)arg2 compressionType:(long long)arg3 error:(id*)arg4 uncached:(bool)arg5;
- (unsigned long long)length;
- (long long)read:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5;
- (long long)read:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5 needsDecompress:(bool*)arg6;
- (void*)readIntoStagingBuffer:(unsigned long long)arg1 offset:(unsigned long long)arg2 stagingBuffer:(void*)arg3 stagingBufferSize:(unsigned long long)arg4;
- (void*)readIntoStagingBuffer:(unsigned long long)arg1 offset:(unsigned long long)arg2 stagingBuffer:(void*)arg3 stagingBufferSize:(unsigned long long)arg4 needsDecompress:(bool*)arg5;
- (unsigned long long)stagingBufferSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;

@end
