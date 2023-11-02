
@protocol MTLIOHandleSPI <MTLIOFileHandle>

@required

- (long long)decompress:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5;
- (unsigned long long)getHandleOffset:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)globalTraceObjectID;
- (long long)read:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5;
- (long long)read:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5 needsDecompress:(bool*)arg6;
- (void*)readIntoStagingBuffer:(unsigned long long)arg1 offset:(unsigned long long)arg2 stagingBuffer:(void*)arg3 stagingBufferSize:(unsigned long long)arg4;
- (void*)readIntoStagingBuffer:(unsigned long long)arg1 offset:(unsigned long long)arg2 stagingBuffer:(void*)arg3 stagingBufferSize:(unsigned long long)arg4 needsDecompress:(bool*)arg5;
- (unsigned long long)stagingBufferSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;

@optional

- (unsigned int)vnioID;

@end
