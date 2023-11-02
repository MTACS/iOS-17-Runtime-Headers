
@interface WFSoundRecognitionTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFTableViewFooterLinkViewDelegate, WFTriggerTableViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)customSections;
- (void)footerLinkView:(id)arg1 didTapURL:(id)arg2;
- (id)footerLinkViewForTableView:(id)arg1;
- (void)handleDidBecomeActive;
- (id)infoForSection:(long long)arg1;
- (id)initWithTrigger:(id)arg1 mode:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)shouldEnableNextButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableViewCellClasses;
- (void)triggerTableViewController:(id)arg1 didFinishWithAnySelected:(bool)arg2 orSelectedOptions:(id)arg3;
- (void)triggerTableViewControllerDidCancel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
