
@interface CACCustomCommandApplicationViewController : UITableViewController {
    NSDictionary * _applicationIdentifiersToNames;
    CACSpokenCommandItem * _commandItem;
    <CACCustomCommandApplicationViewControllerDelegate> * _delegate;
    NSArray * _sortedIdentifiers;
    NSArray * _sortedNames;
}

@property (nonatomic, retain) NSDictionary *applicationIdentifiersToNames;
@property (nonatomic, retain) CACSpokenCommandItem *commandItem;
@property (nonatomic) <CACCustomCommandApplicationViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSArray *sortedIdentifiers;
@property (nonatomic, retain) NSArray *sortedNames;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)applicationIdentifiersToNames;
- (id)commandItem;
- (id)delegate;
- (id)init;
- (bool)isModalInPresentation;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setApplicationIdentifiersToNames:(id)arg1;
- (void)setCommandItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSortedIdentifiers:(id)arg1;
- (void)setSortedNames:(id)arg1;
- (id)sortedIdentifiers;
- (id)sortedNames;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
