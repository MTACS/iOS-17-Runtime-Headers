
@protocol NCNotificationViewControllerDelegate <NCNotificationRequestPresentingDelegate>

@required

- (void)notificationViewController:(void *)arg1 requestPermissionToExecuteAction:(void *)arg2 withParameters:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NCNotificationViewController *, NCNotificationAction *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@optional

- (bool)handleTapOnNotificationViewController:(NCNotificationViewController *)arg1;
- (BSAnimationSettings *)hideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;
- (bool)isAttachmentImageFeaturedForNotificationViewController:(NCNotificationViewController *)arg1;
- (bool)isRichNotificationContentViewForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewController:(NCNotificationViewController *)arg1 didUpdatePreferredContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 dragInteraction:(UIDragInteraction *)arg2 session:(id <UIDragSession>)arg3 didEndWithOperation:(unsigned long long)arg4;
- (void)notificationViewController:(NCNotificationViewController *)arg1 dragInteraction:(UIDragInteraction *)arg2 session:(id <UIDragSession>)arg3 willEndWithOperation:(unsigned long long)arg4;
- (void)notificationViewController:(NCNotificationViewController *)arg1 dragInteraction:(UIDragInteraction *)arg2 sessionWillBegin:(id <UIDragSession>)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })notificationViewController:(NCNotificationViewController *)arg1 finalFrameForDismissingLongLookFromView:(UIView *)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })notificationViewController:(NCNotificationViewController *)arg1 initialFrameForPresentingLongLookFromView:(UIView *)arg2;
- (void)notificationViewController:(NCNotificationViewController *)arg1 isPerformingHoverHighlighting:(bool)arg2;
- (<PLKeyboardHomeAffordanceAssertion> *)notificationViewController:(NCNotificationViewController *)arg1 keyboardAssertionForGestureWindow:(UIWindow *)arg2;
- (<NCContainerViewProviding> *)notificationViewControllerContainerViewProviderForExpandedContent:(NCNotificationViewController *)arg1;
- (long long)notificationViewControllerDateFormatStyle:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldAllowClickPresentationInteraction:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldAllowDragInteraction:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldAllowExpandedPlatterInteraction:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldAllowLongPressGesture:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldInterpretTapAsDefaultAction:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldPan:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldPerformHoverHighlighting:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldSupportClickPresentationInteraction:(NCNotificationViewController *)arg1;
- (bool)notificationViewControllerShouldSupportExpandedPlatterInteraction:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillDismissForCancelAction:(NCNotificationViewController *)arg1;
- (<UIViewSpringAnimationBehaviorDescribing> *)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(NCNotificationViewController *)arg1;
- (bool)shouldAlignContentToBottomForNotificationViewController:(NCNotificationViewController *)arg1;
- (bool)showAdditionalMessageLinesForNotificationViewController:(NCNotificationViewController *)arg1;
- (BSAnimationSettings *)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(NCNotificationViewController *)arg1;

@end
