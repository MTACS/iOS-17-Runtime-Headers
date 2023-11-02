
@interface PUWallpaperNightlySuggestionsViewController : PUWallpaperClassListViewController {
    NSDate * _currentDate;
    PUWallpaperNightlySuggestionsDataSource * _dataSource;
    <PUWallpaperNightlySuggestionsPosterConfiguration> * _posterConfiguration;
}

@property (nonatomic, retain) <PUWallpaperNightlySuggestionsPosterConfiguration> *posterConfiguration;

- (void).cxx_destruct;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)createDataSources;
- (void)nextDate:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)posterConfiguration;
- (void)previousDate:(id)arg1;
- (void)setPosterConfiguration:(id)arg1;
- (void)viewDidLoad;

@end
