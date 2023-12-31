
@protocol _TVRUIEventDelegate <NSObject>

@optional

- (void)generatedButtonEvent:(TVRUIButtonEvent *)arg1;
- (void)generatedTouchEvent:(TVRUITouchEvent *)arg1;
- (void)keyboardRequested;
- (void)willShowDirectionalControls;

@end
