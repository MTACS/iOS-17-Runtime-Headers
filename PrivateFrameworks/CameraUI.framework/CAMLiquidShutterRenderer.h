
@interface CAMLiquidShutterRenderer : NSObject {
    bool  __backgrounded;
    <MTLCommandQueue> * __commandQueue;
    <MTLDevice> * __device;
    unsigned long long  __lastRenderedID;
    unsigned long long  __neededRenderID;
    <MTLRenderPipelineState> * __renderPipelineState;
    double  _blurRadius;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } position; 
        double size; 
        struct { 
            double r; 
            double g; 
            double b; 
            double a; 
        } color; 
        double power; 
    }  _centerShape;
    struct { 
        struct CGPoint { 
            double x; 
            double y; 
        } position; 
        double size; 
        struct { 
            double r; 
            double g; 
            double b; 
            double a; 
        } color; 
        double power; 
    }  _dragHandleShape;
    CAMetalLayer * _metalLayer;
    struct { 
        double r; 
        double g; 
        double b; 
        double a; 
    }  _shadowColor;
    double  _shadowSize;
    bool  _showDragHandle;
}

@property (setter=_setBackgrounded:, nonatomic) bool _backgrounded;
@property (nonatomic, readonly) <MTLCommandQueue> *_commandQueue;
@property (nonatomic, readonly) <MTLDevice> *_device;
@property (nonatomic) unsigned long long _lastRenderedID;
@property (nonatomic) unsigned long long _neededRenderID;
@property (nonatomic, readonly) <MTLRenderPipelineState> *_renderPipelineState;
@property (nonatomic) double blurRadius;
@property (nonatomic) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; } centerShape;
@property (nonatomic) struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; } dragHandleShape;
@property (nonatomic) CAMetalLayer *metalLayer;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } shadowColor;
@property (nonatomic) double shadowSize;
@property (nonatomic) bool showDragHandle;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (bool)_backgrounded;
- (id)_commandQueue;
- (id)_device;
- (struct { float x1; float x2; float x3; })_fragmentForShape:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })arg1 scale:(double)arg2;
- (unsigned long long)_lastRenderedID;
- (unsigned long long)_neededRenderID;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_orthographicMatrixWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 near:(float)arg5 far:(float)arg6;
- (id)_renderPipelineState;
- (void)_setBackgrounded:(bool)arg1;
- (double)blurRadius;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })centerShape;
- (void)dealloc;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })dragHandleShape;
- (id)initWithDevice:(id)arg1 commandQueue:(id)arg2 pixelFormat:(unsigned long long)arg3;
- (void)markNeedsRender;
- (id)metalLayer;
- (void)renderIfNecessary;
- (void)setBlurRadius:(double)arg1;
- (void)setCenterShape:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })arg1;
- (void)setDragHandleShape:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; double x4; })arg1;
- (void)setMetalLayer:(id)arg1;
- (void)setShadowColor:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setShadowSize:(double)arg1;
- (void)setShowDragHandle:(bool)arg1;
- (void)set_lastRenderedID:(unsigned long long)arg1;
- (void)set_neededRenderID:(unsigned long long)arg1;
- (struct { double x1; double x2; double x3; double x4; })shadowColor;
- (double)shadowSize;
- (bool)showDragHandle;

@end
