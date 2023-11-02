
@interface MeasureFoundation.KernelReprojection : MPSKernel {
    void preprojectionPipeline;
    void reprojectionPipeline;
    void uniformsBuffer;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end
