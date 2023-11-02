
@interface PKCalendarMonthView : UIView <PKCalendarDayViewDelegate> {
    NSArray * _dayViews;
    UIView * _headerSeparatorView;
    UIView * _headerView;
    PKCalendarDayView * _selectedDayView;
    NSArray * _weekdayHeaders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_formViewsWithDataSource:(id)arg1 appearance:(id)arg2 headerView:(id)arg3;
- (struct CGSize { double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isTemplateLayout:(bool)arg2;
- (void)calendarDayViewTapped:(id)arg1 withDate:(id)arg2;
- (void)configureWithDataSource:(id)arg1 appearance:(id)arg2 headerView:(id)arg3;
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
