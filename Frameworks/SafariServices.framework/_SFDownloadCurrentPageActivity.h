
@interface _SFDownloadCurrentPageActivity : UIApplicationExtensionActivity {
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;

@end
