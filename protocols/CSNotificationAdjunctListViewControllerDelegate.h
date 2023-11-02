
@protocol CSNotificationAdjunctListViewControllerDelegate

@required

- (void)adjunctListViewController:(CSNotificationAdjunctListViewController *)arg1 didUpdateWithSize:(struct CGSize { double x1; double x2; })arg2;
- (void)adjunctListViewController:(CSNotificationAdjunctListViewController *)arg1 updatedNowPlayingVisbility:(bool)arg2;
- (void)focusActivityViewChangedToVisible:(bool)arg1;
- (NSString *)groupNameBaseForAdjunctListViewController:(CSNotificationAdjunctListViewController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetMarginsToMimicForAdjunctListViewController:(CSNotificationAdjunctListViewController *)arg1;
- (double)interItemSpacingToMimicForAdjunctListViewController:(CSNotificationAdjunctListViewController *)arg1;
- (struct CGSize { double x1; double x2; })sizeToMimicForAdjunctListViewController:(CSNotificationAdjunctListViewController *)arg1;

@end
