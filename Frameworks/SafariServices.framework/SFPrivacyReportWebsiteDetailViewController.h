
@interface SFPrivacyReportWebsiteDetailViewController : UITableViewController {
    NSArray * _sections;
    bool  _separatesBlockedTrackers;
    WBSTrackedFirstParty * _website;
}

@property (nonatomic) bool separatesBlockedTrackers;

- (void).cxx_destruct;
- (void)_loadSections;
- (id)initWithWebsite:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)separatesBlockedTrackers;
- (void)setSeparatesBlockedTrackers:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
