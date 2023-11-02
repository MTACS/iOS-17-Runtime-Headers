
@interface FASuggestionsTableViewDecorator : FATableViewDecorator <FAInviteControllerDelegate> {
    CNContactStore * _contactStore;
    FAInviteContext * _context;
    NSArray * _emergencyContacts;
    FAProfilePictureStore * _familySuggestionsPictureStore;
    NSObject<FAInviteConfigurationController> * _inviteConfigurationController;
    NSSet * _invitedHandles;
    RUIObjectModel * _objectModel;
    NSArray * _recommendedFamilyMembers;
    RUITableView * _remoteTableViewController;
    FAInviteSuggestions * _suggester;
    RemoteUIController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)shouldShowSuggestionsInPage:(id)arg1;

- (void).cxx_destruct;
- (id)accessoryViewFor:(id)arg1;
- (void)didTapInviteButtonInCell:(id)arg1;
- (id)indexFor:(id)arg1;
- (id)indexForSuggestionsSection;
- (id)initWithTableView:(id)arg1 ruiTableView:(id)arg2 pictureStore:(id)arg3 recommendations:(id)arg4 emergencyContacts:(id)arg5 context:(id)arg6 viewController:(id)arg7 suggester:(id)arg8 objectModel:(id)arg9;
- (id)inviteButtonForSuggestion;
- (void)inviteController:(id)arg1 didFinishWithStatus:(unsigned long long)arg2 recipients:(id)arg3 userInfo:(id)arg4 error:(id)arg5;
- (id)inviteSentImageForSuggestion;
- (id)relationForContact:(id)arg1;
- (void)sendSuggestionFeedbackFor:(id)arg1;
- (void)setupInviteConfiguratioControllerFor:(long long)arg1 contactHandle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSuggestionCellFor:(id)arg1;

@end
