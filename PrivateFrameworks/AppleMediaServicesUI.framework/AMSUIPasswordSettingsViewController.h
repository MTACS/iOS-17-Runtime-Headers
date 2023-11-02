
@interface AMSUIPasswordSettingsViewController : UIViewController <AMSUIPasswordSettingsFreeDownloadsCellDelegate, AMSURLProtocolDelegate, NSURLSessionDelegate, UITableViewDataSource, UITableViewDelegate> {
    ACAccount * _account;
    NSBundle * _bundle;
    unsigned long long  _freeSetting;
    unsigned long long  _paidSetting;
    UITableView * _tableView;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, retain) NSBundle *bundle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long freeSetting;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long paidSetting;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(id /* block */)arg4;
- (id)account;
- (id)bundle;
- (void)donePressed:(id)arg1;
- (void)freeDownloadsToggle:(id)arg1 changedValue:(bool)arg2;
- (unsigned long long)freeSetting;
- (void)handleAuthenticateRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)handleDialogRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAccount:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)paidSetting;
- (void)setBundle:(id)arg1;
- (void)setFreeSetting:(unsigned long long)arg1;
- (void)setPaidSetting:(unsigned long long)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
