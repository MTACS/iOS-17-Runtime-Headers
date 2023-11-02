
@interface DOCModifyFavoritesOperation : FPModifyFavoritesOperation <DOCUndoableOperation> {
    bool  _isUnfavorite;
    NSArray * _oldFavorites;
    NSArray * _oldRanks;
    DOCUndoManager * _undoManager;
    NSArray * _updatedRanks;
}

@property (nonatomic, readonly) NSString *actionNameForUndoing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isUnfavorite;
@property (nonatomic, readonly) NSArray *oldFavorites;
@property (nonatomic, readonly) NSArray *oldRanks;
@property (readonly) Class superclass;
@property (nonatomic, readonly) DOCUndoManager *undoManager;
@property (nonatomic, readonly) NSArray *updatedRanks;

- (void).cxx_destruct;
- (id)actionNameForUndoing;
- (id)currentFavoriteRanks;
- (id)currentFavorites;
- (id)favoriteRanksFromItems:(id)arg1;
- (id)initWithItemsToFavorite:(id)arg1 favoriteRanks:(id)arg2 undoManager:(id)arg3;
- (id)initWithItemsToUnfavorite:(id)arg1 undoManager:(id)arg2;
- (bool)isUnfavorite;
- (id)oldFavorites;
- (id)oldRanks;
- (id)oldRanksForOperationItems;
- (id)operationForRedoing;
- (id)operationForUndoing;
- (void)registerUndo;
- (id)undoManager;
- (id)updatedRanks;

@end
