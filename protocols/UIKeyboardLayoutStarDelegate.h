
@protocol UIKeyboardLayoutStarDelegate <NSObject>

@optional

- (UIView *)keyboardLayout:(UIKeyboardLayoutStar *)arg1 containingViewForActiveKey:(UIKBTree *)arg2 inKeyplaneView:(UIKBKeyplaneView *)arg3;
- (void)keyboardLayout:(UIKeyboardLayoutStar *)arg1 didSwitchToKeyplane:(UIKBTree *)arg2;
- (UIKBRenderConfig *)keyboardLayout:(UIKeyboardLayoutStar *)arg1 willChangeRenderConfig:(UIKBRenderConfig *)arg2;

@end
