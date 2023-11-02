
@interface PXSharedLibraryAssistantReviewParticipantsViewController : OBTableWelcomeController <PXAssistantViewController, PXChangeObserver, PXSharedLibraryParticipantTableViewControllerDelegate> {
    PXSharedLibraryAssistantParticipantViewModel * _participantViewModel;
    PXRoundProgressView * _progressView;
    OBLinkTrayButton * _shareButton;
    long long  _shareButtonTransport;
    OBBoldTrayButton * _shareInMessagesButton;
    NSProgress * _shareProgress;
    UIActivityIndicatorView * _spinnerView;
    PXSharedLibraryStatusProvider * _statusProvider;
    PXSharedLibraryParticipantTableViewController * _tableViewController;
    NSArray * _tableViewLayoutConstraints;
    PXSharedLibraryAssistantViewModel * _viewModel;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldHideBackButton;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;

- (void).cxx_destruct;
- (void)_cancelShareIfInProgress;
- (void)_finishAssistantWithInvitationTransport:(long long)arg1 sourceItem:(id)arg2;
- (void)_setIsProcessing:(bool)arg1;
- (void)_updateActionButtons;
- (void)_updateCaptionText;
- (void)_updateHeaderDetailText;
- (void)_updateIcon;
- (void)_updateNavigationItem;
- (void)_updateProgress;
- (void)_updateTableViewInteractability;
- (void)_updateTableViewLayoutConstraints;
- (id)assistantViewControllerDelegate;
- (void)dismissPresentedViewControllerAnimated:(bool)arg1 forSharedLibraryParticipantTableViewController:(id)arg2;
- (id)initWithViewModel:(id)arg1 participantViewModel:(id)arg2 sharedLibraryStatusProvider:(id)arg3;
- (void)inviteButtonTapped:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 forSharedLibraryParticipantTableViewController:(id)arg3;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)sharedLibraryParticipantTableViewControllerDidChangeHeight:(id)arg1;
- (bool)shouldHideBackButton;
- (id)statusProvider;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;

@end
