
@interface MeasureFoundation.KernelYCbCrToRGB : MPSKernel {
    void convertAndRotatePipeline;
    void convertPipeline;
    void roiBuffer;
    void transformBuffer;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end
