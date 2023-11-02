
@interface PNPWizardScratchpadView : UIView <PKCanvasViewDelegate, PNPPencilInteractionEventDestination> {
    UIView * _backgroundView;
    PNPWizardScratchpadCanvasView * _canvasView;
    NSArray * _colors;
    <PNPWizardScratchpadViewDelegate> * _delegate;
    PNPWizardScratchpadCanvasView * _fingerDrawingCanvasView;
    CAShapeLayer * _frameLayer;
    NSMutableArray * _inkViews;
    PNPWizardInkWeightControl * _inkWeightControl;
    bool  _inkWeightControlVisible;
    bool  _isDrawing;
    long long  _previousMarkingToolIndex;
    long long  _selectedInkIndex;
    NSTimer * _showToastTimer;
    bool  _showingToast;
    unsigned long long  _step;
    PNPWizardScratchpadToast * _toastView;
    UIView * _toolsBackgroundPillView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PNPWizardScratchpadViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDrawing;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } pointForFirstTool;
@property (nonatomic) bool showingToast;
@property (nonatomic) unsigned long long step;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_animateAdjustmentSliderAppearance:(id /* block */)arg1;
- (void)_animateInkChange:(id /* block */)arg1;
- (void)_animateLayoutChange:(id /* block */)arg1;
- (void)_canvasViewWillBeginDrawing:(id)arg1;
- (void)_deselectAllInks;
- (void)_dismissToastNotification;
- (void)_initializeToastViewIfNecessary;
- (void)_inkViewPressed:(id)arg1;
- (void)_selectInkAtIndex:(long long)arg1;
- (id)_selectedInk;
- (id)_selectedInkView;
- (void)_showToastNotificationAndAnimateStrokeAway;
- (void)_showToastNotificationWithInitialAnimation;
- (void)_triggerShowToastTimer;
- (bool)_viewIsPartOfStylusCanvasView:(id)arg1;
- (void)canvasViewDidBeginDrawing:(id)arg1;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)clearCanvas;
- (id)delegate;
- (void)eventSource:(id)arg1 hadPencilDoubleTapped:(id /* block */)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDrawing;
- (void)layoutSubviews;
- (struct CGPoint { double x1; double x2; })pointForFirstTool;
- (void)prepareCanvasViews;
- (void)setDelegate:(id)arg1;
- (void)setIsDrawing:(bool)arg1;
- (void)setShowingToast:(bool)arg1;
- (void)setStep:(unsigned long long)arg1;
- (bool)showingToast;
- (unsigned long long)step;
- (void)viewWillMoveToSuperview:(id)arg1;

@end
