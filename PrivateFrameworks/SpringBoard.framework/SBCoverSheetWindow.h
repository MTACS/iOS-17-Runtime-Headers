
@interface SBCoverSheetWindow : SBSecureWindow

+ (bool)sb_autorotates;

- (bool)_canBecomeKeyWindow;
- (void)_configureContextOptions:(id)arg1;
- (bool)becomeFirstResponder;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)resignFirstResponder;

@end
