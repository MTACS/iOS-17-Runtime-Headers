
@interface LKTFlowGPU : NSObject {
    <MTLBuffer> * _Adiagb_buf;
    <MTLTexture> * _C0_tex;
    <MTLTexture> * _C1_tex;
    <MTLTexture> * _G0_tex;
    <MTLTexture> * _G1_tex;
    <MTLTexture> * _I_tex;
    <MTLTexture> * _I_u32_alias_tex;
    <MTLBuffer> * _Ixy_buf;
    struct CGSize { 
        double width; 
        double height; 
    }  _aux_pyr_size;
    struct CGSize { 
        double width; 
        double height; 
    }  _aux_size;
    <MTLComputePipelineState> * _computePipelines;
    int  _current_frame_index;
    PTMTLDropHints * _dropHints;
    <MTLBuffer> * _idt_buf;
    bool  _indexUpdated;
    bool  _isBidirectional;
    bool  _isInverse;
    bool  _isValid;
    <MTLBuffer> * _kpt_buf;
    unsigned long long  _maxThreadExecutionWidth;
    PTMetalContext * _metalContext;
    bool  _needConversionBGRA2YUVA;
    int  _nlreg_padding;
    int  _nlreg_radius;
    float  _nlreg_sigma_c;
    float  _nlreg_sigma_l;
    float  _nlreg_sigma_w;
    int  _nscales;
    int  _nwarpings;
    struct CGSize { 
        double width; 
        double height; 
    }  _ref_pyr_size;
    struct CGSize { 
        double width; 
        double height; 
    }  _ref_size;
    int  _streamFrameCount;
    bool  _useNonLocalRegularization;
    <MTLTexture> * _uv_bwd_tex;
    <MTLTexture> * _uv_bwd_tex_user_ref;
    <MTLTexture> * _uv_bwd_u32_alias_tex;
    <MTLTexture> * _uv_fwd_tex;
    <MTLTexture> * _uv_fwd_tex_user_ref;
    <MTLTexture> * _uv_fwd_u32_alias_tex;
    <MTLTexture> * _w_tex;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } aux_size;
@property (nonatomic) bool isBidirectional;
@property (nonatomic) bool isInverse;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) <MTLBuffer> *keypoints;
@property (nonatomic) bool needConversionBGRA2YUVA;
@property (nonatomic) int nlreg_padding;
@property (nonatomic) int nlreg_radius;
@property (nonatomic) float nlreg_sigma_c;
@property (nonatomic) float nlreg_sigma_l;
@property (nonatomic) float nlreg_sigma_w;
@property (nonatomic, readonly) int nscales;
@property (nonatomic) int nwarpings;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } ref_size;
@property (nonatomic, readonly) int streamFrameCount;
@property (nonatomic) bool useNonLocalRegularization;

+ (void)_computeScalingFactor:(id)arg1 dst_tex:(id)arg2 scale_xy_inv:(/* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 coeff:(float*)arg4;

- (void).cxx_destruct;
- (int)_computeFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_computeFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_computeOpticalFlow:(id)arg1 computeFeatureI0:(bool)arg2 computeFeatureI1:(bool)arg3;
- (int)_computeOpticalFlowBidirectional:(id)arg1;
- (int)_createImagePyramidWithCommandBuffer:(id)arg1 in_tex:(id)arg2 I_idx:(int)arg3;
- (int)_doNLRegularizationWithCommandBuffer:(id)arg1 in_uv_tex:(id)arg2 join_tex:(id)arg3 w_tex:(id)arg4 out_uv_tex:(id)arg5;
- (int)_doSolverWithCommandBuffer:(id)arg1 scale:(int)arg2 in_uv_tex:(id)arg3 in_G0_tex:(id)arg4 in_G1_tex:(id)arg5 in_C0_tex:(id)arg6 in_C1_tex:(id)arg7 out_uv_tex:(id)arg8 out_w_tex:(id)arg9;
- (int)_downscale2XWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3;
- (int)_enqueueFlowConsistencyWithCommandBuffer:(id)arg1 in_uv0_tex:(id)arg2 in_uv1_tex:(id)arg3 out_uv_tex:(id)arg4;
- (int)_enqueueKeypointsFromFlowWithCommandBuffer:(id)arg1 in_uv_fwd_tex:(id)arg2 in_uv_bwd_tex:(id)arg3 out_kpt_buf:(id)arg4 block_size:(int)arg5 bidirectional_error:(float)arg6 out_num_keypoints:(unsigned short*)arg7;
- (void)_initMemory:(int)arg1 height:(int)arg2 nscales:(int)arg3;
- (void)_setDefaultParameters;
- (int)_setupBuffer;
- (int)_setupPipelines;
- (int)_zeroFlowWithCommandBuffer:(id)arg1 uv_tex:(id)arg2;
- (struct CGSize { double x1; double x2; })aux_size;
- (int)computeKeypointsFromTexForwardFlow:(id)arg1 backwardFlow:(id)arg2 bidirectionalError:(float)arg3 blockSize:(int)arg4 outNumKeypoints:(unsigned short*)arg5 commandBuffer:(id)arg6;
- (int)estimateFlowFromTexReference:(id)arg1 target:(id)arg2 commandBuffer:(id)arg3;
- (int)estimateFlowStreamTex:(id)arg1 commandBuffer:(id)arg2;
- (int)estimateFlowStreamTex:(id)arg1 index:(int)arg2 doOpticalFlow:(bool)arg3 commandBuffer:(id)arg4;
- (id)initWithMetalContext:(id)arg1 width:(int)arg2 height:(int)arg3 nscales:(int)arg4;
- (bool)isBidirectional;
- (bool)isInverse;
- (bool)isValid;
- (id)keypoints;
- (bool)needConversionBGRA2YUVA;
- (id)newBufferWithPixelFormat:(unsigned long long)arg1 width:(int)arg2 data:(const void*)arg3;
- (int)nlreg_padding;
- (int)nlreg_radius;
- (float)nlreg_sigma_c;
- (float)nlreg_sigma_l;
- (float)nlreg_sigma_w;
- (int)nscales;
- (int)nwarpings;
- (struct CGSize { double x1; double x2; })ref_size;
- (void)reset;
- (void)setIsBidirectional:(bool)arg1;
- (void)setIsInverse:(bool)arg1;
- (void)setNeedConversionBGRA2YUVA:(bool)arg1;
- (void)setNlreg_padding:(int)arg1;
- (void)setNlreg_radius:(int)arg1;
- (void)setNlreg_sigma_c:(float)arg1;
- (void)setNlreg_sigma_l:(float)arg1;
- (void)setNlreg_sigma_w:(float)arg1;
- (void)setNwarpings:(int)arg1;
- (int)setOutputTexUV:(id)arg1;
- (int)setOutputTexUVForward:(id)arg1 backward:(id)arg2;
- (void)setPreset:(long long)arg1;
- (void)setUseNonLocalRegularization:(bool)arg1;
- (int)streamFrameCount;
- (bool)useNonLocalRegularization;

@end
