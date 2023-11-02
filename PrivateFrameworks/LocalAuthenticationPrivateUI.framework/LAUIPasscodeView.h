
@interface LAUIPasscodeView : UIViewController <LAUIDelegate> {
    LAContext * _context;
    <LAUIDelegate> * _originalDelegate;
    UIViewController<LAUIPasscodeService> * _remoteVC;
    bool  _shouldBecomeFirstResponder;
    bool  _shouldPresentUI;
}

- (void).cxx_destruct;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appDidBecomeInactive:(id)arg1;
- (void)_prepareRemoteView;
- (void)_presentRemoteView;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 shouldPresentUI:(bool)arg2;
- (void)loadView;
- (bool)resignFirstResponder;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
