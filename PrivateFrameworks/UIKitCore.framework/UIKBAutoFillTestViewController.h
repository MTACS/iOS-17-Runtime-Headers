
@interface UIKBAutoFillTestViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIKBAutoFillTestArchive * _testArchive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIKBAutoFillTestArchive *testArchive;

+ (void)enumerateSubviewsOfRootView:(id)arg1 usingBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_applyNavigationItemPropertiesFromTestArchive;
- (id)initWithAutoFillTestArchive:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)testArchive;
- (void)viewDidLoad;

@end
