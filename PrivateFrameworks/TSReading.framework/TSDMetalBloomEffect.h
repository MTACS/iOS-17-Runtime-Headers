
@interface TSDMetalBloomEffect : NSObject {
    TSDMetalShader * _bloomShader;
    struct CGSize { 
        double width; 
        double height; 
    }  _blurBufferSize;
    <TSDMTLDataBuffer> * _blurDataBuffer;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*TextureSize; 
    }  _blurFragmentUniforms;
    TSDMetalShader * _blurShader;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } MVPMatrix; 
    }  _blurVertexUniforms;
    <TSDMTLDataBuffer> * _dataBuffer;
    TSDMetalRenderTarget * _downSampleRenderTarget;
    struct CGSize { 
        double width; 
        double height; 
    }  _effectSize;
    TSDMetalShader * _fboTransferShader;
    TSDMetalRenderTarget * _horizontalBlurRenderTarget;
    TSDMetalRenderTarget * _verticalBlurRenderTarget;
}

- (void).cxx_destruct;
- (void)drawBloomEffectWithTexture:(id)arg1 metalContext:(id)arg2 encoder:(id)arg3 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg4 bloomAmount:(double)arg5;
- (id)initWithEffectSize:(struct CGSize { double x1; double x2; })arg1 blurScale:(double)arg2 metalContext:(id)arg3;
- (id)p_blurTextureWithTexture:(id)arg1 metalContext:(id)arg2 MVPMatrix:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg3;
- (void)p_setupBuffersWithMetalContext:(id)arg1;
- (void)p_setupShadersWithMetalContext:(id)arg1;
- (void)teardown;

@end
