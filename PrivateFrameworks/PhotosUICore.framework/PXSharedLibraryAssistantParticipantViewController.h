
@interface PXSharedLibraryAssistantParticipantViewController : OBTableWelcomeController <PXAssistantViewController, PXChangeObserver, PXSharedLibraryParticipantTableViewControllerDelegate> {
    OBLinkTrayButton * _addLaterButton;
    PXSharedLibraryAssistantViewModel * _assistantViewModel;
    PXSharedLibraryAssistantParticipantViewModel * _participantViewModel;
    PXSharedLibraryParticipantTableViewController * _tableViewController;
    NSArray * _tableViewLayoutConstraints;
    OBTrayButton * _titleButton;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *assistantViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXSharedLibraryAssistantParticipantViewModel *participantViewModel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueAssistant;
- (void)_updateButtonsAppearance;
- (void)_updateIcon;
- (void)_updateTableViewLayoutConstraints;
- (void)addLaterButtonTapped:(id)arg1;
- (id)assistantViewControllerDelegate;
- (id)assistantViewModel;
- (void)continueButtonTapped:(id)arg1;
- (void)dismissPresentedViewControllerAnimated:(bool)arg1 forSharedLibraryParticipantTableViewController:(id)arg2;
- (id)initWithAssistantViewModel:(id)arg1 participantViewModel:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)participantViewModel;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 forSharedLibraryParticipantTableViewController:(id)arg3;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (void)sharedLibraryParticipantTableViewControllerDidChangeHeight:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
