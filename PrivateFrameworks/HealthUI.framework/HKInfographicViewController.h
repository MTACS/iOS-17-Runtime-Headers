
@interface HKInfographicViewController : UIViewController <UITableViewDataSource> {
    NSArray * _items;
    UITableView * _tableView;
    long long  _tableViewStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_updateTableViewTopPadding;
- (id)initWithContentItems:(id)arg1;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithTextItems:(id)arg1;
- (id)items;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
