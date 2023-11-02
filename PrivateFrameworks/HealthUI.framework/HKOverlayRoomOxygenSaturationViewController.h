
@interface HKOverlayRoomOxygenSaturationViewController : HKOverlayRoomViewController <HKHealthChartFactoryViewControllerProviderClass, HKOverlayRoomTrendModelProviding> {
    NSMutableArray * _contextDelegates;
    UITapGestureRecognizer * _overrideOnboardingRecognizer;
    long long  _preferredOverlay;
    NSNumber * _preferredOverlayIndex;
    HKChartSummaryTrendModel * _trendModel;
}

@property (nonatomic, retain) NSMutableArray *contextDelegates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITapGestureRecognizer *overrideOnboardingRecognizer;
@property (nonatomic, readonly) long long preferredOverlay;
@property (readonly) Class superclass;

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;

- (void).cxx_destruct;
- (id)_buildAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_configureContextSectionsForFullMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)_configureContextSectionsForSingleOverlayMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)_createOverrideOnboardingGestureRecognizer;
- (void)_installOverrideOnboardingGestureRecognizer;
- (id)_makeAverageContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 contextDelegate:(id*)arg4;
- (id)_makeLatestContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)_makePressureOverlayContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 context:(unsigned long long)arg4 contextDelegate:(id*)arg5;
- (id)_makeRangeContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)_makeSleepContextForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (void)_overrideOnboardingAction:(id)arg1;
- (void)_uninstallOverrideOnboardingGestureRecognizer;
- (id)contextDelegates;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 trendModel:(id)arg5;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (id)overrideOnboardingRecognizer;
- (long long)preferredOverlay;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (void)setContextDelegates:(id)arg1;
- (void)setOverrideOnboardingRecognizer:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
