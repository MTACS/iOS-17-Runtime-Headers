
@interface PKCalendarDayView : UIView {
    NSDate * _date;
    PKCalendarDayLabelView * _dayLabelView;
    UIView * _decorationView;
    <PKCalendarDayViewDelegate> * _delegate;
    bool  _hideDayLabel;
    bool  _selectable;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic, retain) UIView *decorationView;
@property (nonatomic) bool hideDayLabel;
@property (getter=isSelectable, nonatomic) bool selectable;
@property (getter=isSelected, nonatomic) bool selected;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_viewTapped;
- (id)decorationView;
- (bool)hideDayLabel;
- (id)initWithDate:(id)arg1 dayString:(id)arg2 delegate:(id)arg3;
- (bool)isSelectable;
- (bool)isSelected;
- (void)layoutSubviews;
- (void)setDecorationView:(id)arg1;
- (void)setHideDayLabel:(bool)arg1;
- (void)setSelectable:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)verticalMarginWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
