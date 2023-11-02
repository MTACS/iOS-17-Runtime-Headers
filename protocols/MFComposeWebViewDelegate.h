
@protocol MFComposeWebViewDelegate <NSObject>

@optional

- (void)composeWebView:(MFComposeWebView *)arg1 composeBodyIsEmpty:(bool)arg2;
- (void)composeWebView:(MFComposeWebView *)arg1 didChangeHeight:(double)arg2;
- (void)composeWebViewTextChanged:(MFComposeWebView *)arg1;
- (void)findNavigatorPanelDidChangeHeight:(double)arg1;

@end
