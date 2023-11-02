
@interface AXCLFCommunicationLimitController : PSListController <CNContactPickerDelegate, CNUIFavoritesEntryPickerDelegate> {
    TPFavoritesController * _favoritesController;
    CNUIFavoritesEntryPicker * _favoritesEntryPicker;
    PSSpecifier * _incomingAllContactsSpecifier;
    PSSpecifier * _incomingGroupSpecifier;
    PSSpecifier * _incomingSelectedContactsSpecifier;
    bool  _shouldAvoidReloadForNextFavoritesUpdate;
}

@property (nonatomic, readonly) NSArray *actionTypes;
@property (nonatomic, readonly) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) NSArray *communicationLimitSpecifiers;
@property (nonatomic, readonly, copy) NSString *contactPickerPrompt;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TPFavoritesController *favoritesController;
@property (nonatomic, retain) CNUIFavoritesEntryPicker *favoritesEntryPicker;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PSSpecifier *incomingAllContactsSpecifier;
@property (nonatomic) NSString *incomingCommunicationLimit;
@property (nonatomic, retain) PSSpecifier *incomingGroupSpecifier;
@property (nonatomic, readonly, copy) NSString *incomingHeaderText;
@property (nonatomic, retain) PSSpecifier *incomingSelectedContactsSpecifier;
@property (nonatomic, readonly, copy) NSString *outgoingHeaderText;
@property (nonatomic) bool shouldAvoidReloadForNextFavoritesUpdate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addFavorite:(id)arg1;
- (void)_favoritesDidChange:(id)arg1;
- (id)_favoritesEntryPickerContactForContact:(id)arg1 contactStore:(id)arg2;
- (id)_favoritesSpecifiers;
- (id)_incomingCommunicationLimitForSpecifier:(id)arg1;
- (bool)_isAllowedFavoritesEntry:(id)arg1;
- (id)_specifierForFavoritesEntry:(id)arg1;
- (id)_specifierForIncomingCommunicationLimit:(id)arg1;
- (void)_updateEditButton;
- (id)actionTypes;
- (id)actionTypesForFavoritesEntryPicker:(id)arg1;
- (id)bundleIdentifiers;
- (id)communicationLimitSpecifiers;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactPickerPrompt;
- (id)favoritesController;
- (id)favoritesEntryPicker;
- (void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2;
- (id)incomingAllContactsSpecifier;
- (id)incomingCommunicationLimit;
- (id)incomingGroupSpecifier;
- (id)incomingHeaderText;
- (id)incomingSelectedContactsSpecifier;
- (id)outgoingHeaderText;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setFavoritesController:(id)arg1;
- (void)setFavoritesEntryPicker:(id)arg1;
- (void)setIncomingAllContactsSpecifier:(id)arg1;
- (void)setIncomingCommunicationLimit:(id)arg1;
- (void)setIncomingGroupSpecifier:(id)arg1;
- (void)setIncomingSelectedContactsSpecifier:(id)arg1;
- (void)setShouldAvoidReloadForNextFavoritesUpdate:(bool)arg1;
- (bool)shouldAvoidReloadForNextFavoritesUpdate;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (long long)tableViewStyle;
- (void)viewDidLoad;

@end
