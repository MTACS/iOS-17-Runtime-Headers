
@interface PUAudioClassificationBrowserDebugViewController : UITableViewController {
    PUAudioClassificationAssetBrowserDebugViewController * _assetCollectionViewController;
    NSMutableDictionary * _assetsByAudioClassificationName;
    NSArray * _audioClassificationNames;
}

- (void).cxx_destruct;
- (void)_fetchAudioClassifications;
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
