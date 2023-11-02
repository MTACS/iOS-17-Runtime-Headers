
@interface HKMonthViewController : HKViewController <HKCalendarScrollViewControllerDelegate> {
    NSDateComponents * _cachedDateComponents;
    HKCalendarScrollViewController * _calendarScrollViewController;
    NSDate * _currentDate;
    HKDateCache * _dateCache;
    <HKMonthViewControllerDelegate> * _delegate;
    long long  _titleAlignment;
    UILabel * _titleLabel;
    bool  _wantsShortTitleDate;
}

@property (nonatomic, retain) HKCalendarScrollViewController *calendarScrollViewController;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKMonthViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) long long titleAlignment;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) bool wantsShortTitleDate;

- (void).cxx_destruct;
- (void)_didTapBackButton;
- (void)_setCurrentDate:(id)arg1;
- (id)_titleStringForDate:(id)arg1;
- (void)_updateBackButton;
- (void)_updateCurrentMonthBarButtonItemWithDate:(id)arg1;
- (id)calendarScrollViewController;
- (void)calendarScrollViewController:(id)arg1 didSelectDate:(id)arg2;
- (void)calendarScrollViewController:(id)arg1 didUpdateCenteredMonth:(id)arg2;
- (void)createCalendarScrollViewController;
- (void)createTitleLabel;
- (id)currentDate;
- (id)dateCache;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateCache:(id)arg1 date:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setCalendarScrollViewController:(id)arg1;
- (void)setCurrentDate:(id)arg1 animateIfPossible:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setTitleAlignment:(long long)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setWantsShortTitleDate:(bool)arg1;
- (long long)titleAlignment;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (bool)wantsShortTitleDate;

@end
