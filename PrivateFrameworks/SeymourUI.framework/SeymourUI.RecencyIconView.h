
@interface SeymourUI.RecencyIconView : UIView {
    void imageView;
    void label;
    void layout;
    void layoutView;
    void title;
}

@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } intrinsicContentSize;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)firstBaselineAnchor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)lastBaselineAnchor;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
