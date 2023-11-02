
@interface SeymourUI.WorkoutPlanBrickItemCell : UICollectionViewCell {
    void actionButtonContainerView;
    void artworkView;
    void captionLabel;
    void contentViewBottomConstraint;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void separator;
    void showSeparator;
    void subtitleLabel;
    void swapButton;
    void titleLabel;
    void titleLabelTopConstraint;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)swapButtonTapped:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end
