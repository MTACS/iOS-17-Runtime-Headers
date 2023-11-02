
@interface _NCSupplementaryViewPrototypeSortingExampleViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dateModifiedText;
- (id)_titleText;
- (void)_updatedDateModified;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDateModified:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
