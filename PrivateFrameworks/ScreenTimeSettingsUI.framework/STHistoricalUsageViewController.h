
@interface STHistoricalUsageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate> {
    NSObject<STUsageDetailsViewModelCoordinator> * _coordinator;
    long long  _currentViewMode;
    NSLayoutConstraint * _dayGraphContainerHeightConstraint;
    UIView * _dayGraphContainerView;
    UIPageViewController * _dayGraphPageViewController;
    double  _graphHeight;
    double  _maximumYAxisLabelWidth;
    STUsageGraphViewController * _selectedDayGraphViewController;
    STUsageGraphViewController * _selectedWeekGraphViewController;
    STUsageSummaryTitleView * _titleView;
    unsigned long long  _type;
    NSLayoutConstraint * _weekGraphContainerHeightConstraint;
    UIView * _weekGraphContainerView;
    UIPageViewController * _weekGraphPageViewController;
}

@property (nonatomic, retain) NSObject<STUsageDetailsViewModelCoordinator> *coordinator;
@property long long currentViewMode;
@property (retain) NSLayoutConstraint *dayGraphContainerHeightConstraint;
@property (retain) UIView *dayGraphContainerView;
@property (retain) UIPageViewController *dayGraphPageViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double graphHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumYAxisLabelWidth;
@property (retain) STUsageGraphViewController *selectedDayGraphViewController;
@property (nonatomic, retain) STUsageGraphViewController *selectedWeekGraphViewController;
@property (readonly) Class superclass;
@property (retain) STUsageSummaryTitleView *titleView;
@property (readonly) unsigned long long type;
@property (retain) NSLayoutConstraint *weekGraphContainerHeightConstraint;
@property (retain) UIView *weekGraphContainerView;
@property (retain) UIPageViewController *weekGraphPageViewController;

+ (id)historicalUsageViewControllerOfType:(unsigned long long)arg1 graphHeight:(double)arg2;

- (void).cxx_destruct;
- (id)_dataSetFromUsageReport:(id)arg1;
- (id)_dayGraphViewControllerForDay:(unsigned long long)arg1 week:(unsigned long long)arg2 usageReport:(id)arg3;
- (id)_nextGraphViewControllerForPageViewController:(id)arg1 currentGraphViewController:(id)arg2 direction:(long long)arg3;
- (void)_selectedBarViewDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_selectedDayUsageReportDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_selectedWeekUsageReportDidChange:(id)arg1;
- (id)_weekGraphViewControllerForWeek:(unsigned long long)arg1 usageReport:(id)arg2;
- (id)coordinator;
- (long long)currentViewMode;
- (id)dayGraphContainerHeightConstraint;
- (id)dayGraphContainerView;
- (id)dayGraphPageViewController;
- (void)dealloc;
- (double)graphHeight;
- (double)maximumYAxisLabelWidth;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (id)selectedDayGraphViewController;
- (id)selectedWeekGraphViewController;
- (void)setCoordinator:(id)arg1;
- (void)setCurrentViewMode:(long long)arg1;
- (void)setDayGraphContainerHeightConstraint:(id)arg1;
- (void)setDayGraphContainerView:(id)arg1;
- (void)setDayGraphPageViewController:(id)arg1;
- (void)setMaximumYAxisLabelWidth:(double)arg1;
- (void)setSelectedDayGraphViewController:(id)arg1;
- (void)setSelectedWeekGraphViewController:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setWeekGraphContainerHeightConstraint:(id)arg1;
- (void)setWeekGraphContainerView:(id)arg1;
- (void)setWeekGraphPageViewController:(id)arg1;
- (id)titleView;
- (unsigned long long)type;
- (void)viewDidLoad;
- (id)weekGraphContainerHeightConstraint;
- (id)weekGraphContainerView;
- (id)weekGraphPageViewController;

@end
