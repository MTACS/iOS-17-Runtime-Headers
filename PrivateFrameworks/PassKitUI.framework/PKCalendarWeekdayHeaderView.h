
@interface PKCalendarWeekdayHeaderView : UIView {
    UILabel * _label;
}

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (id)initWithWeekdayString:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
