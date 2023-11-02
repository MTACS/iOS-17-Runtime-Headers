
@interface SFAddSavedAccountViewController : UITableViewController <SFAccountHeaderViewCellDelegate, SFAccountNoteTableViewCellDelegate, UITextFieldDelegate> {
    UIBarButtonItem * _cancelBarButtonItem;
    <SFAddSavedAccountViewControllerDelegate> * _delegate;
    bool  _didPreFillAndFocusFields;
    UIBarButtonItem * _doneBarButtonItem;
    NSString * _groupID;
    SFAccountNoteTableViewCell * _notesCell;
    NSString * _notesForEditing;
    NSString * _password;
    SFEditableTableViewCell * _passwordCell;
    bool  _shouldPreFillStrongPassword;
    NSString * _suggestedDomain;
    SFAccountHeaderViewCell * _titleCell;
    NSString * _titleForEditing;
    SFEditableTableViewCell * _userCell;
    SFEditableTableViewCell * _websiteCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAddSavedAccountViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldPreFillStrongPassword;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attemptToSavePassword;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (void)_doneBarButtonItemTapped:(id)arg1;
- (void)_preFillStrongPasswordIfRequested;
- (void)_savePasswordAndDismiss;
- (void)_textFieldChanged:(id)arg1;
- (void)_updateDoneButtonEnabledState;
- (void)_updateHeaderViewCell;
- (void)_updateIcon;
- (void)_updateIconForCell:(id)arg1;
- (void)_updateTextInputSuggestionsForPasswordField;
- (void)_updateTextInputSuggestionsForUserNameField;
- (void)_updateTextSuggestionsForTextField:(id)arg1;
- (void)accountDetailHeaderViewCell:(id)arg1 titleTextFieldDidChange:(id)arg2;
- (id)delegate;
- (id)initWithGroupID:(id)arg1;
- (id)initWithSuggestedDomain:(id)arg1;
- (id)initWithSuggestedDomain:(id)arg1 password:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)returnKeyActivatedInAccountDetailHeaderViewCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldPreFillStrongPassword:(bool)arg1;
- (bool)shouldPreFillStrongPassword;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updatedIconIsAvailableForDomain:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
