
@interface SIDownsampler : NSObject {
    <MTLComputePipelineState> * _pipelineState;
    int  _scaleFactor;
}

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)arg1 input:(id)arg2 output:(id)arg3;
- (id)initWithFactory:(id)arg1 scaleFactor:(int)arg2;

@end
