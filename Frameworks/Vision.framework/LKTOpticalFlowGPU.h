
@interface LKTOpticalFlowGPU : LKTOpticalFlow {
    <MTLBuffer> * _Adiagb_buf;
    struct __CVBuffer { } * _C0_pxbuf;
    <MTLTexture> * _C0_tex;
    struct __CVBuffer { } * _C1_pxbuf;
    <MTLTexture> * _C1_tex;
    struct __CVBuffer { } * _G0_pxbuf;
    <MTLTexture> * _G0_tex;
    struct __CVBuffer { } * _G1_pxbuf;
    <MTLTexture> * _G1_tex;
    <MTLTexture> * _I_tex;
    <MTLTexture> * _I_u32_alias_tex;
    <MTLBuffer> * _Ixy_buf;
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _computePipelines;
    int  _current_frame_index;
    unsigned long long  _maxThreadExecutionWidth;
    VNMetalContext * _mtlContext;
    struct CGSize { 
        double width; 
        double height; 
    }  _pyramid_size;
    struct __CVBuffer {} * _uv_pxbuf;
    <MTLTexture> * _uv_tex;
    <MTLTexture> * _uv_tex_user_ref;
    <MTLTexture> * _uv_u32_alias_tex;
    struct __CVBuffer { } * _w_pxbuf;
    <MTLTexture> * _w_tex;
}

- (void).cxx_destruct;
- (void)_computeFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (void)_computeFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (void)_computeOpticalFlow;
- (bool)_createImagePyramidWithCommandBuffer:(id)arg1 in_pixelbuf:(struct __CVBuffer { }*)arg2 I_idx:(int)arg3 error:(id*)arg4;
- (void)_doNLRegularizationWithCommandBuffer:(id)arg1 in_uv_tex:(id)arg2 join_tex:(id)arg3 w_tex:(id)arg4 out_uv_tex:(id)arg5;
- (void)_doSolverWithCommandBuffer:(void *)arg1 scale:(void *)arg2 scale_xy_inv:(void *)arg3 coeff:(void *)arg4 in_uv_tex:(void *)arg5 out_uv_tex:(void *)arg6 out_w_tex:(void *)arg7; // needs 7 arg types, found 5: id, int, id, id, id
- (void)_downscale2XWithCommandBuffer:(id)arg1 in_u32_alias_tex:(id)arg2 out_u32_alias_tex:(id)arg3;
- (void)_initMemory:(int)arg1 height:(int)arg2 numScales:(int)arg3;
- (bool)_setupBufferAndReturnError:(id*)arg1;
- (bool)_setupPipelinesReturnError:(id*)arg1;
- (void)_zeroFlowWithCommandBuffer:(id)arg1 uv_tex:(id)arg2;
- (void)dealloc;
- (bool)estimateFlowFromReference:(struct __CVBuffer { }*)arg1 target:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
- (bool)estimateFlowStream:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)initWithMetalContext:(id)arg1 width:(int)arg2 height:(int)arg3 numScales:(int)arg4 error:(id*)arg5;
- (bool)setOutputUV:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (void)waitUntilCompleted;

@end
