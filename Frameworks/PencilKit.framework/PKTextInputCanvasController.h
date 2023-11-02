
@interface PKTextInputCanvasController : NSObject <PKTextInputDebugStateReporting, PKTiledCanvasViewDelegate> {
    PKTiledCanvasView * __canvasView;
    PKTextInputFloatingBackgroundView * __floatingBackgroundView;
    <PKTextInputCanvasControllerChangeObserver> * _changeObserver;
    PKStroke * _currentStroke;
    struct vector<CGPoint, std::allocator<CGPoint>> { 
        struct CGPoint {} *__begin_; 
        struct CGPoint {} *__end_; 
        struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { 
            struct CGPoint {} *__value_; 
        } __end_cap_; 
    }  _currentStrokePoints;
    <PKTextInputCanvasControllerDelegate> * _delegate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _floatingBackgroundRect;
    NSMutableSet * _recentlyRemovedStrokeIDs;
    UIColor * _strokeColor;
    NSMutableDictionary * _strokeColorForStrokeUUID;
    bool  _useSlidingCanvas;
    bool  _wantsCanvasViewLoaded;
    bool  _wantsCanvasVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)canvasView:(id)arg1 beganStroke:(id)arg2;
- (void)canvasView:(id)arg1 cancelledStroke:(id)arg2;
- (void)canvasView:(id)arg1 didPresentWithCanvasOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)canvasView:(id)arg1 drawingDidChange:(id)arg2;
- (void)canvasView:(id)arg1 endedStroke:(id)arg2;
- (id)canvasView:(id)arg1 inkForStroke:(id)arg2;
- (void)canvasViewDidBeginDrawing:(id)arg1;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)canvasViewDidFinishAnimatingStrokes:(id)arg1;
- (void)canvasViewDrawingMoved:(id)arg1 withTouch:(id)arg2;
- (void)canvasViewHasVisibleStrokesChanged:(id)arg1;
- (bool)canvasViewShouldDisableShapeRecognition:(id)arg1;
- (id)canvasViewTouchView:(id)arg1;
- (void)canvasViewWillBeginNewStroke:(id)arg1 withTouch:(id)arg2 location:(struct CGPoint { double x1; double x2; })arg3;
- (void)dealloc;
- (id)init;
- (void)replayCanvasViewDrawingMoved:(id)arg1 inputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)reportDebugStateDescription:(id /* block */)arg1;

@end
