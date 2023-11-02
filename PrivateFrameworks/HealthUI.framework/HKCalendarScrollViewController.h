
@interface HKCalendarScrollViewController : HKViewController <HKCalendarWeekViewDelegate, HKDateCacheObserver, UIScrollViewDelegate> {
    NSCalendar * _calendar;
    HKDateCache * _dateCache;
    <HKCalendarScrollViewControllerDelegate> * _delegate;
    NSDate * _initiallyCenteredDate;
    bool  _needsInitialOffset;
    unsigned long long  _numberOfRows;
    HKMonthDayCell * _selectedCell;
    double  _topInset;
    NSMutableArray * _weekViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKCalendarScrollViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) double topInset;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_centerPointToCenterDate:(id)arg1;
- (void)_createWeekViews;
- (id)_currentlyCenteredVisibleWeek;
- (void)_findCenteredWeekAndUpdateTitleIfNecessary;
- (unsigned long long)_firstVisibleWeekIndex;
- (double)_heightOfAllWeekCells;
- (void)_pulseCircle;
- (void)_refreshViewsAndUpdateToday;
- (void)_selectCellForDate:(id)arg1;
- (void)_selectTodayCell;
- (struct CGPoint { double x1; double x2; })_setWeekViewsToCenterDate:(id)arg1 forceUpdate:(bool)arg2;
- (id)_startDateToTileWeekViews:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleContentRect;
- (id)_weekForDate:(id)arg1;
- (id)_weekViewContainingTitleForThisMonth;
- (id)_weekViewForToday;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelectedDate:(id)arg1;
- (void)loadView;
- (void)scrollToDate:(id)arg1 animateIfPossible:(bool)arg2;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSelectedCell:(id)arg1;
- (void)setTopInset:(double)arg1;
- (double)topInset;
- (void)updateVisibleAccessoryViews;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)week:(id)arg1 cellSelected:(id)arg2;

@end
