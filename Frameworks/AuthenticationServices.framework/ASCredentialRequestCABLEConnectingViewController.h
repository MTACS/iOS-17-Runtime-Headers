
@interface ASCredentialRequestCABLEConnectingViewController : ASCredentialRequestPaneViewController {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _informativeTextLabel;
    NSTimer * _informativeTextTimer;
}

- (void).cxx_destruct;
- (id)_connectingText;
- (id)_informativeText;
- (id)_informativeTextFont;
- (void)_setUpInformativeTextLabel;
- (void)_showInformativeText;
- (void)_startInformativeTextTimerIfNeeded;
- (id)initRequiringTableView:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
