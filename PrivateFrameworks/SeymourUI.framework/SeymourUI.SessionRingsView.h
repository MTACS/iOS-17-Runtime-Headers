
@interface SeymourUI.SessionRingsView : UIView {
    void celebrationLoadingQueue;
    void containerView;
    void contentLayoutGuide;
    void contentView;
    void exerciseLabel;
    void layoutGuideConstraints;
    void metricBuilder;
    void metricsContainer;
    void metricsPlatter;
    void metricsViewContractedConstraints;
    void metricsViewExpandedConstraints;
    void moveLabel;
    void notchInset;
    void onNotchSide;
    void platform;
    void presenter;
    void ringClosureLabelPlatter;
    void ringClosureLabelView;
    void ringsContainer;
    void ringsContainerHeightConstraint;
    void ringsContainerRightConstraint;
    void ringsContainerTopConstraint;
    void ringsContainerWidthConstraint;
    void ringsPlatter;
    void ringsView;
    void shouldTuckToSide;
    void stackView;
    void standLabel;
    void stringBuilder;
}

@property (nonatomic, readonly) UIVisualEffectView *ringsPlatter;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)displayHighlightWithDuration:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)ringsPlatter;
- (void)safeAreaInsetsDidChange;

@end
