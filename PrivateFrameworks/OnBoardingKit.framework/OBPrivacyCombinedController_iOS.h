
@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController <OBNavigationBarTitleTransistor, UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    NSArray * _bundles;
    bool  _isUnifiedAbout;
    NSArray * _privacyFlowGroups;
}

@property (nonatomic, retain) NSArray *bundles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isUnifiedAbout;
@property (retain) NSArray *privacyFlowGroups;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_privacyFlowForIndexPath:(id)arg1;
- (id)bundles;
- (id)initWithBundles:(id)arg1;
- (bool)isUnifiedAbout;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)privacyFlowGroups;
- (void)setBundles:(id)arg1;
- (void)setCustomTintColor:(id)arg1;
- (void)setIsUnifiedAbout:(bool)arg1;
- (void)setPrivacyFlowGroups:(id)arg1;
- (void)showPrivacyGateway:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
