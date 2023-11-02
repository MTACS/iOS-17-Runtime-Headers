
@interface XMattingSolver : NSObject {
    <MTLComputePipelineState> * _applySolverConstraintsKernel;
    <MTLTexture> * _bgErodedSegmentation;
    MPSImageThresholdBinaryInverse * _bgThresholdFilter;
    struct { 
        unsigned int internalWidth; 
        unsigned int internalHeight; 
        unsigned int radius; 
        unsigned int subsampling; 
        float epsilon; 
        unsigned int iterations; 
        bool useDepthFilter; 
        float fgThresholdValue; 
        float bgThresholdValue; 
        unsigned int erosionKernelSize; 
        unsigned int resolutionMode; 
    }  _config;
    <MTLDevice> * _device;
    MPSImageAreaMin * _erosionFilter;
    <MTLTexture> * _fgErodedSegmentation;
    MPSImageThresholdBinary * _fgThresholdFilter;
    <MTLLibrary> * _library;
    <MattingFilter> * _mattingFilter;
    <MTLComputePipelineState> * _solverConstraintsKernel;
    <MTLTexture> * _tmpSegmentation;
}

@property struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; unsigned int x6; bool x7; float x8; float x9; unsigned int x10; unsigned int x11; } config;

- (void).cxx_destruct;
- (int)_compileShadersWithLibrary:(id)arg1;
- (int)allocateResources:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; unsigned int x6; bool x7; float x8; float x9; unsigned int x10; unsigned int x11; })arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; unsigned int x6; bool x7; float x8; float x9; unsigned int x10; unsigned int x11; })config;
- (int)encodeApplySolverConstraintsOn:(id)arg1 constraints:(id)arg2 filteredSegmentation:(id)arg3 segmentation:(id)arg4;
- (int)encodeConstraintsOn:(id)arg1 segmentation:(id)arg2 constraints:(id)arg3;
- (int)enqueueSolveOn:(id)arg1 constraints:(id)arg2 colorGuide:(id)arg3 extraGuide:(id)arg4 inputTexture:(id)arg5 outputTexture:(id)arg6;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)releaseResources;
- (void)setConfig:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; unsigned int x6; bool x7; float x8; float x9; unsigned int x10; unsigned int x11; })arg1;

@end
