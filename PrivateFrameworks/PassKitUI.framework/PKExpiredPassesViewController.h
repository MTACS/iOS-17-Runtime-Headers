
@interface PKExpiredPassesViewController : PKExpiredTableViewController <PKExpiredTableViewControllerCachingDelegate> {
    UIBarButtonItem * _cancelButton;
    long long  _currentEditingStyle;
    <PKExpiredPassesViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButton;
    UIBarButtonItem * _editButton;
    NSArray * _expiredSectionPasses;
    UIView * _footerView;
    PKGroupsController * _groupsController;
    NSMutableDictionary * _locationStringsForPassUniqueIDs;
    UIBarButtonItem * _selectButton;
    long long  _selectedPassesCount;
    UILabel * _selectedPassesLabel;
    UITableView * _tableView;
    PKPass * _viewingPass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)detailTextStringForPass:(id)arg1;

- (void).cxx_destruct;
- (void)_applyDeletionOrRecovery;
- (void)_cancel;
- (void)_deletePassPressed;
- (void)_done;
- (void)_edit;
- (id)_hyperlinkFooterView;
- (void)_recoverPassPressed;
- (void)_select;
- (id)_selectedExpiredPassesString;
- (void)_updateSelectedPassesText;
- (void)_updateTitles;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withPass:(id)arg3;
- (void)deletePass:(id)arg1 atIndexPath:(id)arg2;
- (id)indexPathOfExpiredPassWithUniqueID:(id)arg1;
- (id)initWithExistingGroupsController:(id)arg1 delegate:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (id)passAtIndexPath:(id)arg1;
- (bool)passExistsWithUniqueIdentifier:(id)arg1;
- (void)prefetchItemsAtIndexPaths:(id)arg1;
- (void)recoverPass:(id)arg1 atIndexPath:(id)arg2;
- (void)removeExpiredSectionPassWithUniqueID:(id)arg1 isDeletion:(bool)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableViewDidUpdateSelection:(id)arg1;
- (id)viewControllerForRowAtIndexPath:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
