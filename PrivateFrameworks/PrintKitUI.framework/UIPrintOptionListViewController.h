
@interface UIPrintOptionListViewController : UITableViewController {
    NSArray * _itemList;
    <UIPrintOptionListDelegate> * _listDelegate;
    id /* block */  _onDoneBlock;
}

@property (nonatomic, retain) NSArray *itemList;
@property (nonatomic) <UIPrintOptionListDelegate> *listDelegate;
@property (copy) id /* block */ onDoneBlock;

- (void).cxx_destruct;
- (id)initWithListDelegate:(id)arg1;
- (id)itemList;
- (id)listDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id /* block */)onDoneBlock;
- (void)setItemList:(id)arg1;
- (void)setListDelegate:(id)arg1;
- (void)setOnDoneBlock:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;

@end
