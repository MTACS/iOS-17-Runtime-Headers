
@protocol ICUIApplicationShim <NSObject>

@required

- (void)beginReceivingRemoteControlEvents;
- (void)endReceivingRemoteControlEvents;
- (bool)isQuickNoteSessionActive;
- (bool)isSecureScreenShowing;
- (UIWindow *)keyWindow;

@end
