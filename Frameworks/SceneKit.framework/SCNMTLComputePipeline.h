
@interface SCNMTLComputePipeline : NSObject {
    <MTLFunction> * _computeFunction;
    <MTLComputePipelineState> * _state;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
