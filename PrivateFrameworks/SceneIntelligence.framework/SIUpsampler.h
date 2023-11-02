
@interface SIUpsampler : NSObject {
    <MTLComputePipelineState> * _pipelineState;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 input:(id)arg2 output:(id)arg3;
- (id)initWithFactory:(id)arg1;

@end
