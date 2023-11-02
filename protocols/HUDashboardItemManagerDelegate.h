
@protocol HUDashboardItemManagerDelegate <HFItemManagerDelegate>

@required

- (void)dashboardItemManager:(HUDashboardItemManager *)arg1 didUpdateContext:(HUDashboardContext *)arg2;
- (void)dashboardItemManager:(HUDashboardItemManager *)arg1 didUpdateHomeMenuStatusItems:(NSSet *)arg2;

@end
