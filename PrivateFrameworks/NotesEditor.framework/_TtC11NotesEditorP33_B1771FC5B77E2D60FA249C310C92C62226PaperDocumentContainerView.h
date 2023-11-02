
@interface _TtC11NotesEditorP33_B1771FC5B77E2D60FA249C310C92C62226PaperDocumentContainerView : UIView <ICNestedScrollable, PKToolPickerObserver, UIGestureRecognizerDelegate, UIScrollViewDelegate, _UIScrollViewScrollObserver> {
    void collapseThumbnailsConstraint;
    void didStartObservingTextView;
    void doubleTapEater;
    void headerContainer;
    void headerContentView;
    void headerShadowOpacity;
    void headerView;
    void inLayoutSubviews;
    void inlineView;
    void lastLayoutBounds;
    void nestedScrollViewInteraction;
    void pushStickyHeaderAwayConstraint;
    void scrollViewDelegateMultiplexer;
    void shadowView;
    void showThumbnails;
    void stickyHeaderConstraint;
    void stickyHeaderEnabled;
    void textAttachmentView;
    void thumbnailView;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } adjustedContentInset;
@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInContainingScrollView;
@property (nonatomic, readonly) bool isLocked;
@property (nonatomic, readonly) bool isZoomed;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollBounds;
@property (nonatomic, readonly) UIScrollView *scrollView;

- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })adjustedContentInset;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInContainingScrollView;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLocked;
- (bool)isZoomed;
- (void)layoutSubviews;
- (void)pdfViewMightHaveZoomed:(id)arg1;
- (void)pdfViewSelectedPageThumbnail:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollBounds;
- (id)scrollView;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(struct CGPoint { double x1; double x2; }*)arg3;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)toolPickerVisibilityDidChange:(id)arg1;
- (void)updateConstraints;
- (void)updatePaletteVisibility;
- (void)willMoveToWindow:(id)arg1;

@end
