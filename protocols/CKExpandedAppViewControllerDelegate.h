
@protocol CKExpandedAppViewControllerDelegate <NSObject>

@optional

- (void)expandedAppViewController:(id <CKExpandedAppViewControllerProtocol>)arg1 hasUpdatedLastTouchDate:(NSDate *)arg2;
- (void)expandedAppViewController:(id <CKExpandedAppViewControllerProtocol>)arg1 wantsToSwitchToPlugin:(IMBalloonPlugin *)arg2 datasource:(IMBalloonPluginDataSource *)arg3;
- (double)expandedAppViewControllerCollapsedContentHeight:(id <CKExpandedAppViewControllerProtocol>)arg1;
- (double)expandedAppViewControllerCollapsedHeaderHeight:(id <CKExpandedAppViewControllerProtocol>)arg1;
- (void)expandedAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (bool)expandedAppViewControllerShouldDismissOnDragSuccess:(id <CKExpandedAppViewControllerProtocol>)arg1;
- (void)expandedAppViewControllerSwitcherDidSelectAppManager:(id <CKExpandedAppViewControllerProtocol>)arg1;
- (void)expandedAppViewControllerSwitcherDidSelectAppStore:(id <CKExpandedAppViewControllerProtocol>)arg1;
- (void)expandedAppViewControllerWantsToCollapse:(id <CKExpandedAppViewControllerProtocol>)arg1;
- (bool)shouldAlwaysShowAppTitle;

@end
