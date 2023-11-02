
@interface PUWallpaperNightlySuggestionsPosterConfigurationBrowserViewController : UITableViewController {
    PUWallpaperNightlySuggestionsPosterConfiguration * _customConfiguration;
    bool  _isPresentingCustomPosterConfigurationSettings;
    NSArray * _persons;
    NSArray * _posterConfigurations;
    PUWallpaperNightlySuggestionsViewController * _suggestionViewController;
}

- (void).cxx_destruct;
- (void)_doneEditingSettings:(id)arg1;
- (void)_setIncludeCityscapes:(id)arg1;
- (void)_setIncludeLandscapes:(id)arg1;
- (void)_setIncludePets:(id)arg1;
- (void)doCustomPosterConfiguration;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
