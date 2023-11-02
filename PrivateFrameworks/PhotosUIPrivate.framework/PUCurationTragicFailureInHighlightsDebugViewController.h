
@interface PUCurationTragicFailureInHighlightsDebugViewController : UITableViewController {
    PUCurationTragicFailureInHighlightsGridDebugViewController * _assetCollectionViewController;
    NSConditionLock * _backgroundActivityLock;
    unsigned long long  _currentHighlightIndex;
    NSMutableArray * _highlightDatas;
    PHFetchResult * _highlights;
}

- (void).cxx_destruct;
- (void)_fetchUtilityAssetInformation;
- (void)dealloc;
- (void)goToNextHighlight:(id)arg1;
- (void)goToPreviousHighlight:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
