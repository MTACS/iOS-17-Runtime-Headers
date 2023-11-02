
@protocol _SFWebViewDelegate <NSObject>

@optional

- (NSUndoManager *)overrideUndoManagerForSFWebView:(_SFWebView *)arg1;
- (_SFDownload *)sfWebView:(_SFWebView *)arg1 didStartDownload:(_WKDownload *)arg2;
- (bool)sfWebViewCanFindNextOrPrevious:(_SFWebView *)arg1;
- (bool)sfWebViewCanPromptForAccountSecurityRecommendation;
- (void)sfWebViewDidBecomeFirstResponder:(_SFWebView *)arg1;
- (void)sfWebViewDidChangeSafeAreaInsets:(_SFWebView *)arg1;
- (void)sfWebViewDidEndFormControlInteraction:(_SFWebView *)arg1;
- (void)sfWebViewDidStartFormControlInteraction:(_SFWebView *)arg1;
- (bool)sfWebViewShouldFillStringForFind:(_SFWebView *)arg1;

@end
