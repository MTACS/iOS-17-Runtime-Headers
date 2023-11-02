
@interface PaperKit.PaperTextAttachmentView : _TtGC8PaperKit6CanvasVS_5Paper_ <PKTextAttachmentDrawingViewProviderView, PKTextAttachmentResizeViewDelegate, PKToolPickerResponding, UIGestureRecognizerDelegate, UITextAttachmentContentView, _UIScrollViewScrollObserver> {
    void bottomResizeView;
    void cachedDrawingTransform;
    void cachedDrawingTransformBoundsWidth;
    void eatTapGestureRecognizer;
    void linedPaper;
    void linedPaperView;
    void observedTextView;
    void paperBoundsHint;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  paperDrawingKeyPath;
    void paperViewDelegate;
    void previousLinks;
    void reportedBounds;
    void resizeDragGestureRecognizer;
    void resizeInfo;
    void safeToCopyNewModelWhenMerging;
    void saveCancellable;
    void shouldBecomeFirstResponder;
    void syncCancellable;
    void syncManager;
    void tapBelowGestureRecognizer;
    void textAttachment;
    void topResizeView;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;

- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (bool)_wantsToolPickerVisible:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingTextAttachmentBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingTextAttachmentBoundsForContainerView:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)gestureRecognizerShouldDelayLift:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithAttachment:(id)arg1 drawingClass:(Class)arg2 inserted:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (void)layoutSubviews;
- (void)noOpForGesture:(id)arg1;
- (bool)resignFirstResponder;
- (void)resizeGesture:(id)arg1;
- (void)resizeView:(id)arg1 finishedWithOriginalDrawingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 originalViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)resizeView:(id)arg1 setDrawingHeight:(double)arg2 originalHeight:(double)arg3 growFromTop:(bool)arg4;
- (void)resizeViewDidUpdate:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })resizeViewDrawingBounds:(id)arg1;
- (void)resizeViewLayoutAttachment:(id)arg1;
- (void)resizeViewRemoveAttachment:(id)arg1;
- (id)resizeViewTextView:(id)arg1;
- (void)tapBelowGesture:(id)arg1;
- (id)tiledViewAttachmentViews;
- (id)topLevelAttachmentView;
- (void)updateAfterTextViewChange;
- (void)willMoveToSuperview:(id)arg1;

@end
