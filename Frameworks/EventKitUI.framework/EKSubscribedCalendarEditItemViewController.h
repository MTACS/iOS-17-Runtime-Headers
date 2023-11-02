
@interface EKSubscribedCalendarEditItemViewController : EKEditItemViewController {
    EKCalendar * _calendar;
    EKAbstractCalendarEditor * _calendarEditor;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 calendar:(id)arg2;
- (void)loadView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)save;

@end
