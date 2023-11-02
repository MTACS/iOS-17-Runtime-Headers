
@interface HealthExperienceUI.SectionedTableViewAdaptor : NSObject <UITableViewDataSource> {
    void dataProvider;
    void tableView;
}

@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;

@end
