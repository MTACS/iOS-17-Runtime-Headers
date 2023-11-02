
@interface _UIPrototypingMenuViewController : UIViewController <UIDebuggingInformationViewController, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _allSettings;
    NSString * _domain;
    _UIContentUnavailableView * _noContentView;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSArray *allSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIContentUnavailableView *noContentView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_reloadSettings:(id)arg1;
- (void)_resetSettings:(id)arg1;
- (id)allSettings;
- (id)domain;
- (void)loadView;
- (id)noContentView;
- (void)setAllSettings:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
