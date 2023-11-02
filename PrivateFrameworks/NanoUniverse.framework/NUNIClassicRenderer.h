
@interface NUNIClassicRenderer : NUNIRenderer {
    <MTLDevice> * _mtlDevice;
    struct NUNIClassicGeometryRange { 
        int start; 
        int count; 
    }  _octahedronGeomRange;
    struct NUNIClassicGeometryRange { 
        int start; 
        int count; 
    }  _quadGeomRange;
    NUNIClassicResourceManager * _resourceManager;
    struct NUNIClassicRendererResources { 
        <MTLRenderPipelineState> *pipelines[4]; 
        <MTLBuffer> *vertexBuffer; 
        <MTLBuffer> *indexBuffer; 
    }  _resources;
    struct NUNIClassicRendererState { 
        struct NUNIViewport { 
            int width; 
            int height; 
        } viewport; 
        unsigned long long projectionType; 
        unsigned long long collectionType; 
        float yearsSince1970; 
        float cameraRoll; 
        struct NUNIClassicGeometryRange { 
            int start; 
            int count; 
        } octGeomRange; 
        struct NUNIClassicGeometryRange { 
            int start; 
            int count; 
        } quadGeomRange; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*cameraPosition; 
    }  _state;
    NUNIClassicTextureGroup * _textureGroup;
}

@property (nonatomic, readonly) <MTLDevice> *mtlDevice;
@property (nonatomic, readonly) struct NUNIClassicRendererResources { id x1[4]; id x2; id x3; }*resources;
@property (nonatomic, readonly) NUNIClassicTextureGroup *textureGroup;

- (void).cxx_destruct;
- (void)_createPipelineForProgramType:(unsigned long long)arg1 fromLibrary:(id)arg2;
- (void)_initHemi;
- (void)_initPrograms;
- (void)_updateStateWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2;
- (void)bindAssetArt:(unsigned long long)arg1 renderEncoder:(id)arg2 toSlot:(unsigned long long)arg3;
- (void)dealloc;
- (void)discard;
- (void)draw3DWithEncoder:(id)arg1 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; float x4; float x5; struct NUNIClassicGeometryRange { int x_6_1_1; int x_6_1_2; } x6; struct NUNIClassicGeometryRange { int x_7_1_1; int x_7_1_2; } x7; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_8_1_1[4]; } x8; struct { void*x_9_1_1[4]; } x9; }*)arg2 spheroid:(id)arg3;
- (void)drawOffscreen3DWithCommandBuffer:(id)arg1 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; float x4; float x5; struct NUNIClassicGeometryRange { int x_6_1_1; int x_6_1_2; } x6; struct NUNIClassicGeometryRange { int x_7_1_1; int x_7_1_2; } x7; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_8_1_1[4]; } x8; struct { void*x_9_1_1[4]; } x9; }*)arg2 spheroid:(id)arg3;
- (void)drawSpriteWithEncoder:(id)arg1 state:(const struct NUNIClassicRendererState { struct NUNIViewport { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; float x4; float x5; struct NUNIClassicGeometryRange { int x_6_1_1; int x_6_1_2; } x6; struct NUNIClassicGeometryRange { int x_7_1_1; int x_7_1_2; } x7; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_8_1_1[4]; } x8; struct { void*x_9_1_1[4]; } x9; }*)arg2 spheroid:(id)arg3;
- (id)initWithPixelFormat:(unsigned long long)arg1 textureSuffix:(id)arg2 rendererStyle:(unsigned long long)arg3;
- (id)mtlDevice;
- (void)renderOffscreenWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3;
- (void)renderWithScene:(id)arg1 viewport:(struct NUNIViewport { int x1; int x2; })arg2 commandBuffer:(id)arg3 passDescriptor:(id)arg4;
- (struct NUNIClassicRendererResources { id x1[4]; id x2; id x3; }*)resources;
- (id)textureGroup;

@end
