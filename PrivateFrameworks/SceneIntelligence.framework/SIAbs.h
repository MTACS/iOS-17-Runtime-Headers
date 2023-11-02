
@interface SIAbs : NSObject {
    <MTLComputePipelineState> * _computeAbs;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threadGroupSize;
}

- (void).cxx_destruct;
- (void)encodeInPlaceToCommandBuffer:(id)arg1 texture:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 destinationTexture:(id)arg3;
- (id)initWithFactory:(id)arg1;

@end
