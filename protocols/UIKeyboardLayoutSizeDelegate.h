
@protocol UIKeyboardLayoutSizeDelegate <NSObject>

@required

- (struct CGSize { double x1; double x2; })defaultSizeForInterfaceOrientation:(long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })deviceSpecificPaddingForInterfaceOrientation:(long long)arg1 inputMode:(UIKeyboardInputMode *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })deviceSpecificStaticHitBufferForInterfaceOrientation:(long long)arg1 inputMode:(UIKeyboardInputMode *)arg2;

@end
