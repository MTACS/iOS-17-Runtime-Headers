
@interface HKOverlayRoomHeartViewController : HKOverlayRoomViewController <HKHealthChartFactoryViewControllerProviderClass, HKOverlayRoomTrendModelProviding> {
    long long  _preferredOverlay;
    NSNumber * _preferredOverlayIndex;
    HKChartSummaryTrendModel * _trendModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long preferredOverlay;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKChartSummaryTrendModel *trendModel;

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;

- (void).cxx_destruct;
- (long long)_initialPillForPreference:(long long)arg1;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)getChartSummaryTrendModelToModify;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3 preferredOverlay:(long long)arg4 trendModel:(id)arg5;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (long long)preferredOverlay;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (id)trendModel;
- (void)viewDidLoad;

@end
