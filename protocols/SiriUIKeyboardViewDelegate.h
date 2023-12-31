
@protocol SiriUIKeyboardViewDelegate <NSObject>

@required

- (void)keyboardView:(SiriUIKeyboardView *)arg1 didReceiveText:(NSString *)arg2;
- (void)keyboardViewDidReceiveAudioRouteAction:(SiriUIKeyboardView *)arg1;
- (void)keyboardViewDidReceiveBugButtonLongPress:(SiriUIKeyboardView *)arg1;
- (void)keyboardViewDidReceiveHelpButtonAction:(SiriUIKeyboardView *)arg1;
- (void)keyboardViewDidReceiveReportBugAction:(SiriUIKeyboardView *)arg1;

@end
