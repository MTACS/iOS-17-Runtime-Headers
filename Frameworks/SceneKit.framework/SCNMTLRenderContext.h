
@interface SCNMTLRenderContext : NSObject <SCNBufferStream> {
    struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; double x57; unsigned int x58; double x59; unsigned int x60; double x61; double x62; double x63; double x64; double x65[60]; } * __engineStats;
    struct __C3DFXMetalProgram {} * _background2DProgram;
    struct __C3DFXMetalProgram {} * _backgroundCubeProgram;
    struct __C3DRasterizerStates { } * _backgroundRasterizerStates;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFString {} *x4; struct __CFDictionary {} *x5; struct __CFSet {} *x6; void *x7; struct __CFDictionary {} *x8; void *x9; unsigned long long x10; unsigned int x11; } * _backgroundVideoAlpha0Program;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFString {} *x4; struct __CFDictionary {} *x5; struct __CFSet {} *x6; void *x7; struct __CFDictionary {} *x8; void *x9; unsigned long long x10; unsigned int x11; } * _backgroundVideoProgram;
    NSMutableArray * _bufferPool;
    struct Cache { 
        struct __C3DRasterizerStates {} *rasterizerStates; 
        struct __C3DMesh {} *mesh; 
        SCNMTLMesh *metalMesh; 
        struct __C3DMeshElement {} *meshElement; 
        SCNMTLMeshElement *metalMeshElement; 
        struct __C3DFXMetalProgram {} *program; 
        struct __C3DMaterial {} *material; 
        struct __C3DGeometry {} *geometry; 
        SCNMTLShadable *metalShadable; 
        struct __C3DEffectCommonProfile {} *commonProfile; 
        struct __C3DBlendStates {} *blendStates; 
        unsigned char colorBufferWriteMask; 
        unsigned char primitiveTopologyClass; 
        struct __C3DNode {} *node; 
        unsigned long long vertexDescriptorHash; 
        unsigned char tessellationPipelineStateHash; 
        SCNMTLRenderPipeline *renderPipeline; 
    }  _cache;
    <MTLCommandBuffer> * _clientCommandBuffer;
    <MTLCommandQueue> * _clientCommandQueue;
    <MTLRenderCommandEncoder> * _clientRenderCommandEncoder;
    MTLRenderPassDescriptor * _clientRenderPassDescriptor;
    id  _commandBufferCompletedHandlers;
    id  _commandBufferScheduledHandlers;
    <SCNMTLRenderContextCommandBufferStatusMonitor> * _commandBufferStatusMonitor;
    struct { 
        bool collectEnabled; 
        NSMutableDictionary *errors; 
    }  _compilationIssues;
    struct { 
        unsigned long long hash; 
        SCNMTLRenderPipeline *pipeline; 
    }  _compositeRendering;
    struct SCNMTLBufferPool {} * _constantBufferPools;
    double  _contentScaleFactor;
    struct { 
        unsigned int modelTransformBindingCount; 
        unsigned int modelViewTransformBindingCount; 
        unsigned int normalTransformBindingCount; 
        unsigned int nodeOpacityBindingCount; 
    }  _counters;
    <MTLCommandBuffer> * _currentCommandBuffer;
    long long  _currentFrameIndex;
    MTLRenderPassDescriptor * _currentRenderPassDescriptor;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _currentStreamBufferIndices;
    struct { 
        unsigned long long pixelFormat; 
        unsigned long long sampleCount; 
        SCNMTLRenderPipeline *displayCubemapPipeline; 
        SCNMTLRenderPipeline *displayTexture2DPipeline; 
        SCNMTLRenderPipeline *displayDepth2DPipeline; 
        SCNMTLRenderPipeline *displayDepthCubePipeline; 
    }  _debug;
    unsigned long long  _debugOptions;
    <MTLDepthStencilState> * _defaultDepthStencilState;
    <MTLSamplerState> * _defaultSamplerState;
    <MTLDevice> * _device;
    unsigned int  _disableLinearRendering;
    SCNMTLRenderPipeline * _downSamplePipeline;
    <CAMetalDrawable> * _drawable;
    id  _drawablePresentedHandlers;
    unsigned int  _enableARMode;
    struct __C3DEngineContext { } * _engineContext;
    unsigned int  _features;
    unsigned int  _forceAsyncShaderCompilation;
    void * _frameConstantBufferPool;
    void * _frameTexturePool;
    struct SCNSceneBuffer { 
        struct float4x4 { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } viewTransform; 
        struct float4x4 { 
            void*columns[4]; 
        } projectionTransform; 
        struct float4x4 { 
            void*columns[4]; 
        } viewToCubeTransform; 
        void*ambientLightingColor; 
    }  _frameUniforms;
    void * _frameVolatileBufferPool;
    NSMutableArray * _freeVolatileMeshElements;
    NSString * _generatedTexturePath;
    NSObject<OS_dispatch_semaphore> * _inFlightSemaphore;
    double  _initialTime;
    unsigned int  _isOpaque;
    bool  _isValidationEnabled;
    CAMetalLayer * _layerTarget;
    struct { 
        struct { 
            unsigned char lights[8]; 
        } currentLightingSet; 
        <MTLTexture> *currentShadowMaps[8]; 
        <MTLTexture> *currentGoboMaps[8]; 
        struct unordered_map<unsigned long long, SCNMTLLightSetData, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, SCNMTLLightSetData>>> { 
            struct __hash_table<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, SCNMTLLightSetData>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } frameLightingSetDatas; 
        unsigned long long currentLightingHashKey; 
        struct { 
            long long count; 
            struct __C3DLight {} *lights[8]; 
            struct __C3DLightRuntimeData {} *lightsData[8]; 
        } currentLightingDesc; 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } currentLightingSpace; 
        bool needLightingSpaceTransformation; 
        struct SCNMTLClusterSystem { 
            void*clustersCount; 
        } clusterSystem; 
    }  _lighting;
    struct { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
        unsigned long long size; 
        <MTLTexture> *shadowMaps[256]; 
        <MTLTexture> *textureMaps[256]; 
        <MTLSamplerState> *samplerStates[256]; 
    }  _lightsData;
    bool  _needSuperSampling;
    struct { 
        struct float4x4 { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } modelTransform; 
        struct float4x4 { 
            void*columns[4]; 
            struct float4x4 { 
                void*columns[4]; 
                struct float4x4 { 
                    void*columns[4]; 
                    struct float2x3 { 
                        void*columns[2]; 
                    } boundingBox; 
                    struct __C3DNode {} *instanceNode; 
                    unsigned int flags; 
                    unsigned int *probeCacheIndex; 
                } modelViewProjectionTransforms[6]; 
            } modelViewTransforms[6]; 
        } normalTransforms[6]; 
    }  _nodeUniforms;
    MTLRenderPassDescriptor * _originalRenderPassDescriptor;
    <MTLCommandQueue> * _ownedCommandQueue;
    struct atomic<int> { 
        struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { 
            _Atomic int __a_value; 
        } __a_; 
    }  _pendingGPUFrameCount;
    struct { 
        struct __C3DFXPassInstance {} *passInstance; 
        struct __C3DLightingSystem {} *lightingSystem; 
        struct __C3DDynamicBatchingSystem {} *dynamicBatchingSystem; 
        struct __C3DFXPass {} *pass; 
        void *renderGraphPass; 
        bool passRequiresLighting; 
        struct __C3DTransformTree {} *transformTree; 
    }  _processingContext;
    int  _profile;
    struct SCNMTLRenderCommandEncoder { bool x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; bool x7; bool x8; bool x9; unsigned int x10; unsigned int x11; unsigned char x12; bool x13; bool x14; struct { id x_15_1_1; unsigned long long x_15_1_2; } x15[31]; id x16[128]; id x17[16]; struct { id x_18_1_1; unsigned long long x_18_1_2; } x18[31]; id x19[128]; id x20[16]; id x21; id x22; id x23; struct SCNMTLBufferPool {} *x24; unsigned long long x25[2]; unsigned long long x26[2]; } * _renderEncoder;
    struct { 
        unsigned long long passHash; 
        struct __C3DMaterial {} *material; 
    }  _renderGraph;
    struct { 
        unsigned char renderSliceIndex; 
        unsigned char eyeCount; 
        unsigned char renderMode; 
        unsigned char multiVertexOutputStreamGenerator; 
        bool isMainPass; 
        bool isFinalTechnique; 
    }  _renderPassParameters;
    void _renderSize;
    struct SCNMTLBlitCommandEncoder { 
        <MTLBlitCommandEncoder> *_encoder; 
        <MTLCommandBuffer> *_commandBuffer; 
    }  _resourceBlitEncoder;
    <MTLCommandBuffer> * _resourceCommandBuffer;
    struct SCNMTLComputeCommandEncoder { 
        <MTLBuffer> *_buffers[31]; 
        unsigned long long _offsets[31]; 
        <MTLTexture> *_textures[128]; 
        <MTLSamplerState> *_samplers[16]; 
        <MTLComputePipelineState> *_computePipelineState; 
        <MTLComputeCommandEncoder> *_encoder; 
        <MTLCommandBuffer> *_commandBuffer; 
        struct SCNMTLBufferPool {} *_bufferPool; 
        unsigned int _features; 
        unsigned long long _texturesToBind[2]; 
        unsigned long long _buffersToBind[1]; 
    }  _resourceComputeEncoder;
    NSObject<OS_dispatch_group> * _resourceGroup;
    SCNMTLResourceManager * _resourceManager;
    <SCNMTLRenderContextResourceManagerMonitor> * _resourceManagerMonitor;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    unsigned int  _reverseZ;
    long long  _sampleCount;
    struct { 
        <MTLBuffer> *buffer; 
        unsigned long long offset; 
    }  _sceneUniforms;
    struct SCNMatrix4 { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    }  _screenTransform;
    unsigned int  _seed;
    <MTLBuffer> * _shadowKernelBuffer;
    unsigned int  _shouldDelegateARCompositing;
    bool  _shouldPresentAfterMinimumDuration;
    bool  _shouldPresentWithTransaction;
    bool  _showsAuthoringEnvironment;
    struct { 
        <MTLTexture> *backgroundTexture; 
        <MTLTexture> *overlayTexture; 
        <MTLTexture> *stencilDepthTexture; 
    }  _skCompositing;
    double  _superSamplingFactor;
    float  _targetedFrameInterval;
    <MTLTexture> * _textureTarget;
    unsigned int  _useFunctionConstants;
    NSMutableArray * _usedVolatileMeshElements;
    struct SCNMTLBufferPool {} * _volatileBufferPools;
    NSMutableArray * _volatileMeshes;
    unsigned int  _wantsWideGamut;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearUnusedBindingPoints;
- (void)_createResourceCommandBufferIfNeeded;
- (void)_drawPBRTextures;
- (void)_drawShadowMaps;
- (void)_executeDrawCommand:(struct { struct __C3DFXMetalProgram {} *x1; struct __C3DMaterial {} *x2; struct __C3DGeometry {} *x3; struct __C3DNode {} *x4; struct __C3DMesh {} *x5; struct __C3DMeshElement {} *x6; struct { unsigned char x_7_1_1[8]; } x7; struct __C3DFXPass {} *x8; unsigned int *x9; bool x10; bool x11; bool x12; bool x13; bool x14; unsigned int x15 : 3; })arg1;
- (void)_logLightingInformation;
- (id)_newMTLBufferFromPoolWithLength:(unsigned long long)arg1;
- (void)_prepareMaterialTextures:(struct __C3DMaterial { }*)arg1;
- (void)_recycleMTLBufferToPool:(id)arg1;
- (void)_reduceStatsOfConstantBuffer:(id)arg1;
- (void)_updateProjectionMatrixForOrthographicSkyboxRenderingIfNeeded:(union C3DMatrix4x4 { float x1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x2[4]; void*x3; }*)arg1;
- (float)_zFarForSkyboxRenderingProjectionMatrix:(const union C3DMatrix4x4 { float x1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x2[4]; void*x3; }*)arg1 defaultZFar:(float)arg2;
- (id)buffer:(int)arg1 :(id)arg2 :(long long*)arg3 :(long long*)arg4;
- (unsigned long long)colorPixelFormatAtIndex:(long long)arg1;
- (const char *)constantData:(int)arg1;
- (bool)constantOffsetAndSize:(int)arg1 :(id)arg2 :(long long*)arg3 :(long long*)arg4;
- (void)dealloc;
- (unsigned long long)depthStencilPixelFormat;
- (void)resetVolatileMeshElements;
- (void)resetVolatileMeshes;
- (id)sampler:(int)arg1 :(id)arg2;
- (id)texture:(int)arg1 :(id)arg2;
- (void)viewports:(const void**)arg1 :(long long*)arg2;
- (bool)vrrEnabled;
- (void)writeBytes:(const void*)arg1 length:(unsigned long long)arg2;

@end
