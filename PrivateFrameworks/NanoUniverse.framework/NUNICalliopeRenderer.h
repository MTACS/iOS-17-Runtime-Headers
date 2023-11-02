
@interface NUNICalliopeRenderer : NUNIRenderer {
    struct NUNICalliopeRenderUniforms { 
        struct NUNICalliopeRenderUniforms_vsh { 
            union { 
                /* Warning: Unrecognized filer type: '"' using 'void*' */ void*sprite; 
                BOOL {?=; 
            } ; 
            struct { 
                void*columns[4]; 
            } projectionViewModelMatrix; 
        } vsh; 
    }  _baseUniforms;
    struct { 
        <MTLTexture> *texture; 
        struct { 
            <MTLTexture> *texture; 
            struct { 
                unsigned long long width; 
                unsigned long long height; 
                unsigned long long depth; 
            } numThreadgroups; 
        } levels[16]; 
        unsigned long long numLevels; 
    }  _bloomChain;
    bool  _bloomDownsampleUsingTileShaders;
    bool  _bloomEnabled;
    CALayer * _contentMaskLayer;
    IOSurface * _contentMaskSurfaces;
    <MTLTexture> * _contentMaskTextures;
    <MTLDevice> * _device;
    struct NUNICalliopeRenderUniforms { 
        struct NUNICalliopeRenderUniforms_vsh { 
            union { 
                /* Warning: Unrecognized filer type: '"' using 'void*' */ void*sprite; 
                BOOL {?=; 
            } ; 
            struct { 
                void*columns[4]; 
            } projectionViewModelMatrix; 
        } vsh; 
    }  _dummyUniforms;
    unsigned long long  _frame;
    bool  _isPhone;
    NUNCalliopeOffscreen * _offscreenBloom;
    NUNCalliopeOffscreen * _offscreenPosts;
    NUNCalliopeOffscreen * _offscreenScenes;
    union NUNICalliopePipelineConstants { 
        struct { 
            /* Warning: Unrecognized filer type: ' ' using 'void*' */ void*bloomRadius; 
            void*bloomStrength; 
            void*bloomThreshold; 
            void*sunDistance; 
            void*sunEquatorialRadius; 
            void*sunGlowRadiusScale; 
            void*sunExpMin; 
            void*sunColorRed; 
            void*sunColorGreen; 
            void*sunColorBlue; 
            void*earthLightPower; 
            void*earthSpecularPower; 
            void*earthSpecularStrength; 
            void*earthSpecularBreakup; 
            void*earthSurfaceAmbientStrength; 
            void*earthIlluminationRed; 
            void*earthIlluminationGreen; 
            void*earthIlluminationBlue; 
            void*earthIlluminationStrength; 
            void*earthCloudShadowStrength; 
            void*earthCloudShadowEaseFrom; 
            void*earthCloudShadowEaseTo; 
            void*earthCloudAmbientStrength; 
            void*earthCloudAlpha; 
            void*earthAtmosphereRed; 
            void*earthAtmosphereGreen; 
            void*earthAtmosphereBlue; 
            void*earthAtmosphereStrength; 
            void*earthAtmosphereGlowExpMin; 
            void*earthAtmosphereTerminatorEaseFrom; 
            void*earthAtmosphereTerminatorEaseTo; 
            void*lunaLightPower; 
            void*lunaSpecularPower; 
            void*lunaSpecularStrength; 
            void*lunaSurfaceAmbientStrength; 
        } ; 
        void*values[35]; 
    }  _pipelineConstants;
    <MTLBuffer> * _renderUniformsBuffers;
    struct { 
        int current; 
        int capacity; 
    }  _renderUniformsBuffersCounts;
    <NUNIRendererOptions> * _rendererOptions;
    unsigned int  _rendererOptionsChangeSequence;
    NUNICalliopeResourceManager * _resourceManager;
    struct NUNICalliopeRendererState { 
        struct NUNIViewport { 
            int width; 
            int height; 
        } viewport; 
        float cameraRoll; 
        float aspect; 
        float fovY; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*cameraOffset; 
    }  _state;
    NUNICalliopeTextureGroup * _textureGroup;
    bool  _useLowerResolutionTextures;
}

@property (nonatomic, retain) <NUNIRendererOptions> *rendererOptions;
@property (nonatomic, readonly) NUNICalliopeResourceManager *resourceManager;

- (void).cxx_destruct;
- (void)_computeBloomChainTextures:(id)arg1;
- (unsigned long long)_computePatchSpheroidLodWithPositionInViewSpace:(void *)arg1 radius:(void *)arg2 drawableSize:(void *)arg3; // needs 3 arg types, found 2: const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**, float
- (id)_getOrCreateOffscreenBloomWithViewport:(struct NUNIViewport { int x1; int x2; })arg1;
- (void)_renderLocationDot:(const struct NUNISpheroidStructure { unsigned long long x1; float x2; float x3; float x4; float x5; struct { } x6; float x7; float x8; float x9; float x10; float x11; unsigned long long x12; unsigned long long x13; union { struct { float x_1_2_1; float x_1_2_2; } x_14_1_1; } x14; union { struct { float x_1_2_1; float x_1_2_2; } x_15_1_1; } x15; bool x16; bool x17; }*)arg1 scene:(const struct NUNISceneStructure { float x1; float x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; bool x7; float x8; union { struct { float x_1_2_1; float x_1_2_2; } x_9_1_1; } x9; float x10; float x11; float x12; float x13; }*)arg2 uniPtr:(struct NUNICalliopeRenderUniforms { struct NUNICalliopeRenderUniforms_vsh { union { struct { float x_1_3_1; } x_1_2_1; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_4_1[2]; } x_2_3_1; } x_1_2_2; struct NUNICalliopeRenderUniforms_fsh { float x_3_3_1; float x_3_3_2; float x_3_3_3; float x_3_3_4; float x_3_3_5; float x_3_3_6; float x_3_3_7; float x_3_3_8; float x_3_3_9; } x_1_2_3; void*x_1_2_4; } x_1_1_1; } x1; }*)arg3 viewport:(struct NUNIViewport { int x1; int x2; })arg4 renderEncoder:(id)arg5;
- (void)_renderOffscreenBackgroundWithRenderEncoder:(id)arg1 frameBufferIndex:(unsigned long long)arg2;
- (void)_renderOffscreenBloomTextureUsingTileShaderWithViewport:(struct NUNIViewport { int x1; int x2; })arg1 renderEncoder:(id)arg2;
- (void)_renderOffscreenBloomTextureWithViewport:(struct NUNIViewport { int x1; int x2; })arg1 sceneTexture:(id)arg2 commandBuffer:(id)arg3;
- (void)_renderOffscreenPostWithScene:(const struct NUNISceneStructure { float x1; float x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; bool x7; float x8; union { struct { float x_1_2_1; float x_1_2_2; } x_9_1_1; } x9; float x10; float x11; float x12; float x13; }*)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 frameBufferIndex:(unsigned long long)arg4;
- (void)_renderOffscreenSceneWithScene:(const struct NUNISceneStructure { float x1; float x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; bool x7; float x8; union { struct { float x_1_2_1; float x_1_2_2; } x_9_1_1; } x9; float x10; float x11; float x12; float x13; }*)arg1 spheroids:(id)arg2 viewport:(struct NUNIViewport { int x1; int x2; })arg3 commandBuffer:(id)arg4 frameBufferIndex:(unsigned long long)arg5 drawableTexture:(id)arg6;
- (void)_renderPatchSpheroid:(void *)arg1 frustumCullingState:(void *)arg2 drawableSize:(void *)arg3 frameBufferIndex:(void *)arg4 renderEncoder:(void *)arg5; // needs 5 arg types, found 4: const struct NUNISpheroidStructure { unsigned long long x1; float x2; float x3; float x4; float x5; struct { } x6; float x7; float x8; float x9; float x10; float x11; unsigned long long x12; unsigned long long x13; union { struct { float x_1_2_1; float x_1_2_2; } x_14_1_1; } x14; union { struct { float x_1_2_1; float x_1_2_2; } x_15_1_1; } x15; bool x16; bool x17; }*, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2][4]; void*x2; void*x3[5]; }*, unsigned long long, id
- (void)_renderSaturnRings:(void *)arg1 frameBufferIndex:(void *)arg2 renderEncoder:(void *)arg3 forwardAngle:(void *)arg4 position:(void *)arg5 isRotated:(void *)arg6 rotationMatrix:(void *)arg7 scale:(void *)arg8 equatorRotation:(void *)arg9; // needs 9 arg types, found 8: struct NUNICalliopeRenderUniforms { struct NUNICalliopeRenderUniforms_vsh { union { struct { float x_1_3_1; } x_1_2_1; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_4_1[2]; } x_2_3_1; } x_1_2_2; struct NUNICalliopeRenderUniforms_fsh { float x_3_3_1; float x_3_3_2; float x_3_3_3; float x_3_3_4; float x_3_3_5; float x_3_3_6; float x_3_3_7; float x_3_3_8; float x_3_3_9; } x_1_2_3; void*x_1_2_4; } x_1_1_1; } x1; }*, unsigned long long, id, float, bool, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, float, float
- (void)_renderSpriteSpheroid:(const struct NUNISpheroidStructure { unsigned long long x1; float x2; float x3; float x4; float x5; struct { } x6; float x7; float x8; float x9; float x10; float x11; unsigned long long x12; unsigned long long x13; union { struct { float x_1_2_1; float x_1_2_2; } x_14_1_1; } x14; union { struct { float x_1_2_1; float x_1_2_2; } x_15_1_1; } x15; bool x16; bool x17; }*)arg1 frameBufferIndex:(unsigned long long)arg2 renderEncoder:(id)arg3;
- (void)_renderSunSprite:(void *)arg1 frameBufferIndex:(void *)arg2 renderEncoder:(void *)arg3 position:(void *)arg4 scale:(void *)arg5 opacity:(void *)arg6; // needs 6 arg types, found 5: struct NUNICalliopeRenderUniforms { struct NUNICalliopeRenderUniforms_vsh { union { struct { float x_1_3_1; } x_1_2_1; struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_4_1[2]; } x_2_3_1; } x_1_2_2; struct NUNICalliopeRenderUniforms_fsh { float x_3_3_1; float x_3_3_2; float x_3_3_3; float x_3_3_4; float x_3_3_5; float x_3_3_6; float x_3_3_7; float x_3_3_8; float x_3_3_9; } x_1_2_3; void*x_1_2_4; } x_1_1_1; } x1; }*, unsigned long long, id, float, float
- (void)_setupBloomChainWithViewport:(struct NUNIViewport { int x1; int x2; })arg1 bloomTexture:(id)arg2;
- (void)_updateBaseUniformsForViewport:(struct NUNIViewport { int x1; int x2; })arg1;
- (void)_updateStateWithScene:(const struct NUNISceneStructure { float x1; float x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; bool x7; float x8; union { struct { float x_1_2_1; float x_1_2_2; } x_9_1_1; } x9; float x10; float x11; float x12; float x13; }*)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2;
- (void)_updateTextureLODsForPatchSpheroid:(void *)arg1 uvRate:(void *)arg2 drawableSize:(void *)arg3; // needs 3 arg types, found 2: unsigned long long, const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**
- (void)buildFrustumPlanep2p3;
- (int)classifyObjectBoundingBoxVersusFrustum:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 max:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 withState:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2][4]; void*x2; void*x3[5]; }*)arg3;
- (id)contentMaskLayer;
- (void)dealloc;
- (void)discard;
- (id)getUniformsBufferForFrameBufferIndex:(unsigned long long)arg1 pContents:(struct NUNICalliopeRenderUniforms {}**)arg2 pOffset:(unsigned long long*)arg3;
- (id)initWithPixelFormat:(unsigned long long)arg1 textureSuffix:(id)arg2 rendererStyle:(unsigned long long)arg3;
- (bool)isObjectBoundingBoxInsideOrIntersectingFrustum:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 max:(const /* Warning: Unrecognized filer type: '2' using 'void*' */ void**)arg2 withState:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2][4]; void*x2; void*x3[5]; }*)arg3;
- (void)prepareObjectSpaceFrustumWithTransform:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 withState:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2][4]; void*x2; void*x3[5]; }*)arg2;
- (void)prepareWorldSpaceFrustumWithTransform:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 withState:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2][4]; void*x2; void*x3[5]; }*)arg2;
- (void)purgeUnusedWithScene:(id)arg1;
- (void)renderOffscreenWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3;
- (void)renderWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4;
- (id)rendererOptions;
- (id)resourceManager;
- (void)setContentMaskLayer:(id)arg1;
- (void)setRendererOptions:(id)arg1;
- (id)spheroidAtPoint:(void *)arg1 scene:(void *)arg2 viewport:(void *)arg3; // needs 3 arg types, found 2: id, struct NUNIViewport { int x1; int x2; }

@end
