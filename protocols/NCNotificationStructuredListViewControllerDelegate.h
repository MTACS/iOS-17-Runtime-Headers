
@protocol NCNotificationStructuredListViewControllerDelegate <UIScrollViewDelegate>

@required

- (<NCContainerViewProviding> *)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 containerViewProviderForExpandedContentForViewController:(NCNotificationViewController *)arg2;
- (void)notificationStructuredListViewController:(void *)arg1 requestPermissionToExecuteAction:(void *)arg2 forNotificationRequest:(void *)arg3 withParameters:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NCNotificationStructuredListViewController *, NCNotificationAction *, NCNotificationRequest *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationStructuredListViewController:(void *)arg1 requestsAuthenticationAndPerformBlock:(void *)arg2; // needs 2 arg types, found 7: NCNotificationStructuredListViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 requestsClearingFromIncomingSectionNotificationRequests:(NSArray *)arg2;
- (void)notificationStructuredListViewController:(void *)arg1 requestsExecuteAction:(void *)arg2 forNotificationRequest:(void *)arg3 requestAuthentication:(void *)arg4 withParameters:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NCNotificationStructuredListViewController *, NCNotificationAction *, NCNotificationRequest *, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationStructuredListViewController:(void *)arg1 shouldFinishLongLookTransitionForNotificationRequest:(void *)arg2 trigger:(void *)arg3 withCompletionBlock:(void *)arg4; // needs 4 arg types, found 9: NCNotificationStructuredListViewController *, NCNotificationRequest *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1;
- (_UILegibilitySettings *)legibilitySettingsForNotificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 didBeginUserInteractionWithViewController:(UIViewController *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 didEndUserInteractionWithViewController:(UIViewController *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 didUpdateOverlayFooterContentVisibility:(bool)arg2;
- (bool)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 isClockNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 isPresentingLongLookForViewController:(NCNotificationViewController *)arg2;
- (<PLKeyboardHomeAffordanceAssertion> *)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (NCNotificationRequest *)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 notificationRequestForUUID:(NSUUID *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 requestsClearingSupplementaryViewControllers:(NSSet *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 requestsPresentingDigestOnboardingSuggestionViewController:(UIViewController *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 requestsPresentingFocusActivityPickerFromView:(UIView *)arg2;
- (NCNotificationSectionSettings *)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 requestsSectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 setAllowsCriticalAlerts:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 setAllowsDirectMessages:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 setAllowsNotifications:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 setAllowsTimeSensitive:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 setDeliverQuietly:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 setMuted:(bool)arg2 untilDate:(NSDate *)arg3 forSectionIdentifier:(NSString *)arg4 threadIdentifier:(NSString *)arg5;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 setNotificationSystemSettings:(NCNotificationSystemSettings *)arg2;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 setScheduledDelivery:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 setSystemScheduledDeliveryEnabled:(bool)arg2 scheduledDeliveryTimes:(NSArray *)arg3;
- (bool)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 shouldAllowInteractionsForNotificationRequest:(NCNotificationRequest *)arg2;
- (bool)notificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1 shouldFilterNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationStructuredListViewControllerDidBeginUserInteraction:(NCNotificationStructuredListViewController *)arg1;
- (void)notificationStructuredListViewControllerDidEndScrolling:(NCNotificationStructuredListViewController *)arg1;
- (void)notificationStructuredListViewControllerDidEndUserInteraction:(NCNotificationStructuredListViewController *)arg1;
- (void)notificationStructuredListViewControllerDidScroll:(NCNotificationStructuredListViewController *)arg1;
- (void)notificationStructuredListViewControllerDidScrollToRevealNotificationHistory:(NCNotificationStructuredListViewController *)arg1;
- (void)notificationStructuredListViewControllerDidSignificantUserInteraction:(NCNotificationStructuredListViewController *)arg1;
- (Class)notificationStructuredListViewControllerNotificationViewControllerClass:(NCNotificationStructuredListViewController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })notificationStructuredListViewControllerRequestsEdgeInsetsForOverlayFooterView:(NCNotificationStructuredListViewController *)arg1 forOrientation:(long long)arg2;
- (NCNotificationSystemSettings *)notificationStructuredListViewControllerRequestsSystemSettings:(NCNotificationStructuredListViewController *)arg1;
- (bool)notificationStructuredListViewControllerShouldAllowLongPressGesture:(NCNotificationStructuredListViewController *)arg1;
- (bool)notificationStructuredListViewControllerShouldAllowNotificationHistoryReveal:(NCNotificationStructuredListViewController *)arg1;
- (bool)notificationStructuredListViewControllerShouldHintForDefaultAction:(NCNotificationStructuredListViewController *)arg1;
- (void)notificationStructuredListViewControllerWillExpandNotificationListCount:(NCNotificationStructuredListViewController *)arg1;
- (NSDictionary *)notificationUsageTrackingStateForNotificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1;
- (<UIViewSpringAnimationBehaviorDescribing> *)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForNotificationStructuredListViewController:(NCNotificationStructuredListViewController *)arg1;

@end
