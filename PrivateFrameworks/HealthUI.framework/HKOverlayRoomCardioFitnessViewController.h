
@interface HKOverlayRoomCardioFitnessViewController : HKOverlayRoomViewController <HKCurrentValueViewDataSourceDelegate, HKOverlayRoomTrendModelProviding, _HKCardioFitnessClassificationContextDelegate> {
    <HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate> * _analyticsDelegate;
    NSMutableArray * _contextDelegates;
    HKCardioFitnessLevelData * _initialCardioFitnessLevelData;
    HKOverlayContextLocation * _preferredContextLocation;
    long long  _preferredOverlay;
    HKDisplayType * _representativeDisplayType;
    HKChartSummaryTrendModel * _trendModel;
}

@property (nonatomic, readonly) <HKOverlayRoomCardioFitnessViewControllerAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, retain) NSMutableArray *contextDelegates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKCardioFitnessLevelData *initialCardioFitnessLevelData;
@property (nonatomic, retain) HKOverlayContextLocation *preferredContextLocation;
@property (nonatomic, readonly) long long preferredOverlay;
@property (nonatomic, retain) HKDisplayType *representativeDisplayType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKChartSummaryTrendModel *trendModel;

- (void).cxx_destruct;
- (id)_buildCardioFitnessLevelDataSourceWithUnitController:(id)arg1 displayType:(id)arg2 healthStore:(id)arg3 cardioFitnessLevel:(long long)arg4;
- (id)_buildTrendContextFromApplicationItems:(id)arg1 overlayChartController:(id)arg2 overlayMode:(long long)arg3;
- (long long)_cardioFitnessLevelForPreferredOverlay:(long long)arg1;
- (id)_configureContextSectionsForFullMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 trendModel:(id)arg4;
- (id)_configureContextSectionsForSingleOverlayMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 trendModel:(id)arg4;
- (long long)_preferredOverlayForCardioFitnessLevel:(long long)arg1;
- (id)analyticsDelegate;
- (id)contextDelegates;
- (void)contextDidUpdate:(id)arg1 withCardioFitnessLevelData:(id)arg2;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (void)didChangeFromContextItem:(id)arg1 toContextItem:(id)arg2;
- (id)getChartSummaryTrendModelToModify;
- (bool)infographicSupportedForDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)infographicViewControllerForDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 analyticsDelegate:(id)arg5 interactiveChartOptions:(unsigned long long)arg6 trendModel:(id)arg7;
- (id)initialCardioFitnessLevelData;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (id)preferredContextLocation;
- (long long)preferredOverlay;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)representativeDisplayType;
- (void)setContextDelegates:(id)arg1;
- (void)setInitialCardioFitnessLevelData:(id)arg1;
- (void)setPreferredContextLocation:(id)arg1;
- (void)setRepresentativeDisplayType:(id)arg1;
- (id)showAllFiltersButtonTitle;
- (id)stringForValueRange:(id)arg1 timeScope:(long long)arg2;
- (id)trendModel;

@end
