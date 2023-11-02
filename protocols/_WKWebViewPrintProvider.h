
@protocol _WKWebViewPrintProvider <NSObject>

@required

- (unsigned long long)_wk_pageCountForPrintFormatter:(_WKWebViewPrintFormatter *)arg1;
- (bool)_wk_printFormatterRequiresMainThread;
- (void)_wk_requestDocumentForPrintFormatter:(_WKWebViewPrintFormatter *)arg1;

@optional

- (void)_wk_requestImageForPrintFormatter:(_WKWebViewPrintFormatter *)arg1;

@end
