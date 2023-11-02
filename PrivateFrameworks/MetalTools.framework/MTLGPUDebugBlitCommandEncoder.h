
@interface MTLGPUDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder <MTLGPUDebugCommandEncoder> {
    unsigned int  _encoderID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int encoderID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)copyFromInternalBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toInternalBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;
- (unsigned int)encoderID;
- (id)initWithBlitCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)temporaryBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)temporaryBufferWithLength:(unsigned long long)arg1;

@end
