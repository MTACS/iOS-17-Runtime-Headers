
@interface SFPrivacyReportTrackerDetailViewController : UITableViewController {
    UIView * _header;
    NSNumberFormatter * _numberFormatter;
    WBSKnownTrackingThirdParty * _tracker;
}

- (void).cxx_destruct;
- (void)_updateHeaderSize;
- (id)initWithTracker:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewLayoutMarginsDidChange;

@end
