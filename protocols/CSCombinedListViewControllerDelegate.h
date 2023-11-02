
@protocol CSCombinedListViewControllerDelegate

@required

- (void)combinedListViewController:(CSCombinedListViewController *)arg1 hasContent:(bool)arg2;
- (void)combinedListViewController:(CSCombinedListViewController *)arg1 isShowingMediaControls:(bool)arg2;
- (void)combinedListViewControllerWillExpandNotificationListCount:(CSCombinedListViewController *)arg1;
- (NSSet *)notificationSectionSettingsForCombinedListViewController:(CSCombinedListViewController *)arg1;

@end
