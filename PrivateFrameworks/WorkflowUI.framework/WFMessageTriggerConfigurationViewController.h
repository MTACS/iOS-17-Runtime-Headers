
@interface WFMessageTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFRecipientFieldViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)customSections;
- (id)displayForSelectedContacts:(id)arg1;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentNavControllerWithRootViewController:(id)arg1;
- (void)recipientViewControllerDidFinish:(id)arg1 cancelled:(bool)arg2;
- (void)showMessageContainsAlert;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (void)updateUI;
- (void)viewWillAppear:(bool)arg1;

@end
