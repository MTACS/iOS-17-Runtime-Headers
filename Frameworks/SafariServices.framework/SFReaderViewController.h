
@interface SFReaderViewController : UIViewController <WKUIDelegate> {
    _SFBrowserContentViewController * _containerViewController;
    <SFReaderViewControllerDelegate> * _delegate;
    WKWebView * _originalWebView;
}

@property (nonatomic) _SFBrowserContentViewController *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFReaderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKWebView *readerWebView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_webView:(id)arg1 contextMenuConfigurationForElement:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_webView:(id)arg1 contextMenuDidEndForElement:(id)arg2;
- (void)_webView:(id)arg1 contextMenuForElement:(id)arg2 willCommitWithAnimator:(id)arg3;
- (void)_webView:(id)arg1 contextMenuWillPresentForElement:(id)arg2;
- (id)containerViewController;
- (id)delegate;
- (id)initWithOriginalWebView:(id)arg1;
- (void)loadView;
- (id)readerWebView;
- (void)setContainerViewController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
