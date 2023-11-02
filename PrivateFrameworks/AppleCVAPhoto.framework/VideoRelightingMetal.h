
@interface VideoRelightingMetal : ImageSaverAndFileConfigRegistrator {
    <MTLTexture> * _alphaTexture;
    CIColor * _backgroundColor;
    CVAFilterMaskedVariableBlur * _blurPyramidForSkinFg;
    struct optional<float> { 
        bool m_initialized; 
        float m_storage; 
    }  _cheekAngle;
    struct optional<unsigned long> { 
        bool m_initialized; 
        unsigned long long m_storage; 
    }  _closestLeftCheekVertexID;
    CVAFilterColorAlphaToFgBg * _colorAlphaToFgBg;
    NSData * _colorCubeUserData;
    <MTLCommandQueue> * _commandQueue;
    <MTLTexture> * _countTexture;
    bool  _debugFace;
    bool  _debugFaceDraw;
    <MTLDepthStencilState> * _depthStencilState;
    <MTLDeviceSPI> * _device;
    <MTLTexture> * _dstTexture;
    <MTLTexture> * _dstUVTexture;
    void _face3DCenter;
    struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>> { 
        bool m_initialized; 
        struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_variance>>> { 
            union dummy_u { 
                BOOL data[64]; 
                struct a8 { } aligner_; 
            } dummy_; 
        } m_storage; 
    }  _faceConfidenceRollingVariance;
    bool  _faceDetected;
    bool  _faceDetectedReal;
    struct circular_buffer<bool, std::allocator<bool>> { 
        bool *m_buff; 
        bool *m_end; 
        bool *m_first; 
        bool *m_last; 
        unsigned long long m_size; 
    }  _faceDetectedRealHistory;
    NSData * _faceKitMeshTexcoords;
    struct vector<unsigned short, std::allocator<unsigned short>> { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _faceKitMeshTris;
    struct FaceKitStreamedData { 
        NSData *verticesPos; 
        NSArray *intrinsics; 
        NSArray *camR; 
        NSArray *camT; 
        NSArray *poseR; 
        NSArray *poseT; 
        NSData *landmarks; 
        float confidence; 
    }  _faceKitStreamedData;
    void _faceModelCenterProjected;
    struct optional<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>> { 
        bool m_initialized; 
        struct aligned_storage<boost::accumulators::accumulator_set<float, boost::accumulators::stats<boost::accumulators::tag::rolling_mean>>> { 
            union dummy_u { 
                BOOL data[56]; 
                struct a8 { } aligner_; 
            } dummy_; 
        } m_storage; 
    }  _faceRelightingAngleFactorsRollingMean;
    MTLRenderPassDescriptor * _faceRenderDesc1;
    MTLRenderPassDescriptor * _faceRenderDesc2;
    MTLRenderPassDescriptor * _faceRenderDesc3;
    <MTLTexture> * _facemaskRegionTexture;
    float  _focusDistance;
    long long  _frameIndex;
    long long  _frameIndexWhenFacekitAllowed;
    double  _gpuEndTime;
    double  _gpuStartTime;
    <MTLBuffer> * _indexBufferImmutable;
    unsigned long long  _indexOfCheekLandmark_bottomLeft;
    unsigned long long  _indexOfCheekLandmark_bottomRight;
    unsigned long long  _indexOfCheekLandmark_topLeft;
    unsigned long long  _indexOfCheekLandmark_topRight;
    NSObject<OS_dispatch_semaphore> * _inflightSemaphore;
    <MTLComputePipelineState> * _kernel_AlphaBlendRGBATextureArray;
    <MTLComputePipelineState> * _kernel_Count;
    <MTLComputePipelineState> * _kernel_CountVertical;
    <MTLRenderPipelineState> * _kernel_Face;
    <MTLComputePipelineState> * _kernel_Relight;
    <MTLComputePipelineState> * _kernel_Slide;
    <MTLLibrary> * _library;
    float  _lightMapsNearFarLerp;
    <MTLTexture> * _lightTexture;
    void * _metalContext;
    struct vector<FaceVertex, std::allocator<FaceVertex>> { 
        struct FaceVertex {} *__begin_; 
        struct FaceVertex {} *__end_; 
        struct __compressed_pair<FaceVertex *, std::allocator<FaceVertex>> { 
            struct FaceVertex {} *__value_; 
        } __end_cap_; 
    }  _modelVertices;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _modelViewMatrix;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _modelViewProjectionMatrix;
    <MTLPipelineLibrarySPI> * _pipelineLibrary;
    float  _portraitStyleStrength;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projectionMatrix;
    <CVAVideoPipelinePropertiesSPI> * _properties;
    float  _proxyToFaceEffectLerpFinal;
    float  _proxyToFaceEffectLerpTemporal;
    float  _relightingStability;
    <MTLTexture> * _rgbTransformMapContourFarTexture;
    <MTLTexture> * _rgbTransformMapContourNearTexture;
    <MTLTexture> * _rgbTransformMapCurrentFarTexturePtr;
    <MTLTexture> * _rgbTransformMapCurrentNearTexturePtr;
    <MTLTexture> * _rgbTransformMapCurrentTextureInterpolated;
    <MTLTexture> * _rgbTransformMapStudioFarTexture;
    <MTLTexture> * _rgbTransformMapStudioNearTexture;
    <MTLTexture> * _rgbTransformMapTextureSelectedPtr;
    <MTLTexture> * _slideTexture;
    <MTLTexture> * _srcTexture;
    NSObject<OS_dispatch_queue> * _synchronousRelightingCallbackQueue;
    <MTLTexture> * _tcDepthTexture;
    <MTLRenderPipelineState> * _tcKernel;
    struct TC_MatrixUniforms { 
        struct float4x4 { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } modelViewProjectionMatrix; 
    }  _tcMatrixUniformsBuffer;
    MTLRenderPassDescriptor * _tcRenderDesc;
    <MTLTexture> * _tcTexture;
    <MTLTexture> * _texColorCubeStaticArray;
    <MTLTexture> * _texColorCubeUserData;
    <MTLTexture> * _texSelectedColorCube;
    <MTLTexture> * _texSkinRGBAPyramid;
    <MTLTexture> * _texSkinSegmentationAlias;
    <MTLTexture> * _texStub;
    bool  _trustAlpha;
    struct RelightUniforms { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*outSizeInv; 
    }  _uniformBuffer_relight;
    struct SlideUniforms { 
        float center_x; 
        float center_y; 
    }  _uniformBuffer_slide;
    <MTLTexture> * _vertCountTexture;
    CVAPhotoMTLRingBuffer * _vertexBuffer;
    float  _vignettingScale;
}

@property (readonly) double gpuEndTime;
@property (readonly) double gpuStartTime;
@property (readonly) float relightingStability;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureRenderPipeline;
- (id)create3DTextureWithSize:(unsigned long long)arg1;
- (void)createTexturesWith:(unsigned long long)arg1 imgHeight:(unsigned long long)arg2;
- (void)encodeAlphaBlendRGBATextureArrayToCommandBuffer:(id)arg1 inTexFirst:(id)arg2 inTexSecond:(id)arg3 outTex:(id)arg4 alpha:(const float*)arg5;
- (void)encodeCountKernelToCommandBuffer:(id)arg1;
- (void)encodeLerpNearFarMapsToCommandBuffer:(id)arg1;
- (void)encodeRelightKernelToCommandBuffer:(id)arg1;
- (void)encodeSlideKernelToCommandBuffer:(id)arg1;
- (void)encodeTCKernelToCommandBuffer:(id)arg1;
- (void)encodeVertCountKernelToCommandBuffer:(id)arg1;
- (void)generateModelNormals;
- (id)getInternalColorCube:(int)arg1;
- (double)gpuEndTime;
- (double)gpuStartTime;
- (void)initCommon;
- (void)initKernelFunctions;
- (id)initWithMetalContext:(void*)arg1;
- (id)loadCube:(id)arg1;
- (void)loadRGBTransformMapsForEffectVersion:(bool)arg1;
- (void)loadRGBTransformMapsOnceTo:(id*)arg1 namePrefix:(const void*)arg2 forIntermediateResults:(bool)arg3;
- (float)relightingStability;
- (void)renderWithSrcImage:(struct __CVBuffer { }*)arg1 srcAlpha:(struct __CVBuffer { }*)arg2 trustAlpha:(bool)arg3 yuvSourceDownsampled:(id)arg4 skinSegmentation:(struct __CVBuffer { }*)arg5 dstImage:(struct __CVBuffer { }*)arg6 faceKitProcessOutput:(id)arg7 portraitStyleStrength:(float)arg8 colorSim:(id)arg9 disparity:(id)arg10 focusDistance:(float)arg11 singleCubeData:(id)arg12 properties:(id)arg13 callbackQueue:(id)arg14 callback:(id /* block */)arg15;
- (void)saveTexture:(id)arg1 toImage:(id)arg2;
- (void)setModelVertices;
- (void)updateFaceKitStreamedDataFromProcessOutput:(id)arg1;
- (void)updateMatrixWithWidth:(int)arg1 height:(int)arg2 camera:(const void*)arg3 pose:(const void*)arg4;
- (void)updateModelAndPose:(void*)arg1 camera:(void*)arg2;
- (void)updateUniforms:(bool)arg1;

@end
