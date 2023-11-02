
@interface _HKMonthTitleView : UIView <HKCalendarMonthTitleFormatting> {
    double  _bottomPadding;
    UIView * _dividerLine;
    double  _dividerOriginX;
    double  _dividerWidth;
    bool  _highlighted;
    UILabel * _monthTitle;
    double  _topPadding;
}

@property (nonatomic) double bottomPadding;
@property (nonatomic) double dividerOriginX;
@property (nonatomic) double dividerWidth;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UILabel *monthTitle;
@property (nonatomic) double topPadding;

- (void).cxx_destruct;
- (id)_monthStringFromDate:(id)arg1;
- (void)_updateFont;
- (double)bottomPadding;
- (double)dividerOriginX;
- (double)dividerWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (id)monthTitle;
- (void)setBottomPadding:(double)arg1;
- (void)setDate:(id)arg1;
- (void)setDividerOriginX:(double)arg1;
- (void)setDividerWidth:(double)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMonthTitle:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)topPadding;
- (void)traitCollectionDidChange:(id)arg1;

@end
