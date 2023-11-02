
@interface EKEventShowInCalendarDetailItem : EKEventDetailItem {
    EKUITableViewCell * _cell;
    EKDayPreviewController * _containedDayViewController;
    CUIKCalendarModel * _model;
    NSDate * _proposedTime;
}

@property (nonatomic, retain) NSDate *proposedTime;

- (void).cxx_destruct;
- (void)_datesForPreviewViewControllerWithStartDate:(id*)arg1 endDate:(id*)arg2;
- (id)_dayPreviewViewController;
- (void)_reloadContainedViewControllerIfNeeded;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)initWithModel:(id)arg1;
- (id)proposedTime;
- (void)reset;
- (void)setProposedTime:(id)arg1;

@end
