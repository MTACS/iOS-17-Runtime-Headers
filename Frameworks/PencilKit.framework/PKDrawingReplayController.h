
@interface PKDrawingReplayController : NSObject {
    bool  _cancelled;
    PKTiledCanvasView * _canvasView;
    id /* block */  _completionHandler;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentOffset;
    unsigned long long  _currentPointIndex;
    PKDrawing * _drawing;
    PKTextInputDrawingGestureRecognizer * _drawingGestureRecognizer;
    bool  _isAnimating;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originOffset;
    NSMutableArray * _pointArray;
    bool  _setupComplete;
    double  _speedRatio;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startingTextFieldOrigin;
    UITextField * _textField;
    PKTextInputInteraction * _textInputInteraction;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
}

@property (nonatomic) bool cancelled;
@property (nonatomic, retain) PKTiledCanvasView *canvasView;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) struct CGPoint { double x1; double x2; } currentOffset;
@property (nonatomic) unsigned long long currentPointIndex;
@property (nonatomic) bool disablePencilInput;
@property (nonatomic, retain) PKDrawing *drawing;
@property (nonatomic) PKTextInputDrawingGestureRecognizer *drawingGestureRecognizer;
@property (nonatomic) bool isAnimating;
@property (nonatomic) struct CGPoint { double x1; double x2; } originOffset;
@property (nonatomic, retain) NSMutableArray *pointArray;
@property (nonatomic) bool setupComplete;
@property (nonatomic) double speedRatio;
@property (nonatomic) struct CGPoint { double x1; double x2; } startingTextFieldOrigin;
@property (nonatomic) UITextField *textField;
@property (nonatomic) PKTextInputInteraction *textInputInteraction;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;

+ (bool)isDrawingInProgressForWindow:(id)arg1;

- (void).cxx_destruct;
- (void)_beginDrawing;
- (void)_beginStrokeWithPoint:(id)arg1;
- (void)_endDrawing;
- (void)_loadPointArray;
- (void)_processNextPoint;
- (void)_setUpIfNecessary;
- (void)_strokeEndedWithReplayPoint:(id)arg1;
- (void)_strokeMovedWithReplayPoint:(id)arg1;
- (void)beginDrawingAnimationAtPoint:(struct CGPoint { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)beginDrawingAnimationAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 offset:(struct CGPoint { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)beginInsertTextAnimationAtIndex:(unsigned long long)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (void)cancel;
- (bool)cancelled;
- (id)canvasView;
- (id /* block */)completionHandler;
- (struct CGPoint { double x1; double x2; })currentOffset;
- (unsigned long long)currentPointIndex;
- (void)dealloc;
- (bool)disablePencilInput;
- (id)drawing;
- (id)drawingGestureRecognizer;
- (id)initWithDrawing:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 sourceTextField:(id)arg3;
- (id)initWithSourceTextField:(id)arg1;
- (bool)isAnimating;
- (struct CGPoint { double x1; double x2; })originOffset;
- (id)pencilTextInputInteractionFromWindowScene:(id)arg1;
- (id)pointArray;
- (void)setCancelled:(bool)arg1;
- (void)setCanvasView:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCurrentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCurrentPointIndex:(unsigned long long)arg1;
- (void)setDisablePencilInput:(bool)arg1;
- (void)setDrawing:(id)arg1;
- (void)setDrawingGestureRecognizer:(id)arg1;
- (void)setIsAnimating:(bool)arg1;
- (void)setOriginOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPointArray:(id)arg1;
- (void)setSetupComplete:(bool)arg1;
- (void)setSpeedRatio:(double)arg1;
- (void)setStartingTextFieldOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTextField:(id)arg1;
- (void)setTextInputInteraction:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)setupComplete;
- (bool)shouldEndDrawing;
- (double)speedRatio;
- (struct CGPoint { double x1; double x2; })startingTextFieldOrigin;
- (id)textField;
- (id)textInputInteraction;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;

@end
