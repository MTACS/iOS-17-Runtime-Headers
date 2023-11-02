
@interface WDWatchStoredDataViewController : WDSourceStoredDataViewController {
    UILabel * _messageLabel;
    bool  _watchPaired;
}

@property bool watchPaired;

- (void).cxx_destruct;
- (bool)_shouldDisplayPrivacySection;
- (void)_updateFont;
- (void)addUnpairedWatchHeaderView;
- (void)handlePairedDevicesSnapshot:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setWatchPaired:(bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTableHeaderViewForUnpairedWatch;
- (void)viewWillAppear:(bool)arg1;
- (bool)watchPaired;

@end
