
@interface WFAutomationListViewController : UITableViewController <HUTriggerEditorDelegate, UITableViewDataSource, UITableViewDelegate, WFAutomationListCellDelegate, WFEditAutomationCoordinatorDelegate> {
    WFDatabase * _database;
    WFEditAutomationCoordinator * _editAutomationCoordinator;
    WFHomeManager * _homeManager;
    NSArray * _sortedPersonalAutomations;
    NSArray * _tableSections;
    WFTriggerManager * _triggerManager;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) WFEditAutomationCoordinator *editAutomationCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFHomeManager *homeManager;
@property (nonatomic, copy) NSArray *sortedPersonalAutomations;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tableSections;
@property (nonatomic, retain) WFTriggerManager *triggerManager;
@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (void)automationListCell:(id)arg1 didUpdateNotificationsEnabled:(bool)arg2;
- (void)buildTableSectionsWithConfiguredTriggers:(id)arg1 homeTriggers:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)database;
- (id)editAutomationCoordinator;
- (void)editAutomationCoordinatorDidCancel:(id)arg1;
- (void)editAutomationCoordinatorDidFinish:(id)arg1;
- (void)flashAutomationForTriggerID:(id)arg1;
- (id)homeManager;
- (id)initWithDatabase:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setEditAutomationCoordinator:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setSortedPersonalAutomations:(id)arg1;
- (void)setTableSections:(id)arg1;
- (void)setTriggerManager:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (bool)showEditViewForItem:(id)arg1;
- (bool)showHomeAutomationEditorForTriggerItem:(id)arg1;
- (bool)showPersonalAutomationEditorForConfiguredTrigger:(id)arg1;
- (id)sortedPersonalAutomations;
- (id)tableSections;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (id)triggerManager;
- (id /* block */)updateHandler;
- (void)updateTableViewLayoutMargins;
- (void)updateUIWithConfiguredTriggers:(id)arg1 homeTriggers:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
