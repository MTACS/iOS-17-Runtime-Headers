
@interface SCNMTLRenderPipeline : NSObject {
    unsigned int  _buffersUsageMask;
    <MTLFunction> * _fragmentFunction;
    NSArray * _frameBufferBindings;
    NSArray * _lightBufferBindings;
    NSArray * _nodeBufferBindings;
    struct __C3DFXPass { } * _pass;
    NSArray * _passBufferBindings;
    struct __C3DFXMetalProgram { } * _program;
    struct { 
        unsigned long long colorFormat[8]; 
        unsigned long long depthFormat; 
        unsigned long long stencilFormat; 
        unsigned char sampleCount; 
    }  _renderPassDesc;
    unsigned int  _samplersUsageMask;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _sceneBuffer;
    NSArray * _shadableBufferBindings;
    <MTLRenderPipelineState> * _state;
    unsigned int  _texturesUsageMask;
    MTLVertexDescriptor * _vertexDescriptor;
    <MTLFunction> * _vertexFunction;
}

@property (nonatomic, retain) <MTLFunction> *fragmentFunction;
@property (nonatomic, copy) NSArray *frameBufferBindings;
@property (nonatomic, copy) NSArray *lightBufferBindings;
@property (nonatomic, copy) NSArray *nodeBufferBindings;
@property (nonatomic, copy) NSArray *passBufferBindings;
@property (nonatomic, copy) NSArray *shadableBufferBindings;
@property (nonatomic, retain) <MTLRenderPipelineState> *state;
@property (nonatomic, readonly) unsigned int vertexBuffersUsageMask;
@property (nonatomic, copy) MTLVertexDescriptor *vertexDescriptor;
@property (nonatomic, retain) <MTLFunction> *vertexFunction;

- (void)_computeUsageForArguments:(id)arg1 function:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)fragmentFunction;
- (id)frameBufferBindings;
- (id)init;
- (id)lightBufferBindings;
- (bool)matchesRenderPassDescriptor:(id)arg1;
- (id)nodeBufferBindings;
- (id)passBufferBindings;
- (void)setFragmentFunction:(id)arg1;
- (void)setFrameBufferBindings:(id)arg1;
- (void)setLightBufferBindings:(id)arg1;
- (void)setNodeBufferBindings:(id)arg1;
- (void)setPassBufferBindings:(id)arg1;
- (void)setShadableBufferBindings:(id)arg1;
- (void)setState:(id)arg1;
- (void)setVertexDescriptor:(id)arg1;
- (void)setVertexFunction:(id)arg1;
- (id)shadableBufferBindings;
- (id)state;
- (unsigned int)vertexBuffersUsageMask;
- (id)vertexDescriptor;
- (id)vertexFunction;

@end
