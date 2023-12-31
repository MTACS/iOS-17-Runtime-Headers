
@interface WGWidgetListEditViewTableHeaderView : UITableViewHeaderFooterView {
    UILabel * _explanationLabel;
    UILabel * _headlineLabel;
}

@property (nonatomic, readonly) double contentMinY;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_explanationLabelFrameForBoundsWidth:(double)arg1 withHeadlineLabelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_headlineLabelFrameForBoundsWidth:(double)arg1;
- (double)contentMinY;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 forTodayView:(bool)arg2;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
