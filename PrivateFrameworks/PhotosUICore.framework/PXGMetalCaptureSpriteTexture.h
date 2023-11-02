
@interface PXGMetalCaptureSpriteTexture : PXGPayloadTexture <PXGMetalSpriteTexture> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _captureRect;
    double  _drawingScale;
    long long  _renderPipelineIndex;
    const struct { float x1; float x2; float x3; } * _spriteGeometries;
    <MTLTexture> * _texture;
}

@property (nonatomic, readonly) float alpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } captureRect;
@property (nonatomic, readonly) <MTLTexture> *chromaTexture;
@property (nonatomic, readonly) PXGColorProgram *colorProgram;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double drawingScale;
@property (nonatomic, readonly) long long estimatedByteSize;
@property (nonatomic, readonly) bool hasSprites;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImage { }*imageRepresentation;
@property (nonatomic, readonly) bool isAtlas;
@property (nonatomic, readonly) bool isCaptureTexture;
@property (nonatomic, readonly) bool isDegraded;
@property (nonatomic, readonly) bool isOpaque;
@property (nonatomic, readonly, copy) PXGCaptureSpritePayload *payload;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic, readonly) unsigned char presentationType;
@property (nonatomic) long long renderPipelineIndex;
@property (nonatomic, readonly) int shaderFlags;
@property (nonatomic, readonly) unsigned int spriteCount;
@property (nonatomic) const struct { float x1; float x2; float x3; }*spriteGeometries;
@property (nonatomic, readonly) NSIndexSet *spriteIndexes;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MTLTexture> *texture;

- (void).cxx_destruct;
- (float)alpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })captureRect;
- (id)chromaTexture;
- (void)cleanupAfterRender:(long long)arg1;
- (id)colorProgram;
- (double)drawingScale;
- (void)getTextureInfos:(struct { float x1; }*)arg1 forSpriteIndexes:(unsigned int*)arg2 geometries:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; }*)arg3 spriteStyles:(const struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; }*)arg4 spriteInfos:(const struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (id)initWithPayload:(id)arg1 presentationType:(unsigned char)arg2;
- (bool)isAtlas;
- (bool)isCaptureTexture;
- (bool)isOpaque;
- (id)payload;
- (void)prepareForRender:(long long)arg1;
- (long long)renderPipelineIndex;
- (void)setCaptureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDrawingScale:(double)arg1;
- (void)setRenderPipelineIndex:(long long)arg1;
- (void)setSpriteGeometries:(const struct { float x1; float x2; float x3; }*)arg1;
- (void)setTexture:(id)arg1;
- (int)shaderFlags;
- (const struct { float x1; float x2; float x3; }*)spriteGeometries;
- (id)texture;

@end
