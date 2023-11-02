
@interface HealthRecordsUI.ChartOverlayViewController : HKOverlayRoomViewController {
    void chartDefining;
    void chartType;
    void chartabilityResult;
    void displayTypes;
}

- (void).cxx_destruct;
- (id)contextSectionContainersForMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3;
- (id)controllerTitleWithApplicationItems:(id)arg1;
- (id)createChartOverlayViewController;
- (id)createViewControllerForMode:(long long)arg1 displayDate:(id)arg2 applicationItems:(id)arg3;
- (id)initWithDisplayDate:(id)arg1 applicationItems:(id)arg2 mode:(long long)arg3;
- (id)primaryDisplayTypeWithApplicationItems:(id)arg1;
- (bool)supportsShowAllFilters;

@end
