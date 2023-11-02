
@protocol NCNotificationListComponentDelegate <NCNotificationListBaseComponentDelegate>

@optional

- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForNotificationListComponent:(id <NCNotificationListComponent>)arg1;
- (double)insetHorizontalMarginForNotificationListComponent:(id <NCNotificationListComponent>)arg1;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 acceptedSummaryOnboarding:(bool)arg2;
- (<NCContainerViewProviding> *)notificationListComponent:(id <NCNotificationListComponent>)arg1 containerViewProviderForExpandedContentForViewController:(NCNotificationViewController *)arg2;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 didPresentSectionHeaderView:(NCNotificationListSectionHeaderView *)arg2 inForceTouchState:(bool)arg3;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 didRemoveNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 didTransitionSectionHeaderView:(NCNotificationListSectionHeaderView *)arg2 toClearState:(bool)arg3;
- (bool)notificationListComponent:(id <NCNotificationListComponent>)arg1 isClockNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 isPresentingLongLookForViewController:(NCNotificationViewController *)arg2;
- (<PLKeyboardHomeAffordanceAssertion> *)notificationListComponent:(id <NCNotificationListComponent>)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (NCNotificationRequest *)notificationListComponent:(id <NCNotificationListComponent>)arg1 notificationRequestForUUID:(NSUUID *)arg2;
- (void)notificationListComponent:(void *)arg1 requestPermissionToExecuteAction:(void *)arg2 forNotificationRequest:(void *)arg3 withParameters:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <NCNotificationListComponent> *, NCNotificationAction *, NCNotificationRequest *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationListComponent:(void *)arg1 requestsAuthenticationAndPerformBlock:(void *)arg2; // needs 2 arg types, found 7: <NCNotificationListComponent> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (void)notificationListComponent:(void *)arg1 requestsExecuteAction:(void *)arg2 forNotificationRequest:(void *)arg3 requestAuthentication:(void *)arg4 withParameters:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: <NCNotificationListComponent> *, NCNotificationAction *, NCNotificationRequest *, bool, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationListComponent:(void *)arg1 requestsPresentingManagementViewForNotificationRequest:(void *)arg2 managementViewType:(void *)arg3 withPresentingView:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: <NCNotificationListComponent> *, NCNotificationRequest *, unsigned long long, UIView *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationListComponent:(void *)arg1 requestsPresentingOptionsMenuForNotificationRequest:(void *)arg2 presentingViewProvider:(void *)arg3 optionsForSection:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 21: <NCNotificationListComponent> *, NCNotificationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, NCNotificationListCell *, UIView *, void*, void*, bool, id /* block */, void*, void, id /* block */, bool, void*
- (NCNotificationSectionSettings *)notificationListComponent:(id <NCNotificationListComponent>)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 setAllowsDirectMessages:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 setAllowsTimeSensitive:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 setModeConfiguration:(DNDModeConfiguration *)arg2;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 setMuted:(bool)arg2 untilDate:(NSDate *)arg3 forSectionIdentifier:(NSString *)arg4 threadIdentifier:(NSString *)arg5;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 setNotificationSystemSettings:(NCNotificationSystemSettings *)arg2;
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 setScheduledDelivery:(bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (bool)notificationListComponent:(id <NCNotificationListComponent>)arg1 shouldAllowInteractionsForNotificationRequest:(NCNotificationRequest *)arg2;
- (void)notificationListComponent:(void *)arg1 shouldFinishLongLookTransitionForNotificationRequest:(void *)arg2 trigger:(void *)arg3 withCompletionBlock:(void *)arg4; // needs 4 arg types, found 9: <NCNotificationListComponent> *, NCNotificationRequest *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)notificationListComponent:(id <NCNotificationListComponent>)arg1 willDismissLongLookForCancelActionForViewController:(NCNotificationViewController *)arg2;
- (void)notificationListComponentChangedContent:(id <NCNotificationListComponent>)arg1;
- (DNDModeConfiguration *)notificationListComponentRequestsCurrentModeConfiguration:(id <NCNotificationListComponent>)arg1;
- (bool)notificationListComponentShouldAllowLongPressGesture:(id <NCNotificationListComponent>)arg1;
- (NCNotificationSystemSettings *)notificationSystemSettingsForNotificationListComponent:(id <NCNotificationListComponent>)arg1;
- (NSDictionary *)notificationUsageTrackingStateForNotificationListComponent:(id <NCNotificationListComponent>)arg1;
- (<UIViewSpringAnimationBehaviorDescribing> *)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationListComponent:(id <NCNotificationListComponent>)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForNotificationListComponent:(id <NCNotificationListComponent>)arg1;

@end
