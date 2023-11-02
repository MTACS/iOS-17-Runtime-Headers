
@interface ForwardDmShader : NSObject {
    NSString * _computeKernelName;
    <MTLComputePipelineState> * _computePipeline;
}

- (void).cxx_destruct;
- (id)getComputePipeLineStateForDevice:(id)arg1 Library:(id)arg2;
- (id)getComputePipeLineStateForDevice:(id)arg1 Library:(id)arg2 Constants:(bool*)arg3 ConstantNumber:(unsigned int)arg4;
- (id)initShaderWithName:(id)arg1;

@end
