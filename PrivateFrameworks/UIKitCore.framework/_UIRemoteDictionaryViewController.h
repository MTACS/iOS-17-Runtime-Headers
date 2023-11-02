
@interface _UIRemoteDictionaryViewController : UITableViewController {
    NSArray * _availableDictionaries;
    _UIDictionaryManager * _dictionaryAssetManager;
    NSMutableDictionary * _downloadingAssets;
}

@property (nonatomic, retain) _UIDictionaryManager *dictionaryAssetManager;
@property (nonatomic, retain) NSMutableDictionary *downloadingAssets;

- (void).cxx_destruct;
- (id)_downloadButton;
- (void)_handleDownloadButton:(id)arg1;
- (void)_startDownloadForDictionary:(id)arg1;
- (id)dictionaryAssetManager;
- (id)downloadingAssets;
- (id)initWithStyle:(long long)arg1;
- (void)setDictionaryAssetManager:(id)arg1;
- (void)setDownloadingAssets:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end