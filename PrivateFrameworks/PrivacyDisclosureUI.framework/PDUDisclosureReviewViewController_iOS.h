
@interface PDUDisclosureReviewViewController_iOS : UITableViewController <UITableViewDataSource, UITableViewDelegate> {
    NSBundle * _bundle;
    <PDUDisclosureReviewViewControllerDelegate> * _delegate;
    NSArray * _descriptions;
    bool  _isConfigured;
    NSString * _obkBundleID;
    NSArray * _titles;
    unsigned long long  _variant;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PDUDisclosureReviewViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)aboutPrivacyTapped;
- (void)configureForAlert;
- (void)configureForSettings;
- (id)delegate;
- (void)doneTapped;
- (id)footerForSettings;
- (id)headerForAlert;
- (id)headerForSettings;
- (id)initWithBundle:(id)arg1 variant:(unsigned long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)preferredUserInterfaceStyle;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
