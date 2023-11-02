
@interface FIUIBreathingPetalRingMetalRenderer : NSObject <MTKViewDelegate> {
    <MTLTexture> * _circleGradient;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*circlePosition[20]; 
        void*textureRotationVector; 
    }  _circleProperties;
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLBuffer> * _indexBuffer;
    MTKView * _mtkView;
    long long  _numberOfPetals;
    long long  _numberOfVisiblePetals;
    long long  _petalColor;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projectionMatrix;
    <MTLRenderPipelineState> * _renderPipeline;
    struct CGPoint { 
        double x; 
        double y; 
    }  _ringCenter;
    void _ringCenterVector;
    float  _ringRadius;
    bool  _showBlurTrails;
    id /* block */  _stateUpdateBlock;
    struct { 
        int numberOfPetals; 
        int showBlurTrails; 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*circlePosition[20]; 
        void*textureRotationVector; 
    }  _uniforms;
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*position; 
    }  _vertexData;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[20]; } circleProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfVisiblePetals;
@property (nonatomic) struct CGPoint { double x1; double x2; } ringCenter;
@property (nonatomic) float ringRadius;
@property (nonatomic, copy) id /* block */ stateUpdateBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearCirclesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_createBuffers;
- (void)_loadTextures;
- (double)_maxPetalRingRadius;
- (void)_setCircleAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)_setupIndexes;
- (void)_setupProjectionMatrixForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setupRenderPipeline;
- (void)_setupVertices;
- (void)_updateVertices;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[20]; })circleProperties;
- (void)drawInMTKView:(id)arg1;
- (void)importDataFromPetalRingMetalRenderer:(id)arg1;
- (id)initWithMetalKitView:(id)arg1 petalColor:(long long)arg2 numberOfPetals:(long long)arg3 showBlurTrails:(bool)arg4;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (long long)numberOfVisiblePetals;
- (struct CGPoint { double x1; double x2; })ringCenter;
- (float)ringRadius;
- (void)setBlurTrailAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 blurriness:(float)arg4 alpha:(float)arg5;
- (void)setCircleProperties:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[20]; })arg1;
- (void)setGradientRotationAngle:(float)arg1;
- (void)setNumberOfVisiblePetals:(long long)arg1 showBlurTrails:(bool)arg2;
- (void)setPetalAtIndex:(long long)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(float)arg3 alpha:(float)arg4;
- (void)setRingCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRingRadius:(float)arg1;
- (void)setStateUpdateBlock:(id /* block */)arg1;
- (id /* block */)stateUpdateBlock;

@end
