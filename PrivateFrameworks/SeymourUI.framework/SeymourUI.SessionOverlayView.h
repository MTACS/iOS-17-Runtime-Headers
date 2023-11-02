
@interface SeymourUI.SessionOverlayView : UIView {
    void activeConstraints;
    void burnBarView;
    void contentLayoutGuide;
    void distanceView;
    void elementViewMap;
    void energyView;
    void heartRateView;
    void highlightLabel;
    void highlightPlatter;
    void inclineView;
    void intensityView;
    void metricContainer;
    void multiUserCelebrationView;
    void multiUserCelebrationViewRightConstraint;
    void notchInset;
    void oldOrientation;
    void onNotchSide;
    void overlayLayoutGuide;
    void overlayLayoutGuideBottom;
    void overlayLayoutGuideLeft;
    void overlayLayoutGuideRight;
    void overlayLayoutGuideTop;
    void presenter;
    void progressView;
    void ringsView;
    void rpmView;
    void separatorView;
    void spmView;
    void timerView;
    void trackView;
    void trackViewRightConstraint;
    void unobscuredLayoutGuide;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)updateConstraints;
- (void)willMoveToSuperview:(id)arg1;

@end
