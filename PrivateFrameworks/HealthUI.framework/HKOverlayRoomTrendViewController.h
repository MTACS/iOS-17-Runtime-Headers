
@interface HKOverlayRoomTrendViewController : HKOverlayRoomViewController <HKOverlayRoomTrendModelProviding> {
    HKDisplayType * _baseChartDisplayType;
    NSCalendar * _overrideCalendar;
    long long  _overrideFirstWeekday;
    long long  _startingTimeScope;
    NSDictionary * _timeScopeRanges;
    HKChartSummaryTrendModel * _trendModel;
    HKOverlayRoomViewController * _wrappedOverlayViewController;
}

@property (nonatomic, retain) HKDisplayType *baseChartDisplayType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSCalendar *overrideCalendar;
@property (nonatomic, readonly) long long overrideFirstWeekday;
@property (nonatomic, readonly) long long startingTimeScope;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *timeScopeRanges;
@property (nonatomic, retain) HKChartSummaryTrendModel *trendModel;
@property (nonatomic, retain) HKOverlayRoomViewController *wrappedOverlayViewController;

- (void).cxx_destruct;
- (id)_primaryContextForApplicationItems:(id)arg1 overlayChartController:(id)arg2;
- (id)_primarySectionForApplicationItems:(id)arg1 overlayChartController:(id)arg2;
- (id)baseChartDisplayType;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithBaseChartDisplayType:(id)arg1 trendModel:(id)arg2 displayDate:(id)arg3 applicationItems:(id)arg4 timeScopeRanges:(id)arg5 initialTimeScope:(long long)arg6 wrappedOverlay:(id)arg7 overrideFirstWeekday:(long long)arg8 overrideCalendar:(id)arg9 additionalChartOptions:(unsigned long long)arg10;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (id)overrideCalendar;
- (long long)overrideFirstWeekday;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (void)setBaseChartDisplayType:(id)arg1;
- (void)setTimeScopeRanges:(id)arg1;
- (void)setTrendModel:(id)arg1;
- (void)setWrappedOverlayViewController:(id)arg1;
- (long long)startingTimeScope;
- (bool)supportsShowAllFilters;
- (id)timeScopeRanges;
- (id)trendModel;
- (id)wrappedOverlayViewController;

@end
