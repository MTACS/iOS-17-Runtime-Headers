
@interface PKEditGroupViewController : PKEditTableViewController <PKEditPassesDetailsResponder, PKGroupDelegate> {
    <PKEditGroupViewControllerDelegate> * _delegate;
    UIBarButtonItem * _deleteToolbarItem;
    long long  _editStyle;
    UIBarButtonItem * _flexibleSpace;
    PKGroup * _group;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSizeNeeded;
    bool  _isForWatch;
    <PKGroupDelegate> * _savedDelegate;
    UITableView * _tableView;
    PKPass * _viewingPass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deleteAllPassesInGroup;
- (void)_deleteButtonPressed;
- (void)_presentAlertForUpdatedExpressPass:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withPass:(id)arg3;
- (void)dealloc;
- (id)group;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)initWithGroup:(id)arg1 existingGroupsController:(id)arg2 style:(long long)arg3 placeholders:(id)arg4 isForWatch:(bool)arg5 delegate:(id)arg6;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (id)passAtIndexPath:(id)arg1;
- (bool)passExistsWithUniqueIdentifier:(id)arg1;
- (void)prefetchItemsAtIndexPaths:(id)arg1;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
