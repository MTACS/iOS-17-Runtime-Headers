
@interface LAPSPasscodeOptionsSheetViewController : UIViewController <LAPSPasscodeOptionsViewController, UITableViewDataSource, UITableViewDelegate> {
    NSOrderedSet * _allowedPasscodeTypes;
    LAPSPasscodeOptionsViewControllerConfiguration * _config;
    <LAPSPasscodeOptionsViewControllerDelegate> * _delegate;
    long long  _selectedPasscodeTypeIndex;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAPSPasscodeOptionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_cellIdentifierForIndexPath:(id)arg1;
- (void)_changePasscodeRecoveryStatus:(id)arg1;
- (void)_changeSelectedPasscodeTypeIndex:(long long)arg1;
- (void)_close:(id)arg1;
- (double)_heightForFooterInSection:(long long)arg1;
- (double)_heightForHeaderInSection:(long long)arg1;
- (void)_setup;
- (id)delegate;
- (id)initWithConfiguration:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
