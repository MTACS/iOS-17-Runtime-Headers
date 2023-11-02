
@interface ADLKTOpticalFlow : NSObject {
    <MTLBuffer> * _Adiagb_buf;
    <MTLBuffer> * _Ixy_buf;
    <MTLComputePipelineState> * _computePipelines;
    <MTLDevice> * _device;
    unsigned long long  _maxThreadExecutionWidth;
    int  _nlreg_padding;
    int  _nlreg_radius;
    float  _nlreg_sigma_c;
    float  _nlreg_sigma_l;
    float  _nlreg_sigma_w;
    unsigned long long  _nscales;
    unsigned int  _nwarpings;
    struct CGSize { 
        double width; 
        double height; 
    }  _pyramid_size;
    int  _resX;
    int  _resY;
    bool  _useNonLocalRegularization;
    struct __CVBuffer {} * _uv_pxbuf;
    <MTLTexture> * _uv_tex;
    <MTLTexture> * _uv_u32_alias_tex;
    struct __CVBuffer { } * _w_pxbuf;
    <MTLTexture> * _w_tex;
}

+ (unsigned int)MaxScales;
+ (struct { unsigned long long x1; id x2; bool x3; int x4; int x5; float x6; float x7; float x8; })defaultConfig;
+ (struct CGSize { double x1; double x2; })getNextPyramidLevelSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (int)_computeFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_computeFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (bool)_createImagePyramidWithCommandBuffer:(id)arg1 inOutPyramidsArray:(id)arg2 error:(id*)arg3;
- (bool)_createImagePyramidWithCommandBuffer:(id)arg1 in_BGRATex:(id)arg2 outPyramidsArray:(id)arg3 error:(id*)arg4;
- (void)_doNLRegularizationWithCommandBuffer:(id)arg1 in_uv_tex:(id)arg2 join_tex:(id)arg3 w_tex:(id)arg4 out_uv_tex:(id)arg5;
- (int)_doSolverWithCommandBuffer:(void *)arg1 currentFeatures:(void *)arg2 currentDerivitive:(void *)arg3 previousFeatures:(void *)arg4 previousDerivitive:(void *)arg5 scale:(void *)arg6 coeff:(void *)arg7 in_uv_tex:(void *)arg8 out_uv_tex:(void *)arg9 out_w_tex:(void *)arg10; // needs 10 arg types, found 9: id, id, id, id, id, int, id, id, id
- (int)_downscale2XWithCommandBuffer:(void *)arg1 in_tex:(void *)arg2 out_tex:(void *)arg3 scaling_factor:(void *)arg4; // needs 4 arg types, found 3: id, id, id
- (bool)_setupBufferAndReturnErrorWithDevice:(id)arg1 error:(id*)arg2;
- (void)_setupPipelines;
- (void)_zeroFlowWithCommandBuffer:(id)arg1 uv_tex:(id)arg2;
- (void)dealloc;
- (long long)encodeOpticalFlowSolverToCommandBuffer:(id)arg1 currentFeaturesArray:(id)arg2 currentDerivitiveArray:(id)arg3 previousFeaturesArray:(id)arg4 previousDerivitiveArray:(id)arg5 currentPyramidsArray:(id)arg6 outShiftMap:(id)arg7;
- (long long)encodePyramidFeaturesToCommandBuffer:(id)arg1 colorTexture:(id)arg2 outPyramidsArray:(id)arg3 outFeaturesArray:(id)arg4 outDerivitiveArray:(id)arg5;
- (id)initWithDevice:(id)arg1 inputSize:(struct CGSize { double x1; double x2; })arg2 config:(struct { unsigned long long x1; id x2; bool x3; int x4; int x5; float x6; float x7; float x8; })arg3;
- (id)initWithDevice:(id)arg1 inputSize:(struct CGSize { double x1; double x2; })arg2 scales:(unsigned long long)arg3;
- (void)setPyramidSizes;

@end
