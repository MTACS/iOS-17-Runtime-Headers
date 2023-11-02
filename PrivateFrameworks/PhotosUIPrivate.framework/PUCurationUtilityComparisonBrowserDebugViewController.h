
@interface PUCurationUtilityComparisonBrowserDebugViewController : UITableViewController {
    PUPhotosAlbumViewController * _assetCollectionViewController;
    NSMutableArray * _isUtilityAndWas;
    NSMutableArray * _isUtilityButWasnt;
    NSMutableArray * _isUtilityForMemoriesButNotUtility;
    NSMutableArray * _wasUtilityButIsnt;
}

- (void).cxx_destruct;
- (void)_fetchUtilityAssetInformation;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end
