
@protocol CKDetailsControllerDelegate <NSObject>

@required

- (UIViewController *)detailsControllerBusinessPrivacyInfoPresentingViewController:(UIViewController *)arg1;
- (void)detailsControllerDidDismiss:(UIViewController *)arg1;
- (void)detailsControllerWillDismiss:(UIViewController *)arg1;
- (void)dismissDetailsNavigationController;
- (void)dismissDetailsViewAndShowConversationList;
- (bool)isDetailsNavigationControllerDetached;

@optional

- (void)detailsController:(UIViewController *)arg1 shouldComposeConversationWithRecipientAddresses:(NSArray *)arg2;
- (void)detailsController:(UIViewController *)arg1 wantsToStageComposition:(CKComposition *)arg2;
- (void)detailsControllerDidSelectStopSharingLocation:(UIViewController *)arg1;
- (UIViewController *)presentingViewControllerForGroupAlertsFromDetailsController:(CKDetailsController *)arg1;

@end
