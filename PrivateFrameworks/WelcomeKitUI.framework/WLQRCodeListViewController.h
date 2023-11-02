
@interface WLQRCodeListViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate> {
    unsigned long long  _attempts;
    NSArray * _qrcodes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *qrcodes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonTapped:(id)arg1;
- (id)qrcodes;
- (void)setQrcodes:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
