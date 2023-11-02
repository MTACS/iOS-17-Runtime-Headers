
@interface WFEmailTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFRecipientFieldViewControllerDelegate, WFTriggerTableViewControllerDelegate> {
    NSArray * _allAccounts;
    UIViewController * _recipientFieldViewController;
    UIViewController * _senderFieldViewController;
    bool  _showingAccounts;
    bool  _showingRecipients;
}

@property (nonatomic, retain) NSArray *allAccounts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *recipientFieldViewController;
@property (nonatomic) UIViewController *senderFieldViewController;
@property (nonatomic) bool showingAccounts;
@property (nonatomic) bool showingRecipients;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accountFromAccountIdentifier:(id)arg1;
- (id)allAccounts;
- (id)customSections;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (id)recipientFieldViewController;
- (void)recipientViewControllerDidFinish:(id)arg1 cancelled:(bool)arg2;
- (id)senderFieldViewController;
- (void)setAllAccounts:(id)arg1;
- (void)setRecipientFieldViewController:(id)arg1;
- (void)setSenderFieldViewController:(id)arg1;
- (void)setShowingAccounts:(bool)arg1;
- (void)setShowingRecipients:(bool)arg1;
- (void)setUpAccounts;
- (void)showSubjectContainsAlert;
- (bool)showingAccounts;
- (bool)showingRecipients;
- (id)supportedAccountTypeIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (void)triggerTableViewController:(id)arg1 didFinishWithAnySelected:(bool)arg2 orSelectedOptions:(id)arg3;
- (void)triggerTableViewControllerDidCancel:(id)arg1;
- (void)updateUI;
- (void)viewWillAppear:(bool)arg1;

@end
