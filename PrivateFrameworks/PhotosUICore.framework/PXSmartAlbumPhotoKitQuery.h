
@interface PXSmartAlbumPhotoKitQuery : NSObject <PXFetchResultCountObserverDelegate, PXSmartAlbumConditionDelegate, PXSmartAlbumQuery> {
    PHAssetCollection * _albumToEdit;
    bool  _canPersistChanges;
    PHCollectionList * _collectionList;
    NSMutableArray * _conditions;
    PXLabeledValue * _conjunctionValue;
    NSArray * _conjunctionValues;
    <PXSmartAlbumQueryDelegate> * _delegate;
    PXSmartAlbumPhotoKitEditingContext * _editingContext;
    PXFetchResultCountObserver * _fetchResultCountObserver;
    PHPhotoLibrary * _photoLibrary;
    PLQuery * _query;
    NSString * _statusString;
    NSString * _title;
}

@property (nonatomic) bool canPersistChanges;
@property (nonatomic, retain) NSArray *conditions;
@property (nonatomic, retain) PXLabeledValue *conjunctionValue;
@property (nonatomic, readonly) NSArray *conjunctionValues;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSmartAlbumQueryDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *statusString;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (void)_createSmartAlbumWithTitle:(id)arg1 inCollectionList:(id)arg2 query:(id)arg3 photoLibrary:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)_editSmartAlbum:(id)arg1 title:(id)arg2 query:(id)arg3 completionHandler:(id /* block */)arg4;
+ (id)queryWithSmartAlbum:(id)arg1 collectionList:(id)arg2 photoLibrary:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_initWithSmartAlbum:(id)arg1 collectionList:(id)arg2 photoLibrary:(id)arg3 query:(id)arg4 editingContext:(id)arg5 conditions:(id)arg6;
- (void)_updateCanPersistChanges;
- (void)_updateFetchResultCountObserver;
- (void)_updateQueryFromConditions;
- (void)_updateStatusString;
- (id)addNewConditionAfterCondition:(id)arg1;
- (bool)canPersistChanges;
- (void)conditionDidChange:(id)arg1;
- (id)conditions;
- (id)conjunctionValue;
- (id)conjunctionValues;
- (id)delegate;
- (void)fetchResultCountObserver:(id)arg1 didChangeFetchResultCount:(long long)arg2;
- (id)init;
- (void)persistChangesWithCompletion:(id /* block */)arg1;
- (void)removeCondition:(id)arg1;
- (id)replaceCondition:(id)arg1 withConditionOfType:(long long)arg2;
- (void)setCanPersistChanges:(bool)arg1;
- (void)setConditions:(id)arg1;
- (void)setConjunctionValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setStatusString:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)statusString;
- (id)title;

@end
