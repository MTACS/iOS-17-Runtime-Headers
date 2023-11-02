
@protocol WKFormControl

@required

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (UIView *)controlView;

@optional

- (bool)controlHandleKeyEvent:(UIEvent *)arg1;

@end
