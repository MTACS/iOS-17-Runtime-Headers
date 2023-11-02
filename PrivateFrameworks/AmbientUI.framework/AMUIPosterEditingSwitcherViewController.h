
@interface AMUIPosterEditingSwitcherViewController : UIViewController <PRUIModalRemoteViewControllerDelegate> {
    PRSPosterConfiguration * _activeConfiguration;
    <AMUIPosterEditingSwitcherViewControllerDelegate> * _delegate;
    PRUIModalRemoteViewController * _remoteViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMUIPosterEditingSwitcherViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (void)handleDismiss;
- (id)initWithActiveConfiguration:(id)arg1;
- (void)modalRemoteViewController:(id)arg1 didDismissWithResponse:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
