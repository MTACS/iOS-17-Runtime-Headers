
@interface SFSharedAccountsGroupInvitationViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    OBTrayButton * _acceptButton;
    OBTrayButton * _declineButton;
    <SFSharedAccountsGroupInvitationViewControllerDelegate> * _delegate;
    KCSharingGroup * _group;
    NSArray * _groupMembersData;
    unsigned long long  _persona;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFSharedAccountsGroupInvitationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) KCSharingGroup *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_acceptButtonSelected;
- (void)_addJoinAndCancelButtonsToButtonTray;
- (void)_addLoadingIndicatorAndMakeButtonsInactive;
- (void)_cancelButtonSelected;
- (void)_declineButtonSelected;
- (void)_setBackgroundColorOnTableViewHeaderFooterView:(id)arg1;
- (id)delegate;
- (id)group;
- (id)initWithGroup:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidLoad;

@end
