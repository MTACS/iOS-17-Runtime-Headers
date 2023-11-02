
@interface UIDebuggingInformationVCDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray * _data;
    UIViewController * _inspectedVC;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *inspectedVC;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateDataAndReload:(bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inspectVC:(id)arg1;
- (id)inspectedVC;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setInspectedVC:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
