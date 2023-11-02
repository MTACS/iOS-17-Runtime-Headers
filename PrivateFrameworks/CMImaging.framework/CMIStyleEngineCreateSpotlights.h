
@interface CMIStyleEngineCreateSpotlights : NSObject <CMIStyleEngineProcessingStage> {
    <MTLComputePipelineState> * _createSpotlightsComputePipelineState;
    void _inputImageSize;
    <MTLTexture> * _outputSpotlightTextureBottomEdge;
    <MTLTexture> * _outputSpotlightTextureBottomLeft;
    <MTLTexture> * _outputSpotlightTextureBottomRight;
    <MTLTexture> * _outputSpotlightTextureCentral;
    <MTLTexture> * _outputSpotlightTextureLeftEdge;
    <MTLTexture> * _outputSpotlightTextureRightEdge;
    <MTLTexture> * _outputSpotlightTextureTopEdge;
    <MTLTexture> * _outputSpotlightTextureTopLeft;
    <MTLTexture> * _outputSpotlightTextureTopRight;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*spotlightCount; 
    }  _params;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) void inputImageSize;
@property (nonatomic, retain) <MTLTexture> *outputSpotlightTextureBottomEdge;
@property (nonatomic, retain) <MTLTexture> *outputSpotlightTextureBottomLeft;
@property (nonatomic, retain) <MTLTexture> *outputSpotlightTextureBottomRight;
@property (nonatomic, retain) <MTLTexture> *outputSpotlightTextureCentral;
@property (nonatomic, retain) <MTLTexture> *outputSpotlightTextureLeftEdge;
@property (nonatomic, retain) <MTLTexture> *outputSpotlightTextureRightEdge;
@property (nonatomic, retain) <MTLTexture> *outputSpotlightTextureTopEdge;
@property (nonatomic, retain) <MTLTexture> *outputSpotlightTextureTopLeft;
@property (nonatomic, retain) <MTLTexture> *outputSpotlightTextureTopRight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_compileShaders:(id)arg1;
- (int)enqueueToCommandBuffer:(id)arg1;
- (id)initWithMetalContext:(void *)arg1 spotlightCount:(void *)arg2; // needs 2 arg types, found 1: id
- (void)inputImageSize;
- (id)outputSpotlightTextureBottomEdge;
- (id)outputSpotlightTextureBottomLeft;
- (id)outputSpotlightTextureBottomRight;
- (id)outputSpotlightTextureCentral;
- (id)outputSpotlightTextureLeftEdge;
- (id)outputSpotlightTextureRightEdge;
- (id)outputSpotlightTextureTopEdge;
- (id)outputSpotlightTextureTopLeft;
- (id)outputSpotlightTextureTopRight;
- (void)setInputImageSize;
- (void)setOutputSpotlightTextureBottomEdge:(id)arg1;
- (void)setOutputSpotlightTextureBottomLeft:(id)arg1;
- (void)setOutputSpotlightTextureBottomRight:(id)arg1;
- (void)setOutputSpotlightTextureCentral:(id)arg1;
- (void)setOutputSpotlightTextureLeftEdge:(id)arg1;
- (void)setOutputSpotlightTextureRightEdge:(id)arg1;
- (void)setOutputSpotlightTextureTopEdge:(id)arg1;
- (void)setOutputSpotlightTextureTopLeft:(id)arg1;
- (void)setOutputSpotlightTextureTopRight:(id)arg1;

@end
