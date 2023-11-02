
@interface FBKPowerLogIndexViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {
    PLDatabaseReader * _databaseReader;
    bool  _enteringDetail;
    NSURL * _logURL;
    NSArray * _tableNames;
}

@property (retain) PLDatabaseReader *databaseReader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool enteringDetail;
@property (readonly) unsigned long long hash;
@property (retain) NSURL *logURL;
@property (readonly) Class superclass;
@property (copy) NSArray *tableNames;

+ (bool)canDisplayURL:(id)arg1;

- (void).cxx_destruct;
- (id)databaseReader;
- (bool)enteringDetail;
- (id)logURL;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)setDatabaseReader:(id)arg1;
- (void)setEnteringDetail:(bool)arg1;
- (void)setLogURL:(id)arg1;
- (void)setPowerLogURL:(id)arg1;
- (void)setTableNames:(id)arg1;
- (id)tableNames;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
