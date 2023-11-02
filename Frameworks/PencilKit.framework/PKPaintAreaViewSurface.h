
@interface PKPaintAreaViewSurface : NSObject <PKControllerDelegate, PKMetalRendererControllerDelegate> {
    <MTLDevice> * _device;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    PKController * _drawingController;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawingSize;
    <PKDrawingUUID> * _drawingUUID;
    CIContext * _imageContext;
    bool  _isDrawing;
    bool  _isErasingObjects;
    bool  _isMipmapped;
    struct CGPoint { 
        double x; 
        double y; 
    }  _oldEraseLocation;
    PKPaintAreaView * _paintAreaView;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousPoint;
    NSMutableSet * _strokeIDsToErase;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _strokeTransform;
    NSMutableArray * _strokesToErase;
    <PKPaintSurface> * _surface;
    double  _textureScale;
    NSMutableArray * _textureSet;
    bool  _waitingForStrokeToEnd;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) PKController *drawingController;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawingSize;
@property (nonatomic, readonly) <PKDrawingUUID> *drawingUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDrawing;
@property (nonatomic, readonly) bool isErasingObjects;
@property (nonatomic, readonly) bool isMipmapped;
@property (nonatomic) PKPaintAreaView *paintAreaView;
@property (nonatomic) struct CGPoint { double x1; double x2; } previousPoint;
@property (nonatomic, readonly) NSMutableSet *strokeIDsToErase;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } strokeTransform;
@property (nonatomic, readonly) NSMutableArray *strokesToErase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PKPaintSurface> *surface;
@property (nonatomic, readonly) double textureScale;
@property (nonatomic, readonly) bool waitingForStrokeToEnd;

- (void).cxx_destruct;
- (id)CIImageFromTexture:(id)arg1;
- (void)_didFinishErasingStrokes:(bool)arg1;
- (void)_setupPKController;
- (void)dealloc;
- (id)dispatchQueue;
- (void)dispatchSyncOnSurfaceQueue:(id /* block */)arg1;
- (void)drawingBegan:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1 activeInputProperties:(unsigned long long)arg2 inputType:(long long)arg3;
- (void)drawingCancelled;
- (void)drawingChanged:(id)arg1;
- (id)drawingController;
- (void)drawingEndedWithDetectedShape:(id)arg1 completionBlock:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })drawingSize;
- (id)drawingUUID;
- (void)eraseStrokesForPoint:(struct CGPoint { double x1; double x2; })arg1 prevPoint:(struct CGPoint { double x1; double x2; })arg2;
- (bool)eraserBeganAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)eraserCancelled;
- (void)eraserEnded;
- (void)eraserMovedToLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithPaintSurface:(id)arg1 dispatchQueue:(id)arg2 device:(id)arg3;
- (bool)isDrawing;
- (bool)isErasingObjects;
- (bool)isMipmapped;
- (void)metalRendererController:(id)arg1 didCommitRenderingIntoTexture:(id)arg2;
- (id)nextTextureTargetForMetalRendererController:(id)arg1;
- (id)paintAreaView;
- (struct CGPoint { double x1; double x2; })previousPoint;
- (void)setIsDrawing:(bool)arg1;
- (void)setPaintAreaView:(id)arg1;
- (void)setPreviousPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)strokeIDsToErase;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })strokeTransform;
- (id)strokesToErase;
- (id)surface;
- (double)textureScale;
- (void)vsync:(double)arg1;
- (bool)waitingForStrokeToEnd;

@end
