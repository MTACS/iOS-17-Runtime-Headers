
@interface HKStateOfMindOverlayRoomViewController : HKOverlayRoomViewController <HKHealthChartFactoryViewControllerProviderClass> {
    void addDataViewControllerProvider;
    void preferredOverlayContextLocation;
    void sleepChartFormatter;
}

+ (id)createInteractiveChartViewControllerForTypeIdentifier:(id)arg1 chartFactory:(id)arg2 applicationItems:(id)arg3 displayDate:(id)arg4 preferredOverlay:(long long)arg5 restorationUserActivity:(id)arg6 trendModel:(id)arg7 additionalChartOptions:(unsigned long long)arg8;

- (void).cxx_destruct;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (void)contextView:(id)arg1 didTapOnInfoButtonAtIndex:(long long)arg2;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (void)dismissAnimated:(id)arg1;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 sleepChartFormatter:(id)arg3 addDataViewControllerProvider:(id)arg4 preferredOverlay:(long long)arg5;
- (id)initialSelectedContextForMode:(long long)arg1 containerIndex:(long long)arg2;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (void)viewDidLoad;

@end
