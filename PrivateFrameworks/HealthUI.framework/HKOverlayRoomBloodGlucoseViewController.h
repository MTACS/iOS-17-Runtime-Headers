
@interface HKOverlayRoomBloodGlucoseViewController : HKOverlayRoomViewController <HKHealthChartFactoryViewControllerProviderClass, HKOverlayRoomTrendModelProviding> {
    NSMutableArray * _contextDelegates;
    HKChartCache * _percentInRangeChartCache;
    long long  _preferredOverlay;
    NSNumber * _preferredOverlayIndex;
    HKChartSummaryTrendModel * _trendModel;
}

@property (nonatomic, retain) NSMutableArray *contextDelegates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKChartCache *percentInRangeChartCache;
@property (nonatomic, readonly) long long preferredOverlay;
@property (readonly) Class superclass;

+ (id)_buildPercentInRangeChartCacheWithApplicationItems:(id)arg1;
+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;

- (void).cxx_destruct;
- (id)_buildBloodGlucoseAverageDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3;
- (id)_buildEuglycemicRangeStringWithApplicationItems:(id)arg1;
- (id /* block */)_buildGranularAverageDataSourceTitleFromTimeScope;
- (id)_buildPercentInRangeDisplayTypeWithApplicationItems:(id)arg1 classification:(long long)arg2;
- (id)_buildPercentInRangeOverlayContextSectionWithApplicationItems:(id)arg1 overlayChartController:(id)arg2;
- (id)_buildPercentInRangeStackedBarSeriesForClassification:(long long)arg1;
- (long long)_initialPillForPreference:(long long)arg1;
- (bool)_isEnhancedChartingEnabledWithHealthStore:(id)arg1;
- (id)chartOverlayVersion;
- (id)contextDelegates;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 trendModel:(id)arg5;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (id)percentInRangeChartCache;
- (long long)preferredOverlay;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (void)setContextDelegates:(id)arg1;
- (void)setPercentInRangeChartCache:(id)arg1;

@end
