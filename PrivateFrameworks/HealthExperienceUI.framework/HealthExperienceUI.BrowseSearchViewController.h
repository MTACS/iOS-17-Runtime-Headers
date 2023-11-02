
@interface HealthExperienceUI.BrowseSearchViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController <NSFetchedResultsControllerDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    void $__lazy_storage_$_searchController;
    void delegate;
    void directSearchResultProvider;
    void healthExperienceStore;
    void healthRecordsResultsDataSource;
    void healthStore;
    void pluginResultObserver;
    void predicateProvider;
    void resultsAfterHealthRecordsDataSource;
    void resultsBeforeHealthRecordsDataSource;
    void searchNoResultsObserver;
    void searchResultObserver;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didPresentSearchController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
