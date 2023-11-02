
@interface SCNMTLResourceManager : NSObject {
    struct __C3DEngineStats { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; double x35; double x36; double x37; double x38; double x39; unsigned int x40; unsigned int x41; unsigned int x42; unsigned int x43; unsigned int x44; unsigned int x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; unsigned int x51; unsigned int x52; unsigned int x53; unsigned int x54; unsigned int x55; unsigned int x56; double x57; unsigned int x58; double x59; unsigned int x60; double x61; double x62; double x63; double x64; double x65[60]; } * __engineStats;
    <MTLTexture> * _areaLightPrecomputedDataTexture;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableBuffers;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableColorMatchingComputePipelines;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableComputePipelines;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableComputePipelinesWithStageDescriptor;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableDeformerStacks;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableIESTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableImageProxy;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableImages;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableIrradianceTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableLightingSystemReflectionProbeTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMeshElements;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMeshSources;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMeshes;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableMorphDeformerReadOnlyBuffers;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableOpenSubdivComputeEvaluators;
    struct __CFDictionary { } * _availablePipelineStates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _availablePipelineStatesLock;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableRadianceTextures;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableRasterizerStates;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableSamplers;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableShadables;
    SCNMTLShadableKey * _availableShadablesSearchKey;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableSkinDeformerReadOnlyBuffers;
    NSMutableArray * _availableStageDescriptors;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableTessellators;
    struct { 
        NSMapTable *registry; 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _availableWireframeMaterials;
    SCNMTLShaderBindingsGenerator * _bindingsGenerator;
    <MTLCommandQueue> * _commandQueue;
    SCNMTLBufferAllocator * _commonProfileBuffersAllocator;
    <MTLTexture> * _defaultCubeTexture;
    <MTLTexture> * _defaultLightingEnvironmentIrradianceTexture;
    <MTLTexture> * _defaultLightingEnvironmentRadianceTexture;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFString {} *x4; struct __CFDictionary {} *x5; struct __CFSet {} *x6; void *x7; struct __CFDictionary {} *x8; void *x9; unsigned long long x10; unsigned int x11; } * _defaultProgram;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFString {} *x4; struct __CFDictionary {} *x5; struct __CFSet {} *x6; void *x7; struct __CFDictionary {} *x8; void *x9; unsigned long long x10; unsigned int x11; } * _defaultProgramForTessellation;
    <MTLTexture> * _defaultTexture;
    <MTLTexture> * _defaultTexture3D;
    <MTLDepthStencilState> * _depthAndStencilStateWithReadWriteDepthDisabled;
    <MTLDevice> * _device;
    struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFString {} *x4; struct __CFDictionary {} *x5; struct __CFSet {} *x6; void *x7; struct __CFDictionary {} *x8; void *x9; unsigned long long x10; unsigned int x11; } * _isolateProgram;
    SCNMTLLibraryManager * _libraryManager;
    MTKTextureLoader * _mtkTextureLoader;
    <MTLTexture> * _specularDFGDiffuseHammonTexture;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stageDescriptorsLock;
}

+ (void)_fillVertexDescriptor:(id)arg1 withMeshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; void *x_3_2_3; } x_1_1_3; long long x_1_1_4; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; unsigned int x_1_1_7 : 1; } x1; unsigned short x2; unsigned char x3; unsigned char x4; }*)arg2 semantic:(BOOL)arg3 inputSet:(long long)arg4 bufferIndex:(long long)arg5;
+ (void)_fillVertexDescriptor:(id)arg1 withSemantic:(BOOL)arg2 inputSet:(long long)arg3 bufferIndex:(long long)arg4 vertexFormat:(unsigned long long)arg5 offset:(unsigned long long)arg6 stride:(unsigned long long)arg7;
+ (void)unregisterManagerForDevice:(id)arg1;

- (void)__updateMutableMesh:(struct __C3DMesh { }*)arg1 withMetalMesh:(id)arg2;
- (void)_bakeSphericalHamonicsBasedIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 renderContext:(id)arg3 applySH:(id /* block */)arg4;
- (void)_bakeStochasticIrradianceTexture:(id)arg1 forEnvironmentTexture:(id)arg2 mipmapLevelForSampling:(unsigned long long)arg3 renderContext:(id)arg4;
- (id)_bufferForData:(struct __CFData { }*)arg1 bytesPerIndex:(unsigned long long)arg2;
- (id)_bufferForMTLBuffer:(void*)arg1;
- (id)_computePipelineStateForKernel:(id)arg1 constants:(id)arg2 constantsHash:(id)arg3 threadGroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg4;
- (void)_configureComputePipeline:(id)arg1 withDescriptor:(id)arg2;
- (bool)_copyImage:(struct __C3DImage { }*)arg1 toTexture:(id)arg2 desc:(id)arg3 textureOptions:(int)arg4 needsMipMapGeneration:(bool)arg5;
- (void)_createPipelineStateWithDescriptor:(id)arg1 desc:(struct { struct { struct __C3DFXMetalProgram {} *x_1_1_1; struct __C3DMaterial {} *x_1_1_2; struct __C3DGeometry {} *x_1_1_3; struct __C3DFXPass {} *x_1_1_4; struct __C3DFXPass {} *x_1_1_5; id x_1_1_6; struct __C3DBlendStates {} *x_1_1_7; struct __C3DNode {} *x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; id x_1_1_15; struct { unsigned char x_16_2_1; id /* block */ x_16_2_2; } x_1_1_16; unsigned long long x_1_1_17; } x1; id x2; struct { unsigned long long x_3_1_1[8]; unsigned long long x_3_1_2; unsigned long long x_3_1_3; unsigned char x_3_1_4; } x3; struct __C3DBlendStates {} *x4; unsigned long long x5[8]; unsigned char x6; id x7; id x8; id x9; id x10; id /* block */ x11; unsigned char x12; bool x13; bool x14; bool x15; })arg2 pipeline:(id)arg3;
- (void)_deformerStackDidChange:(id)arg1;
- (void)_deformerStackWillDie:(id)arg1;
- (void)_enqueueCopyFromTexture:(id)arg1 toTexture:(id)arg2 blitEncoder:(struct SCNMTLBlitCommandEncoder { id x1; id x2; }*)arg3 generateMipMaps:(bool)arg4;
- (void)_geometryWillDie:(id)arg1;
- (void)_imageProxyWillDie:(id)arg1;
- (void)_imageWillDie:(id)arg1;
- (void)_materialWillDie:(id)arg1;
- (void)_meshElementWillDie:(id)arg1;
- (void)_meshSourceWillDie:(id)arg1;
- (void)_meshWillDie:(id)arg1;
- (void)_morphWillDie:(id)arg1;
- (id)_newComputeDescriptorForPipelineDesc:(struct { id x1; id x2; id x3; id /* block */ x4; bool x5; bool x6; bool x7; })arg1 library:(id)arg2;
- (void)_passWillDie:(id)arg1;
- (void)_precomputedLightingEnvironmentWillDie:(id)arg1;
- (void)_programHashCodeWillDie:(id)arg1;
- (void)_programWillDie:(id)arg1;
- (void)_rasterizerStateDidDie:(const void*)arg1;
- (void)_removeMatchingProgram:(struct __C3DFXMetalProgram { struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_3_1; _Atomic unsigned long long x_1_3_2; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; struct __C3DScene {} *x_1_2_6; long long x_1_2_7; } x_1_1_1; int x_1_1_2; unsigned int x_1_1_3 : 1; unsigned int x_1_1_4 : 1; struct __C3DFXProgramDelegate {} *x_1_1_5; } x1; struct __CFString {} *x2[2]; struct __CFString {} *x3; struct __CFString {} *x4; struct __CFDictionary {} *x5; struct __CFSet {} *x6; void *x7; struct __CFDictionary {} *x8; void *x9; unsigned long long x10; unsigned int x11; }*)arg1 pass:(struct __C3DFXPass { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __CFString {} *x2; int x3; int x4; bool x5; struct __C3DFXTechnique {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; struct __CFString {} *x9; struct __CFString {} *x10; bool x11; struct __C3DFXProgram {} *x12; struct __C3DMaterial {} *x13; struct __C3DBlendStates {} *x14; struct __C3DRasterizerStates {} *x15; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_16_1_1; } x16; unsigned char x17; unsigned int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; }*)arg2;
- (void)_skinWillDie:(id)arg1;
- (id)_textureDescriptorFromImage:(struct __C3DImage { }*)arg1 needsMipMap:(bool)arg2 textureOptions:(int)arg3;
- (id)areaLightPrecomputedDataTexture;
- (void)colorMatchBiPlanarPixelBufferWithFormatType:(unsigned int)arg1 pixelBufferYCbCrMatrix:(id)arg2 pixelBufferColorPrimaries:(id)arg3 pixelBufferTransferFunction:(id)arg4 sourceTextureY:(id)arg5 sourceTextureCbCr:(id)arg6 sourceColorSpace:(struct CGColorSpace { }*)arg7 destinationColorSpace:(struct CGColorSpace { }*)arg8 destinationTexture:(id)arg9 renderContext:(id)arg10;
- (void)colorMatchSourceTexture:(id)arg1 sourceColorSpace:(struct CGColorSpace { }*)arg2 destinationColorSpace:(struct CGColorSpace { }*)arg3 destinationTexture:(id)arg4 renderContext:(id)arg5;
- (id)colorMatchingComputePipelineStateForBiPlanarPixelBufferWithFormatType:(unsigned int)arg1 pixelBufferYCbCrMatrix:(id)arg2 pixelBufferColorPrimaries:(id)arg3 pixelBufferTransferFunction:(id)arg4 sourceColorSpace:(struct CGColorSpace { }*)arg5 destinationColorSpace:(struct CGColorSpace { }*)arg6 renderContext:(id)arg7;
- (id)colorMatchingComputePipelineStateForSourceColorSpace:(struct CGColorSpace { }*)arg1 destinationColorSpace:(struct CGColorSpace { }*)arg2 renderContext:(id)arg3;
- (void)commandBufferDidCompleteWithError:(id)arg1;
- (id)computeEvaluatorWithContext:(struct MTLContext { id x1; id x2; id x3; id x4; }*)arg1 srcDesc:(const struct BufferDescriptor { int x1; int x2; int x3; }*)arg2 dstDesc:(const struct BufferDescriptor { int x1; int x2; int x3; }*)arg3 duDesc:(const struct BufferDescriptor { int x1; int x2; int x3; }*)arg4 dvDesc:(const struct BufferDescriptor { int x1; int x2; int x3; }*)arg5;
- (id)computePipelineStateForKernel:(id)arg1;
- (id)computePipelineStateForKernel:(id)arg1 constants:(id)arg2 constantsHash:(id)arg3;
- (id)computePipelineStateForKernel:(id)arg1 threadGroupSizeIsMultipleOfThreadExecutionWidth:(bool)arg2;
- (id)computePipelineStateForKernel:(id)arg1 withStageDescriptor:(id)arg2 stageDescriptorUpdateBlock:(id /* block */)arg3 constants:(id)arg4 constantsHash:(id)arg5;
- (id)copyTextureByConvertingToCubeMapIfApplicable:(id)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 needsMipmap:(bool)arg3;
- (void)dealloc;
- (id)defaultCubeTexture;
- (id)defaultLightingEnvironmentIrradianceTexture;
- (id)defaultLightingEnvironmentRadianceTexture;
- (struct __C3DFXMetalProgram { }*)defaultProgramUsingTessellation:(bool)arg1;
- (id)defaultTexture;
- (id)defaultTexture3D;
- (id)getUniqueStageDescriptor:(id)arg1;
- (bool)hasCommonProfilePrecompiledFunctions;
- (id)iesTextureForProfile:(id)arg1 renderContext:(id)arg2;
- (id)initWithDevice:(id)arg1;
- (id)irradianceTextureForEnvironmentTexture:(id)arg1 renderContext:(id)arg2 applySH:(id /* block */)arg3;
- (id)irradianceTextureForPrecomputedLightingEnvironment:(id)arg1;
- (id)latlongTextureForCubemap:(id)arg1 pixelFormat:(unsigned long long)arg2 renderContext:(id)arg3 needsMipmap:(bool)arg4;
- (id)newComputePipelineStateForDesc:(struct { id x1; id x2; id x3; id /* block */ x4; bool x5; bool x6; bool x7; })arg1 library:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 constantValues:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2;
- (id)newComputePipelineStateWithFunctionName:(id)arg1 library:(id)arg2 constantValues:(id)arg3;
- (id)newCubemapTextureForLatlongTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 engineContext:(struct __C3DEngineContext { }*)arg3 needsMipmap:(bool)arg4;
- (id)newRadianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 cpuAccessible:(bool)arg3 commandBuffer:(id)arg4;
- (id)newRenderPipelineStateWithDesc:(struct { struct { struct __C3DFXMetalProgram {} *x_1_1_1; struct __C3DMaterial {} *x_1_1_2; struct __C3DGeometry {} *x_1_1_3; struct __C3DFXPass {} *x_1_1_4; struct __C3DFXPass {} *x_1_1_5; id x_1_1_6; struct __C3DBlendStates {} *x_1_1_7; struct __C3DNode {} *x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned char x_1_1_13; unsigned char x_1_1_14; id x_1_1_15; struct { unsigned char x_16_2_1; id /* block */ x_16_2_2; } x_1_1_16; unsigned long long x_1_1_17; } x1; id x2; struct { unsigned long long x_3_1_1[8]; unsigned long long x_3_1_2; unsigned long long x_3_1_3; unsigned char x_3_1_4; } x3; struct __C3DBlendStates {} *x4; unsigned long long x5[8]; unsigned char x6; id x7; id x8; id x9; id x10; id /* block */ x11; unsigned char x12; bool x13; bool x14; bool x15; })arg1;
- (id)newTextureUsingMTKTextureLoaderWithData:(id)arg1 options:(id)arg2;
- (id)newTextureUsingMTKTextureLoaderWithURL:(id)arg1 options:(id)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)radianceTextureForEnvironmentTexture:(id)arg1 engineContext:(struct __C3DEngineContext { }*)arg2 commandBuffer:(id)arg3;
- (id)radianceTextureForPrecomputedLightingEnvironment:(id)arg1;
- (void)reloadPipelinesIfNeeded;
- (id)renderResourceForDeformerStack:(struct __C3DDeformerStack { }*)arg1 node:(struct __C3DNode { }*)arg2 dataKind:(unsigned char)arg3;
- (id)renderResourceForEffectSlot:(struct __C3DEffectSlot { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_2_1_1; } x2; void *x3; union { struct __C3DImage {} *x_4_1_1; void *x_4_1_2; struct __C3DImageProxy {} *x_4_1_3; struct __C3DTexture {} *x_4_1_4; void *x_4_1_5; } x4; unsigned int x5 : 8; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 4; BOOL x10; struct __C3DTextureSampler {} *x11; union { unsigned char x_12_1_1; /* Warning: Unrecognized filer type: '3' using 'void*' */ void*x_12_1_2; long doublex_12_1_3; void*x_12_1_4; void*x_12_1_5; void*x_12_1_6; const int x_12_1_7; void*x_12_1_8; void*x_12_1_9; void*x_12_1_10; void*x_12_1_11; } *x12; float x13; int x14; void *x15; }*)arg1 withEngineContext:(struct __C3DEngineContext { }*)arg2 didFallbackToDefaultTexture:(bool*)arg3;
- (id)renderResourceForImage:(struct __C3DImage { }*)arg1 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 options:(int)arg3 engineContext:(struct __C3DEngineContext { }*)arg4 didFallbackToDefaultTexture:(bool*)arg5;
- (id)renderResourceForImageProxy:(struct __C3DImageProxy { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct { int (*x_2_1_1)(); int (*x_2_1_2)(); int (*x_2_1_3)(); int (*x_2_1_4)(); } x2; void *x3; unsigned char x4; }*)arg1 sampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; int x3; int x4; int x5; int x6; int x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; int x11; unsigned long long x12; }*)arg2 engineContext:(struct __C3DEngineContext { }*)arg3 didFallbackToDefaultTexture:(bool*)arg4;
- (id)renderResourceForMorpher:(struct __C3DMorpher { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; _Atomic unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct __C3DGeometry {} *x2; struct __C3DMorph {} *x3; struct __C3DMesh {} *x4; unsigned int x5; unsigned int x6; float *x7; unsigned int x8; unsigned int x9; }*)arg1 baseMesh:(struct __C3DMesh { }*)arg2 dataKind:(unsigned char)arg3 provider:(id /* block */)arg4;
- (id)renderResourceForProgramDesc:(struct { struct __C3DFXMetalProgram {} *x1; struct __C3DMaterial {} *x2; struct __C3DGeometry {} *x3; struct __C3DFXPass {} *x4; struct __C3DFXPass {} *x5; id x6; struct __C3DBlendStates {} *x7; struct __C3DNode {} *x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; id x15; struct { unsigned char x_16_1_1; id /* block */ x_16_1_2; } x16; unsigned long long x17; })arg1 renderPassDescriptor:(id)arg2;
- (id)renderResourceForSkinner:(struct __C3DSkinner { }*)arg1 baseMesh:(struct __C3DMesh { }*)arg2 dataKind:(unsigned char)arg3 provider:(id /* block */)arg4;
- (id)shFromCPU:(id)arg1 commandBuffer:(id)arg2;
- (id)specularDFGDiffuseHammonTextureWithRenderContext:(id)arg1;
- (id)sphericalHarmonicsForEnvironmentTexture:(id)arg1 order:(unsigned long long)arg2 commandBuffer:(id)arg3;
- (id)unstageTexture:(id)arg1 commandBuffer:(id)arg2;

@end
