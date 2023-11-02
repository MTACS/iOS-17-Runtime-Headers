
@protocol _UNNotificationExtensionHostInterface

@required

- (void)_extensionDidCompleteNotificationResponse:(UNNotificationResponse *)arg1 withOption:(unsigned long long)arg2;
- (void)_extensionDidUpdateNotificationActions:(NSArray *)arg1;
- (void)_extensionDidUpdatePlayPauseMediaButton;
- (void)_extensionDidUpdateTitle:(NSString *)arg1;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionRequestsDefaultAction;
- (void)_extensionRequestsDismiss;
- (void)_extensionSetPlayPauseMediaButtonColor:(UIColor *)arg1;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
- (void)_extensionWantsToBecomeFirstResponder:(bool)arg1;
- (void)_extensionWantsToReceiveActionResponses:(bool)arg1;

@end
