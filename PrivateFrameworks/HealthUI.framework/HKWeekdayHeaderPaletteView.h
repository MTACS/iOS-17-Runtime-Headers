
@interface HKWeekdayHeaderPaletteView : UIView {
    NSMutableArray * _weekdayLabels;
}

+ (double)preferredHeight;
+ (id)weekdayFont;

- (void).cxx_destruct;
- (void)_updateFont;
- (double)_xOriginForMonthViewWithIndex:(long long)arg1 itemWidth:(double)arg2 leftMargin:(double)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 shouldSupportRTL:(bool)arg2;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
