
@interface PXSharedLibraryAssistantHowToViewController : OBTableWelcomeController <PXAssistantViewController, UITableViewDataSource, UITableViewDelegate> {
    PXLibraryFilterState * _libraryFilterState;
    <PXAssistantViewControllerDelegate> * assistantViewControllerDelegate;
}

@property (nonatomic) <PXAssistantViewControllerDelegate> *assistantViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateIcon;
- (id)assistantViewControllerDelegate;
- (void)continueButtonTapped:(id)arg1;
- (id)initWithLibraryFilterState:(id)arg1;
- (id)libraryFilterState;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAssistantViewControllerDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
