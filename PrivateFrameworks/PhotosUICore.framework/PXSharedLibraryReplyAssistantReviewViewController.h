
@interface PXSharedLibraryReplyAssistantReviewViewController : OBWelcomeController <PXAssistantViewController, PXChangeObserver> {
    OBBoldTrayButton * _movePhotosButton;
    PXSharedLibraryStatusProvider * _statusProvider;
    PXSharedLibraryAssistantViewModel * _viewModel;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) OBBoldTrayButton *movePhotosButton;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;

- (void).cxx_destruct;
- (void)_setIsProcessing:(bool)arg1;
- (void)_updateHeaderText;
- (void)_updateIcon;
- (void)acceptInvitation;
- (id)assistantViewControllerDelegate;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithViewModel:(id)arg1 sharedLibraryStatusProvider:(id)arg2;
- (void)moveButtonTapped:(id)arg1;
- (id)movePhotosButton;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (id)statusProvider;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)viewModel;

@end
