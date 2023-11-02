
@interface HUAddPersonRoleViewController : OBTableWelcomeController <HUPresentationDelegate, HUPresentationDelegateHost, UITableViewDataSource, UITableViewDelegate> {
    HMHome * _home;
    HFPinCodeManager * _pinCodeManager;
    <HUPresentationDelegate> * presentationDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFPinCodeManager *pinCodeManager;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_disableAddGuest;
- (void)cancelButtonPressed:(id)arg1;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(bool)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pinCodeManager;
- (id)presentationDelegate;
- (void)setHome:(id)arg1;
- (void)setPinCodeManager:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
