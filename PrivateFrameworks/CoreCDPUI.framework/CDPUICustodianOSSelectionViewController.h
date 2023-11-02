
@interface CDPUICustodianOSSelectionViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    CDPContext * _cdpContext;
    CDPUICustodianOSSelectionViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_makeEventForEscapeOptionSelected:(id)arg1;
- (id)_makeViewAppearedEvent;
- (id)_offersJoinedByComma;
- (double)heightForFooterInTableView:(id)arg1;
- (id)initWithViewModel:(id)arg1 cdpContext:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (id)viewForFooterInTableView:(id)arg1;

@end
