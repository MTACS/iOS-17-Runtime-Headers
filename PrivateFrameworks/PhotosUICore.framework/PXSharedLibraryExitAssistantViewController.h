
@interface PXSharedLibraryExitAssistantViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    OBLinkTrayButton * _cancelButton;
    NSString * _contributedOnlyCountsString;
    bool  _currentUserIsOwner;
    <PXSharedLibraryExitAssistantViewControllerDelegate> * _delegate;
    bool  _disableControlsWithBusyIndicator;
    OBBoldTrayButton * _exitButton;
    long long  _exitRetentionPolicy;
    NSString * _keepAllCountsString;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSharedLibraryExitAssistantViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableControlsWithBusyIndicator;
@property (nonatomic, readonly) <UIPopoverPresentationControllerSourceItem> *exitButtonSourceItem;
@property (nonatomic) long long exitRetentionPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateCancelButton;
- (void)_updateExitButton;
- (void)_updateIcon;
- (void)_updateTableView;
- (void)cancelButtonTapped:(id)arg1;
- (id)delegate;
- (bool)disableControlsWithBusyIndicator;
- (id)exitButtonSourceItem;
- (void)exitButtonTapped:(id)arg1;
- (long long)exitRetentionPolicy;
- (id)initWithOwnerAsCurrentUser:(bool)arg1 keepAllCountsString:(id)arg2 contributedOnlyCountsString:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDisableControlsWithBusyIndicator:(bool)arg1;
- (void)setExitRetentionPolicy:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;

@end
