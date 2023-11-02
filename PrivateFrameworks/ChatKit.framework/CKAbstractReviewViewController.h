
@interface CKAbstractReviewViewController : PSViewController <UITableViewDataSource, UITableViewDelegate> {
    UIBarButtonItem * _cancelEditingBarButtonItem;
    UIBarButtonItem * _deleteBarButtonItem;
    UITableView * _tableView;
    UIView * _topLineView;
}

@property (nonatomic, retain) UIBarButtonItem *cancelEditingBarButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIBarButtonItem *deleteBarButtonItem;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UIView *topLineView;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_handleCancel;
- (void)_handleDelete;
- (void)_updateNavigationItemState;
- (id)cancelEditingBarButtonItem;
- (void)dealloc;
- (id)deleteBarButtonItem;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setCancelEditingBarButtonItem:(id)arg1;
- (void)setDeleteBarButtonItem:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setTableView:(id)arg1;
- (void)setTopLineView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)topLineView;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
