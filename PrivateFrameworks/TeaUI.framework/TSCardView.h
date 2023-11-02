
@interface TSCardView : UIView <UIGestureRecognizerDelegate> {
    void barView;
    void clippingView;
    void collapseAccessibilityAction;
    void collapseAccessibilityActionHandler;
    void contentOverlayButtonView;
    void contentView;
    void expandAccessibilityAction;
    void expandAccessibilityActionHandler;
    void grabberView;
    void isFullscreen;
    void layout;
    void onCloseTap;
    void onTap;
    void titleView;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (bool)collapseCard:(id)arg1;
- (bool)expandCard:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccessibilityLabel:(id)arg1;
- (void)toggleExpansion;

@end
