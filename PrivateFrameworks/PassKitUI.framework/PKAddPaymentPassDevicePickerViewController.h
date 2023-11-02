
@interface PKAddPaymentPassDevicePickerViewController : UITableViewController {
    PKAddPaymentPassRequestConfiguration * _configuration;
    <PKAddPaymentPassDevicePickerDelegate> * _delegate;
    PKTableHeaderView * _headerView;
    bool  _sentViewHasAppearedEvent;
    bool  _viewHasAppeared;
    NSArray * _webServices;
}

@property (nonatomic) <PKAddPaymentPassDevicePickerDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPaymentWebServices:(id)arg1 configuration:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (void)noteNavigationUserInterfaceDidDisappear;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadContentFromWebServices;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
