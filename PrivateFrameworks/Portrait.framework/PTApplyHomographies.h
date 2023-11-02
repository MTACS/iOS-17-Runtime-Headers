
@interface PTApplyHomographies : NSObject {
    PTColorConversion * _colorConversion;
    <MTLTexture> * _disparityVIS;
    unsigned int  _frameCounter;
    MTLRenderPassDescriptor * _homographyRenderPassDescriptor;
    <MTLBuffer> * _indexBufferHomography;
    unsigned long long  _indexCountHomography;
    void _inputColorSize;
    PTMetalContext * _metalContext;
    int  _numberOfColsOverscan;
    int  _numberOfRowsOverscan;
    <MTLRenderPipelineState> * _renderPipelineState;
    <MTLRenderPipelineState> * _renderPipelineStateDisparity;
    <MTLTexture> * _rgbaLinear;
    <MTLTexture> * _rgbaLinearVIS;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    <MTLSharedEvent> * _sharedEvent;
    MTLSharedEventListener * _sharedEventListener;
    bool  _showGrid;
    bool  _showVirtualCrop;
    <MTLTexture> * _textureMarker;
    <MTLBuffer> * _vertexBufferHomography;
    unsigned long long  _vertexCountHomography;
}

- (void).cxx_destruct;
- (void)_ensureSufficientBufferSizesNumberOfRows:(int)arg1 numberOfCols:(int)arg2;
- (id)initWithMetalContext:(id)arg1 colorSize:(struct CGSize { double x1; double x2; })arg2 disparitySize:(struct CGSize { double x1; double x2; })arg3;
- (id)updateDisparity:(id)arg1 inDisparity:(id)arg2;
- (id)updatePTTexture:(id)arg1 inPTTexture:(id)arg2;

@end
