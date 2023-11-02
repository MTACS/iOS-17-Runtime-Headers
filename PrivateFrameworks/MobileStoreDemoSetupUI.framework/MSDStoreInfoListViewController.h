
@interface MSDStoreInfoListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    <MSDStoreInfoListViewControllerDelegate> * _delegate;
    NSArray * _storeList;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <MSDStoreInfoListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *storeList;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_close:(id)arg1;
- (id)delegate;
- (id)initWithStoreInfoList:(id)arg1 andDelegate:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStoreList:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)storeList;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
