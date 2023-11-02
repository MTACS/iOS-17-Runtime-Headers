
@interface PUDebugImageTableViewController : UITableViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _tableData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) NSArray *tableData;

- (void).cxx_destruct;
- (id)jobNumberFromPath:(id)arg1;
- (id)pidFromPath:(id)arg1;
- (void)setTableData:(id)arg1;
- (id)tableData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
