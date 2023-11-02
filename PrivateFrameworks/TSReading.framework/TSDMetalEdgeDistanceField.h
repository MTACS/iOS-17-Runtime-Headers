
@interface TSDMetalEdgeDistanceField : NSObject {
    <MTLTexture> * _combineByteTexture;
    <MTLTexture> * _combineTexture;
    double  _downsampleScale;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    NSArray * _exteriorTextures;
    <MTLTexture> * _inputTexture;
    NSArray * _interiorTextures;
    TSDMetalContext * _metalContext;
    <MTLTexture> * _resultTexture;
    struct CGSize { 
        double width; 
        double height; 
    }  _resultTextureSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _squareSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _textureSize;
}

+ (void)didEndWithDevice:(id)arg1;
+ (id)distanceFieldTextureWithTexture:(id)arg1 textureSize:(struct CGSize { double x1; double x2; })arg2 maxDistance:(long long)arg3 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 downsampleScale:(double)arg5 floatTexture:(bool)arg6 makeCPUReadable:(bool)arg7 metalContext:(id)arg8 capabilities:(id)arg9;
+ (void)willBeginWithDevice:(id)arg1;

- (void).cxx_destruct;
- (id)initWithTexture:(id)arg1 textureSize:(struct CGSize { double x1; double x2; })arg2 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 downsampleScale:(double)arg4 metalContext:(id)arg5 capabilities:(id)arg6;
- (id)p_combinedTexturesWithIndex:(unsigned long long)arg1 floatTexture:(bool)arg2 commandBuffer:(id)arg3;
- (void)p_dispatchThreadgroupsWithEncoder:(id)arg1 pipelineState:(id)arg2 texture:(id)arg3;
- (unsigned long long)p_floodTextures:(id)arg1 currentIndex:(unsigned long long)arg2 maxDistance:(long long)arg3 commandBuffer:(id)arg4;
- (id)p_gradientTextureWithCommandBuffer:(id)arg1;
- (void)p_seedWithCommandBuffer:(id)arg1 fromTexture:(id)arg2 toTexture:(id)arg3 invertSeed:(bool)arg4;
- (void)p_setupTextures;
- (void)p_writeWithCommandBuffer:(id)arg1 intoSquareTexture:(id)arg2;

@end
