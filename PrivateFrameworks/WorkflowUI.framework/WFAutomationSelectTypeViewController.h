
@interface WFAutomationSelectTypeViewController : UITableViewController <UISearchResultsUpdating, UITableViewDataSource, UITableViewDelegate, WFHomeManagerEventObserver> {
    NSArray * _availableFocusModes;
    <WFAutomationSelectTypeViewControllerDelegate> * _delegate;
    WFHomeManager * _homeManager;
    UISearchController * _searchController;
    NSArray * _tableContent;
    WFTriggerManager * _triggerManager;
}

@property (nonatomic, retain) NSArray *availableFocusModes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFAutomationSelectTypeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFHomeManager *homeManager;
@property (nonatomic, readonly) UISearchController *searchController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *tableContent;
@property (nonatomic, readonly) WFTriggerManager *triggerManager;

+ (id)allKnownTriggersSortedAsInUI;
+ (unsigned long long)automationTypeForHomeManager:(id)arg1;

- (void).cxx_destruct;
- (id)allTriggerTypeGroups;
- (id)availableFocusModes;
- (id)buildTableContent;
- (void)chooseHomeAutomation:(id)arg1;
- (id)currentSections;
- (id)delegate;
- (id)homeManager;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)initWithTriggerManager:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)searchController;
- (void)setAvailableFocusModes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableContent;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)triggerForIndexPath:(id)arg1;
- (id)triggerManager;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
