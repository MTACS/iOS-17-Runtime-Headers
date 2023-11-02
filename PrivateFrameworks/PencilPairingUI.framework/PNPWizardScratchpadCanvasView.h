
@interface PNPWizardScratchpadCanvasView : UIView {
    PKCanvasView * _canvasView;
    <PKCanvasViewDelegate> * _canvasViewDelegate;
    PKInk * _ink;
    bool  _showingSnapshot;
    NSMutableArray * _snapshotImageViews;
}

@property (nonatomic, readonly) PKCanvasView *canvasView;
@property (nonatomic) <PKCanvasViewDelegate> *delegate;
@property (nonatomic, readonly) UIGestureRecognizer *drawingGestureRecognizer;
@property (nonatomic, retain) PKInk *ink;
@property (nonatomic) bool showingSnapshot;

- (void).cxx_destruct;
- (void)_playClearAnimationWithImage:(id)arg1;
- (id)canvasView;
- (void)clearDrawingAnimated;
- (id)delegate;
- (id)drawingGestureRecognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)ink;
- (void)layoutSubviews;
- (void)prepareCanvasView;
- (void)setDelegate:(id)arg1;
- (void)setInk:(id)arg1;
- (void)setShowingSnapshot:(bool)arg1;
- (bool)showingSnapshot;

@end
