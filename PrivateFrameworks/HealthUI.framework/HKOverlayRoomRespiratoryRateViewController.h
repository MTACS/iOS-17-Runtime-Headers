
@interface HKOverlayRoomRespiratoryRateViewController : HKOverlayRoomViewController <HKHealthChartFactoryViewControllerProviderClass, HKOverlayRoomTrendModelProviding> {
    NSMutableArray * _contextDelegates;
    long long  _preferredOverlay;
    NSNumber * _preferredOverlayIndex;
    HKChartSummaryTrendModel * _trendModel;
}

@property (nonatomic, retain) NSMutableArray *contextDelegates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long preferredOverlay;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKChartSummaryTrendModel *trendModel;

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;

- (void).cxx_destruct;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_buildRespiratoryRateAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (long long)_initialPillForPreference:(long long)arg1;
- (id)contextDelegates;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 trendModel:(id)arg5;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (long long)preferredOverlay;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (void)setContextDelegates:(id)arg1;
- (void)setTrendModel:(id)arg1;
- (id)trendModel;

@end
