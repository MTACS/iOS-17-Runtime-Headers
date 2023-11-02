
@protocol _SFMailContentProviderDataSource <NSObject>

@required

- (_SFPrintController *)printControllerForContentProvider:(_SFMailContentProvider *)arg1;
- (_SFReaderController *)readerControllerForMailContentProvider:(_SFMailContentProvider *)arg1;
- (bool)readerViewIsVisibleForMailContentProvider:(_SFMailContentProvider *)arg1;
- (WKWebView *)webViewForMailContentProvider:(_SFMailContentProvider *)arg1;

@end
