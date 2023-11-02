
@interface PXSharedLibraryAssistantPeopleViewController : OBTableWelcomeController <PHPickerViewControllerDelegate, PXAssistantViewController, PXPeopleFlowDelegate, PXPhotoLibraryUIChangeObserver, PXSectionedDataSourceManagerObserver, UITableViewDataSource, UITableViewDelegate> {
    UITableViewCell * _buttonCell;
    OBBoldTrayButton * _continueButton;
    PXSharedLibraryIncludedPeopleDataSourceManager * _dataSourceManager;
    PXSharedLibraryIncludedPeopleTableViewCell * _peopleCell;
    UITableViewHeaderFooterView * _peopleSectionFooterView;
    UITableViewHeaderFooterView * _peopleSectionHeaderView;
    bool  _pickerWasPresentedFromContinueButton;
    PXSharedLibraryAssistantViewModel * _viewModel;
    bool  _wantsToContinueToNextStep;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (nonatomic, readonly) PXSharedLibraryIncludedPeopleDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textForFooter;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;

+ (id)_fetchedPeople:(id)arg1 sortedByLocalIdentifiers:(id)arg2;

- (void).cxx_destruct;
- (void)_advanceToNextStep;
- (void)_fixupStalePersonForUUID:(id)arg1 loneParticipantInfo:(id)arg2;
- (bool)_hasPeople;
- (bool)_isPeopleCellRepresentedAtSection:(long long)arg1;
- (void)_presentPickerForInfos:(id)arg1;
- (void)_suggestedStartDateChanged;
- (void)_updateButtonCell;
- (void)_updateContinueButton;
- (void)_updateFooterText;
- (void)_updateHeaderDetailText;
- (void)addLaterButtonTapped:(id)arg1;
- (id)alertConfigurationForIdentifyingPeopleInfos:(id)arg1 action:(id /* block */)arg2;
- (id)assistantViewControllerDelegate;
- (void)cancel:(id)arg1;
- (void)completeRulesStep;
- (void)continueButtonTapped:(id)arg1;
- (id)dataSourceManager;
- (void)done:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)peopleInfosToIdentifyInDataSource:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (void)setupLibraryChangeListening;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)textForFooter;
- (void)updateWithPerson:(id)arg1 loneParticipantInfo:(id)arg2;
- (void)viewDidLoad;
- (id)viewModel;
- (void)viewWillAppear:(bool)arg1;

@end
