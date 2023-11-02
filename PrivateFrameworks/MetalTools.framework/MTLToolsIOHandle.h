
@interface MTLToolsIOHandle : MTLToolsObject <MTLIOHandleSPI>

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
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)label;
- (unsigned long long)length;
- (long long)read:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5;
- (long long)read:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3 stagingBuffer:(void*)arg4 stagingBufferSize:(unsigned long long)arg5 needsDecompress:(bool*)arg6;
- (void*)readIntoStagingBuffer:(unsigned long long)arg1 offset:(unsigned long long)arg2 stagingBuffer:(void*)arg3 stagingBufferSize:(unsigned long long)arg4;
- (void*)readIntoStagingBuffer:(unsigned long long)arg1 offset:(unsigned long long)arg2 stagingBuffer:(void*)arg3 stagingBufferSize:(unsigned long long)arg4 needsDecompress:(bool*)arg5;
- (void)setLabel:(id)arg1;
- (unsigned long long)stagingBufferSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (unsigned int)vnioID;

@end
