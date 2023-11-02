
@interface NCSupplementaryViewPrototypeRecipeContentTintingViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDataSource, UITableViewDelegate> {
    bool  _stackSubordinate;
    UITableView * _tableView;
    NSPointerArray * _weakStackViewControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)title;

- (void).cxx_destruct;
- (void)_enumerateStack:(id /* block */)arg1;
- (id)_initWithGroupingIdentifier:(id)arg1 stackSubordinate:(bool)arg2;
- (void)_setTextColor:(id)arg1;
- (void)_setTintColor:(id)arg1;
- (id)init;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
