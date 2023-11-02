
@interface PKCalendarDayLabelView : UIView {
    UILabel * _dayLabel;
    UIColor * _disabledTextColor;
    UIColor * _highlightBackgroundColor;
    double  _highlightPadding;
    UIColor * _highlightTextColor;
    UIView * _highlightView;
    bool  _selected;
}

@property (nonatomic, retain) UIColor *disabledTextColor;
@property (nonatomic, retain) UIColor *highlightBackgroundColor;
@property (nonatomic) double highlightPadding;
@property (nonatomic, retain) UIColor *highlightTextColor;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (id)_dayLabelFont;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_updateTextColor;
- (id)disabledTextColor;
- (id)highlightBackgroundColor;
- (double)highlightPadding;
- (id)highlightTextColor;
- (id)initWithDayString:(id)arg1;
- (bool)isSelected;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDisabledTextColor:(id)arg1;
- (void)setHighlightBackgroundColor:(id)arg1;
- (void)setHighlightPadding:(double)arg1;
- (void)setHighlightTextColor:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)totalSpacingBetweenTextAndLabel;

@end
