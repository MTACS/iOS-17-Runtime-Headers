
@interface MTLDebugIOHandle : MTLToolsIOHandle

- (void)dealloc;
- (long long)decompress:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5;
- (unsigned long long)getHandleOffset:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)globalTraceObjectID;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (long long)read:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5;
- (void*)readIntoStagingBuffer:(unsigned long long)arg1 offset:(unsigned long long)arg2 stagingBuffer:(void*)arg3 stagingBufferSize:(unsigned long long)arg4;
- (unsigned long long)stagingBufferSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;

@end
