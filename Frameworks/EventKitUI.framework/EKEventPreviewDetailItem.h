
@interface EKEventPreviewDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
    EKDayPreviewController * _containedDayViewController;
    bool  _inlineDayViewRespectsSelectedCalendarsFilter;
    CUIKCalendarModel * _model;
    NSDate * _proposedTime;
}

@property (nonatomic) bool inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic, retain) NSDate *proposedTime;

- (void).cxx_destruct;
- (void)_datesForPreviewViewControllerWithStartDate:(id*)arg1 endDate:(id*)arg2;
- (id)_dayPreviewViewController;
- (void)_reloadContainedViewControllerIfNeeded;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(bool)arg3;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (id)initWithModel:(id)arg1;
- (bool)inlineDayViewRespectsSelectedCalendarsFilter;
- (id)proposedTime;
- (void)reset;
- (void)setInlineDayViewRespectsSelectedCalendarsFilter:(bool)arg1;
- (void)setProposedTime:(id)arg1;

@end
