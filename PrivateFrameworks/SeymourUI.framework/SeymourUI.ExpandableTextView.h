
@interface SeymourUI.ExpandableTextView : UIView {
    void layout;
    void linkIconsAndTitles;
    void linksBottomConstraint;
    void moreTextLabel;
    void onMoreTapped;
    void sizingLabel;
    void state;
    void tapGestureRecognizer;
    void tapTargetView;
    void textLabel;
    void textLabelBottomConstraint;
    void textLabelTruncatedLines;
}

@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;

- (void).cxx_destruct;
- (void)didTapLink:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
