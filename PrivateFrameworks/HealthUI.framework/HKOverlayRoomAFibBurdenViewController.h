
@interface HKOverlayRoomAFibBurdenViewController : HKOverlayRoomViewController <HKCurrentValueViewDataSourceDelegate, HKHealthChartFactoryViewControllerProviderClass> {
    <HKAddDataViewControllerProvider> * _addDataViewControllerProvider;
    HKInteractiveChartDisplayType * _afibBurdenDisplayType;
    HKAnalyticsEventSubmissionManager * _analyticsEventSubmissionManager;
    NSObject<OS_dispatch_queue> * _analyticsSubmissionQueue;
    NSCalendar * _currentCalendar;
    long long  _preferredOverlay;
    NSNumber * _preferredOverlayIndex;
    HKInteractiveChartDataFormatter * _sleepChartFormatter;
    <HKSleepDataSourceProvider> * _sleepDataSourceProvider;
}

@property (nonatomic, readonly) <HKAddDataViewControllerProvider> *addDataViewControllerProvider;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *afibBurdenDisplayType;
@property (nonatomic, readonly) HKAnalyticsEventSubmissionManager *analyticsEventSubmissionManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *analyticsSubmissionQueue;
@property (nonatomic, readonly) NSCalendar *currentCalendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long preferredOverlay;
@property (nonatomic, readonly) NSNumber *preferredOverlayIndex;
@property (nonatomic, readonly) HKInteractiveChartDataFormatter *sleepChartFormatter;
@property (nonatomic, readonly) <HKSleepDataSourceProvider> *sleepDataSourceProvider;
@property (readonly) Class superclass;

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;

- (void).cxx_destruct;
- (id)_aFibBurdenSeriesForTimeScope:(long long)arg1 displayType:(id)arg2 mode:(long long)arg3 applicationItems:(id)arg4;
- (id)_contextItemOrder;
- (id)_displayTypeForOverlayContextItem:(unsigned long long)arg1;
- (id)_generateAFibBurdenDisplayTypeWithApplicationItems:(id)arg1 mode:(long long)arg2;
- (id)_generateOverlayContextsWithPrimaryDisplayType:(id)arg1 sleepDataSourceProvider:(id)arg2 sleepChartFormatter:(id)arg3 overlayChartController:(id)arg4 applicationItems:(id)arg5;
- (id)_infographicViewControllerForDisplayType:(id)arg1 secondaryDisplayType:(id)arg2 addDataViewControllerProvider:(id)arg3 healthStore:(id)arg4;
- (id)_lifeFactorViewControllerForKey:(id)arg1 logButtonAction:(id /* block */)arg2;
- (id)_overlayContextForOverlayContextItem:(unsigned long long)arg1 sleepDataSourceProvider:(id)arg2 sleepChartFormatter:(id)arg3 overlayChartController:(id)arg4 applicationItems:(id)arg5;
- (id)addDataViewControllerProvider;
- (id)afibBurdenDisplayType;
- (id)analyticsEventSubmissionManager;
- (id)analyticsSubmissionQueue;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)currentCalendar;
- (void)didChangeFromContextItem:(id)arg1 toContextItem:(id)arg2;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 sleepDataSourceProvider:(id)arg4 sleepChartFormatter:(id)arg5 preferredOverlay:(long long)arg6 addDataViewControllerProvider:(id)arg7;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (long long)preferredOverlay;
- (id)preferredOverlayIndex;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (void)processSelectedRangeData:(id)arg1 displayType:(id)arg2;
- (id)showAllFiltersButtonTitle;
- (id)sleepChartFormatter;
- (id)sleepDataSourceProvider;
- (id)stringForValueRange:(id)arg1 timeScope:(long long)arg2;
- (bool)supportsShowAllFilters;
- (void)viewDidLoad;

@end
