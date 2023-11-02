
@interface PXSharedLibraryAssistantRulesViewController : OBTableWelcomeController <PHPickerViewControllerDelegate, PXAssistantViewController, UITableViewDataSource, UITableViewDelegate> {
    OBBoldTrayButton * _continueButton;
    NSArray * _listViewItems;
    PXSharedLibraryAssistantViewModel * _viewModel;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;

- (void).cxx_destruct;
- (void)_continueWithPhotosPicker;
- (void)_continueWithPolicy:(long long)arg1;
- (void)_handlePickerResults:(id)arg1;
- (void)_updateIcon;
- (void)addLaterButtonTapped:(id)arg1;
- (id)assistantViewControllerDelegate;
- (void)continueAndSkipMovingItems;
- (void)continueButtonTapped:(id)arg1;
- (void)continueWithSelectedRuleType;
- (id)footerText;
- (id)initWithViewModel:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)viewModel;

@end
