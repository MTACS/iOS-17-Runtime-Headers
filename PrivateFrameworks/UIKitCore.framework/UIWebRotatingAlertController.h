
@interface UIWebRotatingAlertController : _UIRotatingAlertController {
    bool  _wasDeferringCallbacks;
    UIWebDocumentView * _webBrowserView;
}

- (void).cxx_destruct;
- (void)_disableWebView;
- (void)_enableWebView;
- (void)dealloc;
- (void)doneWithSheet;
- (id)initWithUIWebDocumentView:(id)arg1;
- (bool)presentSheet;

@end
