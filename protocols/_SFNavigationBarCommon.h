
@protocol _SFNavigationBarCommon <_SFBarCommon>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })URLOutlineFrameInNavigationBarSpace;
- (<_SFPopoverSourceInfo> *)URLOutlinePopoverSourceInfo;
- (<_SFPopoverSourceInfo> *)formatMenuButtonPopoverSourceInfo;
- (void)layoutIfNeeded;
- (NSArray *)popoverPassthroughViews;
- (void)resignFirstResponder;
- (UITextField *)textField;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })urlOutlineFrameRelativeToView:(UIView *)arg1;

@end
