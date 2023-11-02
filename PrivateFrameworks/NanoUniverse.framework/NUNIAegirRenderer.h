
@interface NUNIAegirRenderer : NUNIRenderer {
    struct NUNIAegirRenderUniforms { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*sprite; 
    }  _baseUniforms;
    CALayer * _contentMaskLayer;
    IOSurface * _contentMaskSurfaces;
    <MTLTexture> * _contentMaskTextures;
    <MTLDevice> * _device;
    unsigned long long  _frame;
    NUNAegirOffscreen * _offscreenBlooms;
    NUNAegirOffscreen * _offscreenPosts;
    NUNAegirOffscreen * _offscreenScenes;
    struct NUNIAegirPipelineConstants { 
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
    }  _pipelineConstants;
    int  _renderUniformBuffersCounts;
    NSMutableArray * _renderUniformsBuffers;
    <NUNIRendererOptions> * _rendererOptions;
    unsigned int  _rendererOptionsChangeSequence;
    NUNIAegirResourceManager * _resourceManager;
    struct NUNIAegirRendererState { 
        struct NUNIViewport { 
            int width; 
            int height; 
        } viewport; 
        float cameraRoll; 
        float aspect; 
        float fovY; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*cameraOffset; 
    }  _state;
    bool  _supportsMTLGPUFamilyApple6;
    NUNIAegirTextureGroup * _textureGroup;
}

@property (nonatomic, retain) <NUNIRendererOptions> *rendererOptions;
@property (nonatomic, readonly) NUNIAegirResourceManager *resourceManager;

- (void).cxx_destruct;
- (void)_renderLocationDot:(id)arg1 uniPtr:(struct NUNIAegirRenderUniforms { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1; struct { void*x_2_1_1[4]; } x2; struct { void*x_3_1_1[4]; } x3; }*)arg2 viewport:(struct NUNIViewport { int x1; int x2; })arg3 renderEncoder:(id)arg4;
- (void)_renderOffscreenBackgroundWithRenderEncoder:(id)arg1 frameBufferIndex:(unsigned long long)arg2;
- (void)_renderOffscreenBloomWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 frameBufferIndex:(unsigned long long)arg4;
- (void)_renderOffscreenPostWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 frameBufferIndex:(unsigned long long)arg4;
- (void)_renderOffscreenSceneWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 frameBufferIndex:(unsigned long long)arg4 drawableTexture:(id)arg5;
- (void)_renderRaytraceSpheroid:(id)arg1 uniPtr:(struct NUNIAegirRenderUniforms { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1; struct { void*x_2_1_1[4]; } x2; struct { void*x_3_1_1[4]; } x3; }*)arg2 renderEncoder:(id)arg3;
- (void)_renderSpriteSpheroid:(id)arg1 uniPtr:(struct NUNIAegirRenderUniforms { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[3]; } x1; struct { void*x_2_1_1[4]; } x2; struct { void*x_3_1_1[4]; } x3; }*)arg2 renderEncoder:(id)arg3;
- (void)_updateBaseUniformsForViewport:(struct NUNIViewport { int x1; int x2; })arg1;
- (void)_updateStateWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2;
- (id)contentMaskLayer;
- (void)dealloc;
- (void)discard;
- (id)getOrCreateUniformBufferforFrameBufferIndex:(unsigned long long)arg1;
- (id)initWithPixelFormat:(unsigned long long)arg1 textureSuffix:(id)arg2 rendererStyle:(unsigned long long)arg3;
- (void)purgeUnusedWithScene:(id)arg1;
- (void)renderOffscreenWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3;
- (void)renderWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4;
- (id)rendererOptions;
- (id)resourceManager;
- (void)setContentMaskLayer:(id)arg1;
- (void)setRendererOptions:(id)arg1;

@end
