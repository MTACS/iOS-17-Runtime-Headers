
@interface ColorTemperatureSpectrumRenderer : NSObject <MTKViewDelegate> {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    unsigned short  _endColor;
    <MTLBuffer> * _fragmentShaderArgumentBuffer;
    MTKView * _metalView;
    <MTLRenderPipelineState> * _pipelineState;
    unsigned short  _startColor;
    <MTLBuffer> * _vertexBuffer;
}

@property (nonatomic, retain) <MTLCommandQueue> *commandQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic) unsigned short endColor;
@property (nonatomic, retain) <MTLBuffer> *fragmentShaderArgumentBuffer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTKView *metalView;
@property (nonatomic, retain) <MTLRenderPipelineState> *pipelineState;
@property (nonatomic) unsigned short startColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) <MTLBuffer> *vertexBuffer;

+ (float)colorAtLocation:(struct CGPoint { double x1; double x2; })arg1;
+ (struct CGPoint { double x1; double x2; })positionForColor:(float)arg1;

- (void).cxx_destruct;
- (float)colorAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)commandQueue;
- (id)device;
- (void)drawInMTKView:(id)arg1;
- (unsigned short)endColor;
- (id)fragmentShaderArgumentBuffer;
- (id)initWithMetal:(id)arg1 startColor:(unsigned short)arg2 endColor:(unsigned short)arg3;
- (void)initializeVertexBuffer;
- (id)metalView;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (id)pipelineState;
- (struct CGPoint { double x1; double x2; })positionForColor:(float)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setEndColor:(unsigned short)arg1;
- (void)setFragmentShaderArgumentBuffer:(id)arg1;
- (void)setMetalView:(id)arg1;
- (void)setPipelineState:(id)arg1;
- (void)setStartColor:(unsigned short)arg1;
- (void)setVertexBuffer:(id)arg1;
- (void)setupRenderPipeline;
- (unsigned short)startColor;
- (id)vertexBuffer;

@end
