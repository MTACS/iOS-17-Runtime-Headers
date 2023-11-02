
@interface WSWebSheetViewController : UIViewController

- (void)dismissViewController:(long long)arg1;
- (void)handleProbeResult:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)loadView;
- (bool)shouldAutorotate;
- (void)startWithURL:(id)arg1 ssid:(id)arg2 interface:(id)arg3 proxyConfiguration:(id)arg4 enableTVMode:(bool)arg5 delegate:(id)arg6;
- (void)startWithURL:(id)arg1 ssid:(id)arg2 interface:(id)arg3 proxyConfiguration:(id)arg4 showCancelMenu:(bool)arg5 delegate:(id)arg6;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (id)webSheetView;

@end
