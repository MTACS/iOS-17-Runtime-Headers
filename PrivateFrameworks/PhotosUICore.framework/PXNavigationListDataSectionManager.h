
@interface PXNavigationListDataSectionManager : PXDataSectionManager <PXChangeObserver, PXCollectionsDataSourceManagerObserver, PXNavigationListDataSectionManagerObserver> {
    bool  _allowsEmptyDataSection;
    NSMutableDictionary * _childDataSectionIndexes;
    NSMutableDictionary * _childDataSectionManagers;
    PHCollectionList * _collectionList;
    NSMutableDictionary * _collectionsByPrivacyControllerId;
    PXPhotoKitCollectionsDataSource * _collectionsDataSource;
    PXPhotoKitCollectionsDataSourceManager * _collectionsDataSourceManager;
    long long  _indentationLevel;
    NSMapTable * _parentListItems;
    NSMutableDictionary * _privacyControllersById;
    bool  _skipAssetCountFetches;
}

@property (nonatomic) bool allowsEmptyDataSection;
@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic, retain) PXPhotoKitCollectionsDataSource *collectionsDataSource;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *collectionsDataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indentationLevel;
@property (nonatomic, readonly) bool skipAssetCountFetches;
@property (readonly) Class superclass;

+ (id)makeCollectionsDataSourceManagerForConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)_changeDetailsForItemAtIndex:(long long)arg1 childDataSection:(id)arg2 expanding:(bool)arg3;
- (bool)_isThumbnailAllowedForCollection:(id)arg1;
- (void)_requestParentForListItem:(id)arg1 hintIndex:(long long)arg2 resultHandler:(id /* block */)arg3 recursionHandler:(id /* block */)arg4;
- (bool)allowsEmptyDataSection;
- (id)auxiliaryObjectForKey:(id)arg1 dataSectionObject:(id)arg2 hintIndex:(long long)arg3;
- (void)collapseListItem:(id)arg1 hintIndex:(long long)arg2;
- (id)collectionList;
- (id)collectionsDataSource;
- (id)collectionsDataSourceIfExisting;
- (id)collectionsDataSourceManager;
- (id)createDataSection;
- (id)description;
- (void)expandListItem:(id)arg1 hintIndex:(long long)arg2;
- (long long)indentationLevel;
- (id)initWithChildDataSectionManagers:(id)arg1;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)pauseBackgroundFetching;
- (void)setAllowsEmptyDataSection:(bool)arg1;
- (void)setChangeProcessingPaused:(bool)arg1 forReason:(id)arg2;
- (void)setCollectionsDataSource:(id)arg1;
- (void)setIndentationLevel:(long long)arg1;
- (bool)skipAssetCountFetches;
- (void)startBackgroundFetchingIfNeeded;

@end
