
@interface AKInkOverlayView : UIView <PKCanvasViewDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSizeInPKDrawingSpace;
    PKCanvasView * _canvasView;
    <AKInkOverlayViewDelegate> * _delegate;
    id  _drawingUndoTarget;
    PKInk * _ink;
    AKPageController * _pageController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousPageRectInAKModel;
    NSHashTable * _reportedStrokes;
    <PKRulerHostingDelegate> * _rulerHostingDelegate;
}

@property struct CGSize { double x1; double x2; } canvasSizeInPKDrawingSpace;
@property (retain) PKCanvasView *canvasView;
@property (readonly, copy) NSString *debugDescription;
@property <AKInkOverlayViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIGestureRecognizer *drawingGestureRecognizer;
@property id drawingUndoTarget;
@property (readonly) unsigned long long hash;
@property (copy) PKInk *ink;
@property AKPageController *pageController;
@property (nonatomic, readonly) UIGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousPageRectInAKModel;
@property (nonatomic) <PKRulerHostingDelegate> *rulerHostingDelegate;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromPageControllerModelSpace:(id)arg2 toDrawingInCanvasViewSpace:(id)arg3;
+ (id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
+ (id)newDrawingUndoTargetWithPageController:(id)arg1;

- (void).cxx_destruct;
- (void)_calculateFixedPixelSize:(struct CGSize { double x1; double x2; }*)arg1 drawingScale:(double*)arg2;
- (void)_canvasView:(id)arg1 beganStroke:(id)arg2;
- (void)_canvasView:(id)arg1 cancelledStroke:(id)arg2;
- (void)_canvasView:(id)arg1 endedStroke:(id)arg2;
- (bool)_canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;
- (void)_updateCanvasViewInk;
- (void)_updatedSelectedStrokesWithColor:(id)arg1;
- (void)awakeFromNib;
- (bool)canvasNeedsUpdate;
- (struct CGSize { double x1; double x2; })canvasSizeInPKDrawingSpace;
- (id)canvasView;
- (void)canvasViewDidBeginDrawing:(id)arg1;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)canvasViewDrawingDidChange:(id)arg1;
- (void)commonInit;
- (void)commonPostInit;
- (id)delegate;
- (void)didMoveToSuperview;
- (id)drawingGestureRecognizer;
- (id)drawingUndoTarget;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
- (id)ink;
- (void)layoutSubviews;
- (id)pageController;
- (id)pinchGestureRecognizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousPageRectInAKModel;
- (void)removeStrokesFromDrawing:(id)arg1;
- (id)rulerHostingDelegate;
- (void)setCanvasSizeInPKDrawingSpace:(struct CGSize { double x1; double x2; })arg1;
- (void)setCanvasView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawingUndoTarget:(id)arg1;
- (void)setInk:(id)arg1;
- (void)setPageController:(id)arg1;
- (void)setPreviousPageRectInAKModel:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRulerHostingDelegate:(id)arg1;
- (void)setupInkView;
- (void)teardown;
- (id)updatedDrawingForPageRectUpdate;
- (void)willMoveToSuperview:(id)arg1;

@end
