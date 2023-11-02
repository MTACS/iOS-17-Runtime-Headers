
@interface ICTK2TextView : ICTextView {
    NSLayoutConstraint * _attributionSidebarLeadingConstraint;
    ICAttributionSidebarView * _attributionSidebarView;
    NSLayoutConstraint * _attributionSidebarWidthConstraint;
    id /* block */  _renderingAttributesProvider;
    ICTTTextContentStorage * _textContentStorage;
    ICTextContentStorageDelegate * _textContentStorageDelegate;
    ICTK2TextLayoutManagerDelegate * _textLayoutManagerDelegate;
    ICTK2TextController * _tk2TextController;
}

@property (nonatomic, retain) NSLayoutConstraint *attributionSidebarLeadingConstraint;
@property (nonatomic, retain) ICAttributionSidebarView *attributionSidebarView;
@property (nonatomic, retain) NSLayoutConstraint *attributionSidebarWidthConstraint;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (copy) id /* block */ renderingAttributesProvider;
@property (nonatomic, readonly) ICTTTextContentStorage *textContentStorage;
@property (nonatomic, retain) ICTextContentStorageDelegate *textContentStorageDelegate;
@property (nonatomic, retain) ICTK2TextLayoutManagerDelegate *textLayoutManagerDelegate;
@property (nonatomic, readonly) ICTK2TextController *tk2TextController;

+ (void)initialize;
+ (void)swizzleLayoutFragmentPointInside;
+ (void)swizzleTextLayoutCanvasViewTextViewportLayoutControllerDidLayoutTextViewportElement;

- (void).cxx_destruct;
- (id)attachmentViewDelegate;
- (id)attributionSidebarLeadingConstraint;
- (id)attributionSidebarView;
- (id)attributionSidebarWidthConstraint;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithNote:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 insideSystemPaper:(bool)arg3;
- (id)layoutManager;
- (void)layoutSubviews;
- (id /* block */)renderingAttributesProvider;
- (struct CGPoint { double x1; double x2; })scrollOffsetForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withHeightPercentageAdjustment:(double)arg2;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)scrollRangeToVisible:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withHeightPercentageAdjustment:(double)arg2 forceTop:(bool)arg3;
- (void)setAttachmentViewDelegate:(id)arg1;
- (void)setAttributionSidebarLeadingConstraint:(id)arg1;
- (void)setAttributionSidebarView:(id)arg1;
- (void)setAttributionSidebarWidthConstraint:(id)arg1;
- (void)setRenderingAttributesProvider:(id /* block */)arg1;
- (void)setTextContentStorageDelegate:(id)arg1;
- (void)setTextLayoutManagerDelegate:(id)arg1;
- (id)textContentStorage;
- (id)textContentStorageDelegate;
- (id)textLayoutManagerDelegate;
- (id)textStorage;
- (void)textViewportLayoutControllerDidLayout:(id)arg1;
- (id)tk2TextController;

@end
