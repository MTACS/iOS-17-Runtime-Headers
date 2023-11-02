
@interface JFXImageMTKView : MTKView <JFXImageViewRendering> {
    <MTLCommandQueue> * _commandQueue;
    bool  _enableDebugDrawing;
    bool  _flipX;
    bool  _flipY;
    JTImage * _jtImage;
    <MTLLibrary> * _library;
    <MTLTexture> * _mtlTexture_RGBA;
    <MTLTexture> * _mtlTexture_YUV_Chroma;
    <MTLTexture> * _mtlTexture_YUV_Luma;
    bool  _needsUpdateTexture;
    bool  _needsUpdateVertices;
    void * _pixelBufferColorAttachments;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: '"' using 'void*' */ void*position; 
        } vertices[4]; 
    }  _quad;
    <MTLRenderPipelineState> * _renderPipelineState;
    long long  _renderingType;
    <MTLSamplerState> * _sampler;
    struct __CVMetalTextureCache { } * _textureCache;
    MTKTextureLoader * _textureLoader;
    struct CGSize { 
        double width; 
        double height; 
    }  _textureSize;
    struct __CVBuffer { } * _texture_RGBA;
    struct __CVBuffer { } * _texture_YUV_Chroma;
    struct __CVBuffer { } * _texture_YUV_Luma;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableDebugDrawing;
@property (nonatomic) bool flipX;
@property (nonatomic) bool flipY;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) JTImage *jtImage;
@property (nonatomic, readonly) long long renderingType;
@property (readonly) Class superclass;

+ (id)buildRenderPipelineWithLabel:(id)arg1 vertexFunction:(id)arg2 fragmentFunction:(id)arg3 device:(id)arg4 view:(id)arg5 error:(id*)arg6;
+ (id)buildSamplerStateWithDevice:(id)arg1 addressMode:(unsigned long long)arg2 filter:(unsigned long long)arg3;

- (void).cxx_destruct;
- (void)JFXImageMTKView_commonInit;
- (void)cleanupTextureCache;
- (void)cleanupTextures;
- (void)configureRenderPipelineForColorAttachments:(void*)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)enableDebugDrawing;
- (bool)flipX;
- (bool)flipY;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2;
- (id)jtImage;
- (void)layoutSubviews;
- (long long)renderingType;
- (void)setContentMode:(long long)arg1;
- (void)setEnableDebugDrawing:(bool)arg1;
- (void)setFlipX:(bool)arg1;
- (void)setFlipY:(bool)arg1;
- (void)setJtImage:(id)arg1;
- (void)setRenderingType:(long long)arg1;
- (void)setupTextureCache;
- (void)updateDebugDrawing;
- (void)updateTexture;
- (void)updateVertices;

@end
