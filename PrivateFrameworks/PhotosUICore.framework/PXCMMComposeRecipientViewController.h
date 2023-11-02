
@interface PXCMMComposeRecipientViewController : UIViewController <PXChangeObserver, PXComposeRecipientTableViewControllerDelegate, PXDiagnosticsEnvironment> {
    <PXCMMActionControllerDelegate> * _actionDelegate;
    NSProgress * _actionProgress;
    UIVisualEffectView * _footerVisualEffectView;
    double  _maximumContentWidth;
    UILabel * _privacyMessageLabel;
    UIButton * _sendButton;
    PXCMMSession * _session;
    PXCMMSpecManager * _specManager;
    PXComposeRecipientTableViewController * _tableViewController;
    PXComposeRecipientTableViewModel * _tableViewModel;
    UIButton * _tapToRadarButton;
    PXUpdater * _updater;
}

@property (nonatomic) <PXCMMActionControllerDelegate> *actionDelegate;
@property (nonatomic, retain) NSProgress *actionProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIVisualEffectView *footerVisualEffectView;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumContentWidth;
@property (nonatomic, retain) UILabel *privacyMessageLabel;
@property (nonatomic, retain) UIButton *sendButton;
@property (nonatomic, readonly) PXCMMSession *session;
@property (nonatomic, readonly) PXCMMSpecManager *specManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXComposeRecipientTableViewController *tableViewController;
@property (nonatomic, retain) PXComposeRecipientTableViewModel *tableViewModel;
@property (nonatomic, retain) UIButton *tapToRadarButton;
@property (nonatomic, readonly) PXUpdater *updater;

- (void).cxx_destruct;
- (void)_handleActionButton:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_tapToRadarTapped:(id)arg1;
- (void)_updateFooter;
- (void)_updateTableView;
- (void)_updateUserInteraction;
- (id)actionDelegate;
- (id)actionProgress;
- (void)composeRecipientTableViewControllerDidChangeHeight:(id)arg1;
- (void)dealloc;
- (void)dismissPresentedViewControllerAnimated:(bool)arg1 forComposeRecipientTableViewController:(id)arg2;
- (id)footerVisualEffectView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSession:(id)arg1;
- (double)maximumContentWidth;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 forComposeRecipientTableViewController:(id)arg3;
- (id)privacyMessageLabel;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)sendButton;
- (id)session;
- (void)setActionDelegate:(id)arg1;
- (void)setActionProgress:(id)arg1;
- (void)setFooterVisualEffectView:(id)arg1;
- (void)setMaximumContentWidth:(double)arg1;
- (void)setPrivacyMessageLabel:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (void)setTableViewModel:(id)arg1;
- (void)setTapToRadarButton:(id)arg1;
- (id)specManager;
- (id)tableViewController;
- (id)tableViewModel;
- (id)tapToRadarButton;
- (id)updater;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
