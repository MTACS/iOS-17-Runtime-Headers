
@interface MCInstallationWarningViewController : MCUITableViewController {
    bool  _isMDMInstall;
    <MCInstallationWarningDelegate> * _warningDelegate;
    NSArray * _warnings;
}

@property (nonatomic) bool isMDMInstall;
@property (nonatomic) <MCInstallationWarningDelegate> *warningDelegate;
@property (nonatomic, retain) NSArray *warnings;

- (void).cxx_destruct;
- (void)_cancelInstallProfile;
- (void)_confirmInstallProfileIfNeeded;
- (void)_installProfile;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;
- (bool)isMDMInstall;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setIsMDMInstall:(bool)arg1;
- (void)setWarningDelegate:(id)arg1;
- (void)setWarnings:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)warningDelegate;
- (id)warnings;

@end
