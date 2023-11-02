
@interface WFValueListViewController : WFInsetTableViewController {
    id /* block */  _completionHandler;
    UISwitch * _configSwitch;
    id /* block */  _footerHandler;
    bool  _hasSwitch;
    NSMutableArray * _sections;
    NSString * _selectedTitle;
    bool  _switchOn;
    NSString * _switchTitle;
    NSArray * _titles;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) UISwitch *configSwitch;
@property (nonatomic, copy) id /* block */ footerHandler;
@property (nonatomic) bool hasSwitch;
@property (nonatomic, retain) NSMutableArray *sections;
@property (nonatomic, retain) NSString *selectedTitle;
@property (nonatomic) bool switchOn;
@property (nonatomic, copy) NSString *switchTitle;
@property (nonatomic, retain) NSArray *titles;

- (void).cxx_destruct;
- (id)cellForTitleAtIndexPath:(id)arg1;
- (id /* block */)completionHandler;
- (id)configSwitch;
- (id /* block */)footerHandler;
- (bool)hasSwitch;
- (id)initWithTitles:(id)arg1 switchTitle:(id)arg2;
- (id)initWithTitles:(id)arg1 switchTitle:(id)arg2 appearanceProxy:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sections;
- (id)selectedTitle;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConfigSwitch:(id)arg1;
- (void)setFooterHandler:(id /* block */)arg1;
- (void)setHasSwitch:(bool)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedTitle:(id)arg1;
- (void)setSwitchOn:(bool)arg1;
- (void)setSwitchTitle:(id)arg1;
- (void)setTitles:(id)arg1;
- (bool)switchOn;
- (id)switchTitle;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)titles;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
