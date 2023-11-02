
@interface LKTSparseGPU : NSObject {
    struct __CVBuffer { } * _F0_dxdy_pxbuf;
    <MTLTexture> * _F0_dxdy_tex;
    struct __CVBuffer { } * _F0_pxbuf;
    <MTLTexture> * _F0_tex;
    struct __CVBuffer { } * _F1_dxdy_pxbuf;
    <MTLTexture> * _F1_dxdy_tex;
    struct __CVBuffer { } * _F1_pxbuf;
    <MTLTexture> * _F1_tex;
    <MTLTexture> * _I_tex;
    <MTLCommandQueue> * _commandQueue;
    <MTLComputePipelineState> * _computePipelines;
    <MTLBuffer> * _kptd_buf;
    unsigned long long  _maxThreadExecutionWidth;
    VisionCoreMetalContext * _mtlContext;
    int  _nscales;
    struct CGSize { 
        double width; 
        double height; 
    }  _ref_pyr_size;
    struct CGSize { 
        double width; 
        double height; 
    }  _ref_size;
    <MTLBuffer> * _status_buf;
    struct CGSize { 
        double width; 
        double height; 
    }  _tgt_pyr_size;
    struct CGSize { 
        double width; 
        double height; 
    }  _tgt_size;
}

@property (nonatomic, readonly) <MTLBuffer> *keypointsStatus;
@property (nonatomic, readonly) <MTLBuffer> *keypointsTarget;
@property (nonatomic, readonly) int nscales;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } ref_size;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } tgt_size;

- (void).cxx_destruct;
- (int)_enqueueFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_enqueueFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_enqueueImagePyramidWithCommandBuffer:(id)arg1 inputTexture:(id)arg2 index:(int)arg3;
- (int)_enqueueMatchingBidirectionalWithCommandBuffer:(id)arg1 in_f0_tex:(id)arg2 in_f1_tex:(id)arg3 in_f0_dxdy_tex:(id)arg4 in_f1_dxdy_tex:(id)arg5 in_kpts_buf:(id)arg6 in_kptd_buf:(id)arg7 out_kptd_buf:(id)arg8 out_status_buf:(id)arg9 bidirectional_error:(float)arg10 num_keypoints:(unsigned short)arg11 scale_kpts:(float)arg12 scale_kptd:(float)arg13;
- (int)_enqueueMatchingWithCommandBuffer:(id)arg1 in_f0_tex:(id)arg2 in_f1_tex:(id)arg3 in_f0_dxdy_tex:(id)arg4 in_kpts_buf:(id)arg5 in_kptd_buf:(id)arg6 out_kptd_buf:(id)arg7 out_status_buf:(id)arg8 num_keypoints:(unsigned short)arg9 scale_kpts:(float)arg10 scale_kptd:(float)arg11;
- (void)_initMemory:(int)arg1 height:(int)arg2 nscales:(int)arg3;
- (void)_setDefaultParameters;
- (int)_setupBuffer;
- (void)_setupPipelines;
- (int)computeMatchingBidirectionalFromReferenceTexture:(id)arg1 targetTexture:(id)arg2 kptsBuffer:(id)arg3 bidirectionalError:(float)arg4 numKeypoints:(unsigned short)arg5;
- (int)computeMatchingFromReferenceTexture:(id)arg1 targetTexture:(id)arg2 kptsBuffer:(id)arg3 numKeypoints:(unsigned short)arg4;
- (void)dealloc;
- (id)initWithMetalContext:(id)arg1 width:(int)arg2 height:(int)arg3 nscales:(int)arg4;
- (id)keypointsStatus;
- (id)keypointsTarget;
- (int)nscales;
- (struct CGSize { double x1; double x2; })ref_size;
- (struct CGSize { double x1; double x2; })tgt_size;
- (void)waitUntilCompleted;

@end
