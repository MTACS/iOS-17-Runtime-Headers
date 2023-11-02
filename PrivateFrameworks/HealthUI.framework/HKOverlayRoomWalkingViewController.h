
@interface HKOverlayRoomWalkingViewController : HKOverlayRoomViewController <HKHealthChartFactoryViewControllerProviderClass, HKOverlayRoomTrendModelProviding> {
    NSMutableArray * _contextDelegates;
    long long  _preferredOverlay;
    NSNumber * _preferredOverlayIndex;
    NSString * _quantityTypeIdentifier;
    HKChartSummaryTrendModel * _trendModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKChartSummaryTrendModel *trendModel;

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;

- (void).cxx_destruct;
- (id /* block */)_buildAverageDataSourceTitleFromTimeScope;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_buildWalkingAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 identifier:(id)arg4 preferredOverlay:(long long)arg5 trendModel:(id)arg6;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)showAllFiltersButtonTitle;
- (id)trendModel;
- (void)viewDidLoad;

@end
