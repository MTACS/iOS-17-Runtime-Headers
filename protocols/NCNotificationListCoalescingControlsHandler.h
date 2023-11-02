
@protocol NCNotificationListCoalescingControlsHandler <NSObject>

@required

- (bool)dismissModalFullScreenIfNeeded;
- (<NCNotificationListCoalescingControlsHandlerDelegate> *)handlerDelegate;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (void)setHandlerDelegate:(id <NCNotificationListCoalescingControlsHandlerDelegate>)arg1;
- (bool)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x1; double x2; })arg1;

@end
