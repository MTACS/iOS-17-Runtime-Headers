
@interface SeymourUI.PlaybackTimeControl : UIControl {
    void elapsedTimeFormatter;
    void elapsedTimeLabel;
    void elapsedTimeLabelBottomConstraint;
    void elapsedTrackView;
    void elapsedTrackViewWidthConstraint;
    void layout;
    void remainingTimeFormatter;
    void remainingTimeLabel;
    void remainingTrackView;
    void style;
    void trackContainer;
    void trackMask;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForBaselineLayout;

@end
