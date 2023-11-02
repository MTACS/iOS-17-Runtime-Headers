
@protocol NCNotificationListBaseComponentDelegate <NSObject>

@optional

- (NSString *)backgroundGroupNameBaseForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (UIView *)containerViewForPreviewInteractionPresentedContentForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (bool)handleTapOnNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (_UILegibilitySettings *)legibilitySettingsForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didAddViewController:(UIViewController<NCMaterialDisplaying> *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didBeginUserInteractionWithViewController:(UIViewController *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didEndUserInteractionWithViewController:(UIViewController *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didPresentCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg2 inForceTouchState:(bool)arg3;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didRemoveViewController:(UIViewController<NCMaterialDisplaying> *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didTransitionActionsForSwipeInteraction:(PLSwipeInteraction *)arg2 revealed:(bool)arg3;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didTransitionCoalescingControlsHandler:(id <NCNotificationListCoalescingControlsHandler>)arg2 toClearState:(bool)arg3;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 didUpdateViewController:(UIViewController<NCMaterialDisplaying> *)arg2;
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 requestsClearingPresentables:(NSSet *)arg2;
- (void)notificationListBaseComponent:(void *)arg1 requestsModalPresentationOfNavigationController:(void *)arg2 sender:(void *)arg3 animated:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <NCNotificationListBaseComponent> *, NCModalNavigationController *, id, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationListBaseComponent:(void *)arg1 requestsScrollingToContentOffset:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 7: <NCNotificationListBaseComponent> *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)notificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1 willUpdateViewController:(UIViewController<NCMaterialDisplaying> *)arg2;
- (void)notificationListBaseComponentDidRemoveAll:(id <NCNotificationListBaseComponent>)arg1;
- (void)notificationListBaseComponentDidSignificantUserInteraction:(id <NCNotificationListBaseComponent>)arg1;
- (void)notificationListBaseComponentRequestsClearingAll:(id <NCNotificationListBaseComponent>)arg1;
- (bool)shouldHintDefaultActionForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;
- (bool)shouldScrollToTopForNotificationListBaseComponent:(id <NCNotificationListBaseComponent>)arg1;

@end
