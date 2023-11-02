
@interface StocksUI.WebViewController : SFSafariViewController {
    void navigator;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  session;
    void styler;
    void webViewCoordinator;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 configuration:(id)arg2;
- (id)initWithURL:(id)arg1 entersReaderIfAvailable:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
