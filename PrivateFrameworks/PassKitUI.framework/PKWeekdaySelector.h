
@interface PKWeekdaySelector : UIView {
    <PKWeekdaySelectorDelegate> * _delegate;
    NSMutableSet * _possibleWeekdays;
    NSMutableSet * _selectedWeekdays;
    UIStackView * _stackView;
}

@property (nonatomic) <PKWeekdaySelectorDelegate> *delegate;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)_weekdayTapped:(id)arg1;
- (id)delegate;
- (id)init;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSelectedDays:(id)arg1 possibleDays:(id)arg2;
- (void)setUserInteractionEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
