
@interface NCSupplementaryViewPrototypeRecipeMenuViewController : NCSupplementaryViewPrototypeRecipeViewController <NCNotificationListBaseComponent, UITableViewDataSource, UITableViewDelegate> {
    UITableView * _tableView;
    NSArray * _viewControllers;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
