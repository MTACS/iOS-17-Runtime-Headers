
@interface TUIKeyboardPathRenderer : NSObject <MTKViewDelegate> {
    unsigned long long  _colorPixelFormat;
    <MTLCommandQueue> * _commandQueue;
    <TUIKeyboardPathRendererDataSource> * _datasource;
    <MTLDevice> * _device;
    bool  _drawing;
    bool  _generatePipelineDescriptors;
    void _pathColor;
    <MTLPipelineLibrarySPI> * _pipelineLibrary;
    <MTLRenderPipelineState> * _pipelineState;
    float  _scale;
    bool  _setupCompleted;
    <MTLBuffer> * _vertexBuffer;
    unsigned long long  _vertexCount;
    MTKView * _view;
    void _viewportPixelSize;
    void _viewportPointSize;
}

@property (nonatomic) <TUIKeyboardPathRendererDataSource> *datasource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) void pathColor;
@property (nonatomic) bool paused;
@property (readonly) Class superclass;

+ (id)generatePipelineDescriptorsForMTKView:(id)arg1;

- (void).cxx_destruct;
- (void)completeRendering;
- (id)datasource;
- (void)drawInMTKView:(id)arg1;
- (id)initWithMTKView:(id)arg1 generatePipelineDescriptors:(bool)arg2;
- (void)keyboardDidHide;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (void)pathColor;
- (bool)paused;
- (void)setDatasource:(id)arg1;
- (void)setPathColor;
- (void)setPaused:(bool)arg1;
- (void)setupMetal;
- (void)setupPipeline;
- (void)updateVertexBufferForPaths:(id)arg1;

@end
