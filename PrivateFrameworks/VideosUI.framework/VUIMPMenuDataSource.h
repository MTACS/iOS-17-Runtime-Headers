
@interface VUIMPMenuDataSource : VUILibraryMenuDataSource <VUIDownloadDataSourceDelegate, VUILibraryDataSourceDelegate, VUIMediaEntitiesFetchControllerDelegate> {
    NSDictionary * _categoryTypeByFetchRequestIdentifier;
    NSArray * _categoryTypes;
    VUIDownloadDataSource * _downloadDataSource;
    VUILibraryFamilyMembersDataSource * _familyDataSource;
    NSArray * _genreGroupings;
    bool  _hasDownloadDataSourceFetchCompleted;
    bool  _hasGenresDataForCheckHasItemsOption;
    bool  _hasMediaEntitiesFetchCompleted;
    NSArray * _homeShares;
    NSDictionary * _mediaEntitiesByCategoryType;
    VUIMediaEntitiesFetchController * _mediaEntitiesFetchController;
    VUIMediaLibrary * _mediaLibrary;
    VUIMediaEntitiesFetchController * _rentalsUpdateFetchController;
}

@property (nonatomic, retain) NSDictionary *categoryTypeByFetchRequestIdentifier;
@property (nonatomic, retain) NSArray *categoryTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIDownloadDataSource *downloadDataSource;
@property (nonatomic, retain) VUILibraryFamilyMembersDataSource *familyDataSource;
@property (nonatomic, retain) NSArray *genreGroupings;
@property (nonatomic) bool hasDownloadDataSourceFetchCompleted;
@property (nonatomic) bool hasGenresDataForCheckHasItemsOption;
@property (nonatomic) bool hasMediaEntitiesFetchCompleted;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *homeShares;
@property (nonatomic, retain) NSDictionary *mediaEntitiesByCategoryType;
@property (nonatomic, retain) VUIMediaEntitiesFetchController *mediaEntitiesFetchController;
@property (nonatomic, retain) VUIMediaLibrary *mediaLibrary;
@property (nonatomic, retain) VUIMediaEntitiesFetchController *rentalsUpdateFetchController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_addAccountChangedNotificationObserver;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (bool)_addOrRemoveDownloadCategoryIfNeeded;
- (bool)_addOrRemoveFamilySharingCategoryIfNeeded;
- (void)_addRentalsUpdateNotificationObserver;
- (bool)_allFetchesHaveCompleted;
- (id /* block */)_categoryTypesSortComparator;
- (id)_categoryTypesWithMediaEntitiesMap:(id)arg1 categoryTypeComparator:(id /* block */)arg2;
- (id)_categoryTypesWithOptimizedMenuDataMap:(id)arg1 categoryTypeComparator:(id /* block */)arg2;
- (id)_constructCategoryList;
- (id)_deviceMediaLibrary;
- (id)_fetchRequestsWithMediaLibrary:(id)arg1 categoryTypeMap:(id*)arg2 isInitialFetch:(bool)arg3;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_loadInitialMediaEntityShelves;
- (void)_loadMediaEntityShelvesWithInitialFetch:(bool)arg1;
- (void)_notifyDelegateFetchDidComplete;
- (void)_populateViewModelFromMeidaLibraryCategoryTypes:(id)arg1;
- (void)_refetchMediaEntityShelves;
- (void)_removeAccountChangedNotificationObserver;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (void)_removeRentalsUpdateNotificationObserver;
- (void)_updateFetchRequest:(id)arg1 isInitialFetch:(bool)arg2;
- (void)_updateRentalShelf;
- (id)categoryTypeByFetchRequestIdentifier;
- (id)categoryTypes;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)dataSourceDidFinishFetching:(id)arg1;
- (void)dealloc;
- (id)downloadDataSource;
- (void)downloadManager:(id)arg1 downloadedFetchDidFinishWithEntities:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidChange:(id)arg2;
- (id)familyDataSource;
- (id)genreGroupings;
- (bool)hasDownloadDataSourceFetchCompleted;
- (bool)hasGenresDataForCheckHasItemsOption;
- (bool)hasMediaEntitiesFetchCompleted;
- (id)homeShares;
- (id)initWithValidCategories:(id)arg1;
- (id)mediaEntitiesByCategoryType;
- (id)mediaEntitiesFetchController;
- (id)mediaLibrary;
- (void)refetch;
- (id)rentalsUpdateFetchController;
- (void)setCategoryTypeByFetchRequestIdentifier:(id)arg1;
- (void)setCategoryTypes:(id)arg1;
- (void)setDownloadDataSource:(id)arg1;
- (void)setFamilyDataSource:(id)arg1;
- (void)setGenreGroupings:(id)arg1;
- (void)setHasDownloadDataSourceFetchCompleted:(bool)arg1;
- (void)setHasGenresDataForCheckHasItemsOption:(bool)arg1;
- (void)setHasMediaEntitiesFetchCompleted:(bool)arg1;
- (void)setHomeShares:(id)arg1;
- (void)setMediaEntitiesByCategoryType:(id)arg1;
- (void)setMediaEntitiesFetchController:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setRentalsUpdateFetchController:(id)arg1;
- (void)startFetch;

@end