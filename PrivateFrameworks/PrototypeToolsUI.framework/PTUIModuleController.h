
@interface PTUIModuleController : UITableViewController <PTModuleObserver> {
    PTModule * _module;
    NSString * _rowTitle;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PTSettings *settings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_initWithModule:(id)arg1 presentingRow:(id)arg2;
- (void)_reloadWithModule:(id)arg1;
- (void)_updateTitle;
- (id)initWithSettings:(id)arg1;
- (id)initWithSettings:(id)arg1 presentingRow:(id)arg2;
- (void)module:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (void)module:(id)arg1 didInsertSections:(id)arg2 deleteSections:(id)arg3;
- (void)moduleDidReload:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)settings;
- (void)showActionsForRowTableViewCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;

@end
