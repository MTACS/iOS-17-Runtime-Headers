
@interface PKExpiredTableViewController : UITableViewController <UITableViewDataSourcePrefetching> {
    <PKExpiredTableViewControllerCachingDelegate> * _cachingDelegate;
    PKGroupsController * _existingGroupsController;
    bool  _isAccessibilityCategory;
    UITableView * _tableView;
}

@property (nonatomic) <PKExpiredTableViewControllerCachingDelegate> *cachingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKGroupsController *existingGroupsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachingDelegate;
- (id)existingGroupsController;
- (id)initWithStyle:(long long)arg1;
- (id)mostRecentPass;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCachingDelegate:(id)arg1;
- (void)setExistingGroupsController:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellWithReuseIdentifier:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
