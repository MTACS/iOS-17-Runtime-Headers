
@interface VCShaders : NSObject {
    FigMetalContext * _context;
    <MTLComputePipelineState> * _kernels;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end
