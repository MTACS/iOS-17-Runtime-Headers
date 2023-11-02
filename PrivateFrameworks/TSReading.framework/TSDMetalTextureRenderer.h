
@interface TSDMetalTextureRenderer : NSObject {
    TSDMetalShader * _blendingShader;
    NSArray * _dataBuffers;
    NSMutableArray * _drawValues;
    <TSDMTLDataBuffer> * _encodingDataBuffer;
    TSDMetalContext * _metalContext;
    double  _opacity;
    TSDMetalRenderTarget * _renderTarget;
    TSDMetalShader * _shader;
    bool  _shouldDrawOffscreenPass;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSArray * _textures;
}

@property (nonatomic, readonly) NSArray *dataBuffers;
@property (nonatomic) double opacity;
@property (nonatomic) bool shouldDrawOffscreenPass;
@property (nonatomic, retain) NSArray *textures;

- (void).cxx_destruct;
- (id)dataBuffers;
- (void)drawWithEncoder:(id)arg1 andContext:(id)arg2 atPercent:(double)arg3;
- (id)initWithTextures:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 context:(id)arg3;
- (double)opacity;
- (void)p_generateValuesAndBuffers;
- (void)p_setupBlendingShader;
- (void)p_setupOffscreenPass;
- (void)p_setupShader;
- (void)setOpacity:(double)arg1;
- (void)setShouldDrawOffscreenPass:(bool)arg1;
- (void)setTextures:(id)arg1;
- (bool)shouldDrawOffscreenPass;
- (id)textures;
- (void)updateWithTexture:(id)arg1 blendPercent:(double)arg2 outgoingTexture:(id)arg3 incomingTexture:(id)arg4;
- (void)updateWithTexture:(id)arg1 opacity:(double)arg2;
- (void)updateWithTexture:(id)arg1 transform:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2 opacity:(double)arg3 cullBackFace:(bool)arg4;

@end
