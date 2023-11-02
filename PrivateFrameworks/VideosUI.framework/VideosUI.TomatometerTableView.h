
@interface VideosUI.TomatometerTableView : VUIBaseView <VUILabelBaselineProtocol> {
    void itemViews;
}

@property (nonatomic, readonly) NSArray *accessibilityItemViews;
@property (nonatomic, readonly) double vuiBaselineHeight;

- (void).cxx_destruct;
- (id)accessibilityItemViews;
- (double)bottomMarginWithBaselineMargin:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;
- (double)vuiBaselineHeight;
- (double)vui_baselineOffsetFromBottom;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)vui_prepareForReuse;

@end
