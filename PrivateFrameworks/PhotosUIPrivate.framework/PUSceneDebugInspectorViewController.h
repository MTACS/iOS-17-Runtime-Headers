
@interface PUSceneDebugInspectorViewController : UITableViewController <UISearchResultsUpdating> {
    NSArray * _groupedSceneViewModelTitles;
    NSDictionary * _groupedSceneViewModels;
    UIView * _loadingContentView;
    PFSceneTaxonomy * _sceneTaxonomy;
    NSArray * _sceneViewModelsAll;
    NSArray * _sceneViewModelsSearched;
    UIBarButtonItem * _shareButton;
    UIBarButtonItem * _sortButton;
}

@property (nonatomic, readonly) NSArray *currentSceneViewModels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *groupedSceneViewModelTitles;
@property (nonatomic, copy) NSDictionary *groupedSceneViewModels;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *loadingContentView;
@property (nonatomic, copy) NSArray *sceneViewModelsAll;
@property (nonatomic, copy) NSArray *sceneViewModelsSearched;
@property (nonatomic, readonly) UIBarButtonItem *shareButton;
@property (nonatomic, readonly) UIBarButtonItem *sortButton;
@property (readonly) Class superclass;

+ (id)_assetGridViewControllerForViewModel:(id)arg1 interfaceIdiom:(long long)arg2;
+ (id)_commaSeparatedValueRepresentation:(id)arg1;
+ (bool)_isAscendingForSortOrder:(unsigned long long)arg1;
+ (id)_keyForSortOrder:(unsigned long long)arg1;
+ (id)_sectionTitleForSceneViewModel:(id)arg1 sortOrder:(unsigned long long)arg2;
+ (id)_shortTitlesForSectionTitles:(id)arg1 SortOrder:(unsigned long long)arg2;
+ (id)_sortedSceneViewModels:(id)arg1 sortOrder:(unsigned long long)arg2;
+ (id)_titleForSortOrder:(unsigned long long)arg1;
+ (id)highestConfidenceForAsset:(id)arg1 sceneIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)_reloadTableViewByGroupingViewModels:(id)arg1 sortOrder:(unsigned long long)arg2;
- (id)currentSceneViewModels;
- (void)didSelectDoneButton:(id)arg1;
- (void)didSelectShareButton:(id)arg1;
- (void)didSelectSortButton:(id)arg1;
- (id)groupedSceneViewModelTitles;
- (id)groupedSceneViewModels;
- (id)loadingContentView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sceneTaxonomy;
- (id)sceneViewModelsAll;
- (id)sceneViewModelsSearched;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setGroupedSceneViewModelTitles:(id)arg1;
- (void)setGroupedSceneViewModels:(id)arg1;
- (void)setSceneViewModelsAll:(id)arg1;
- (void)setSceneViewModelsSearched:(id)arg1;
- (id)shareButton;
- (id)sortButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
