
@protocol WebUIDelegate <NSObject>

@optional

- (NSArray *)webView:(WebView *)arg1 contextMenuItemsForElement:(NSDictionary *)arg2 defaultMenuItems:(NSArray *)arg3;
- (WebView *)webView:(WebView *)arg1 createWebViewModalDialogWithRequest:(NSURLRequest *)arg2;
- (WebView *)webView:(WebView *)arg1 createWebViewWithRequest:(NSURLRequest *)arg2;
- (void)webView:(WebView *)arg1 drawFooterInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webView:(WebView *)arg1 drawHeaderInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webView:(WebView *)arg1 makeFirstResponder:(WAKResponder *)arg2;
- (void)webView:(WebView *)arg1 mouseDidMoveOverElement:(NSDictionary *)arg2 modifierFlags:(unsigned long long)arg3;
- (void)webView:(WebView *)arg1 printFrameView:(WebFrameView *)arg2;
- (bool)webView:(WebView *)arg1 runBeforeUnloadConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WebFrame *)arg3;
- (void)webView:(WebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2;
- (void)webView:(WebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WebFrame *)arg3;
- (bool)webView:(WebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2;
- (bool)webView:(WebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WebFrame *)arg3;
- (NSString *)webView:(WebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3;
- (NSString *)webView:(WebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3 initiatedByFrame:(WebFrame *)arg4;
- (void)webView:(WebView *)arg1 runOpenPanelForFileButtonWithResultListener:(id <WebOpenPanelResultListener>)arg2;
- (void)webView:(WebView *)arg1 runOpenPanelForFileButtonWithResultListener:(id <WebOpenPanelResultListener>)arg2 allowMultipleFiles:(bool)arg3;
- (void)webView:(WebView *)arg1 setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webView:(WebView *)arg1 setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)webView:(WebView *)arg1 setResizable:(bool)arg2;
- (void)webView:(WebView *)arg1 setStatusBarVisible:(bool)arg2;
- (void)webView:(WebView *)arg1 setStatusText:(NSString *)arg2;
- (void)webView:(WebView *)arg1 setToolbarsVisible:(bool)arg2;
- (bool)webView:(WebView *)arg1 shouldPerformAction:(SEL)arg2 fromSender:(id)arg3;
- (bool)webViewAreToolbarsVisible:(WebView *)arg1;
- (void)webViewClose:(WebView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })webViewContentRect:(WebView *)arg1;
- (WAKResponder *)webViewFirstResponder:(WebView *)arg1;
- (void)webViewFocus:(WebView *)arg1;
- (float)webViewFooterHeight:(WebView *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })webViewFrame:(WebView *)arg1;
- (float)webViewHeaderHeight:(WebView *)arg1;
- (bool)webViewIsResizable:(WebView *)arg1;
- (bool)webViewIsStatusBarVisible:(WebView *)arg1;
- (void)webViewRunModal:(WebView *)arg1;
- (void)webViewShow:(WebView *)arg1;
- (NSString *)webViewStatusText:(WebView *)arg1;
- (void)webViewUnfocus:(WebView *)arg1;

@end