
@interface WidgetRenderer.Application : UIApplication

@property (nonatomic, readonly) bool hostsSystemStatusBar;

- (bool)_hostsSystemStatusBar;
- (bool)_isSpringBoard;
- (bool)_shouldAllowKeyboardArbiter;
- (bool)_supportsAlwaysOnDisplay;
- (id)init;

@end
