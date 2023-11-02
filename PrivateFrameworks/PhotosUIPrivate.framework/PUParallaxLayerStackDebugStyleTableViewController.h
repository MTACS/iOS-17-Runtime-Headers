
@interface PUParallaxLayerStackDebugStyleTableViewController : UITableViewController <PUParallaxLayerStackDebugStyleTableViewCellDelegate> {
    NSArray * _cachedAvailableStyles;
    PUParallaxLayerStackViewModel * _viewModel;
    PUParallaxLayerStackViewModelUpdater * _viewModelUpdater;
}

@property (nonatomic, retain) PUParallaxLayerStackViewModel *viewModel;
@property (nonatomic, retain) PUParallaxLayerStackViewModelUpdater *viewModelUpdater;

- (void).cxx_destruct;
- (id)availableStyles;
- (void)cellValueUpdated:(id)arg1;
- (id)indexPathForStyle:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setViewModelUpdater:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)viewModel;
- (id)viewModelUpdater;

@end
