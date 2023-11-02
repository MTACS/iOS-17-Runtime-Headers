
@interface IndirectComputeCommandEncoderState : NSObject {
    unsigned long long  _kernelBufferOffsets;
    <MTLBuffer> * _kernelBuffers;
    void * _kernelBytes;
    unsigned long long  _kernelBytesLength;
    <MTLComputePipelineState> * _pipelineState;
}

+ (id)saveEncoder:(id)arg1 withDescriptor:(id)arg2 player:(id)arg3;

- (void).cxx_destruct;
- (void)restoreEncoder:(id)arg1 withDescriptor:(id)arg2;

@end
