
@interface PUCurationClassificationSignalBrowserDebugViewController : UITableViewController {
    PUCurationClassificationSignalAssetBrowserDebugViewController * _assetCollectionViewController;
    NSDictionary * _countsBySignalIdentifier;
    unsigned long long  _numberOfAssets;
    NSArray * _sectionNames;
    NSDictionary * _signalConfidenceByAssetUUIDBySignalIdentifier;
    NSDictionary * _signalIdentifiersBySectionName;
    NSDictionary * _signalInfoBySignalIdentifier;
}

- (void).cxx_destruct;
- (void)_fetchSignals;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)signalIdentifiersForSection:(long long)arg1;
- (id)signalNameForUnknownSignalIdentifier:(int)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
