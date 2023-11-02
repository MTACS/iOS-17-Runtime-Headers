
@interface IndirectRenderCommandEncoderState : NSObject {
    unsigned long long  _fragmentBufferOffsets;
    <MTLBuffer> * _fragmentBuffers;
    void * _fragmentBytes;
    unsigned long long  _fragmentBytesLength;
    <MTLRenderPipelineState> * _pipelineState;
    unsigned long long  _vertexBufferOffsets;
    <MTLBuffer> * _vertexBuffers;
    void * _vertexBytes;
    unsigned long long  _vertexBytesLength;
}

+ (id)saveEncoder:(id)arg1 withDescriptor:(id)arg2 player:(id)arg3;

- (void).cxx_destruct;
- (void)restoreEncoder:(id)arg1 withDescriptor:(id)arg2;

@end
