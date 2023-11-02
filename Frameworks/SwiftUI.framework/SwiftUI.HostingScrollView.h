
@interface SwiftUI.HostingScrollView : UIKitScrollViewBase <UIScrollViewDelegate> {
    void animationOffset;
    void animationTarget;
    void configuration;
    void descendantScrollableAxes;
    void helper;
    void host;
    void lastAdjustedContentInsets;
    void layoutDirection;
    void onScrollToTopGesture;
    void pendingContext;
    void responder;
    void safeAreaTransitionState;
    void viewType;
}

@property (nonatomic, readonly) bool _shouldScrollToContentBeginningInRightToLeft;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;

+ (bool)_isFromSwiftUI;

- (void).cxx_destruct;
- (id)_focusScrollBoundaryMetricsForItem:(id)arg1;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
