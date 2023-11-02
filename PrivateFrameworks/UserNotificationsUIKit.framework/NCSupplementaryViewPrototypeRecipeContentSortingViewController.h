
@interface NCSupplementaryViewPrototypeRecipeContentSortingViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _exampleGroupIdentifiersAndBaseColors;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)title;

- (void).cxx_destruct;
- (id)_colorForSection:(unsigned long long)arg1 index:(unsigned long long)arg2;
- (id)_groupingIdentifierForSection:(unsigned long long)arg1;
- (id)init;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

@end
