
@interface FPModifyFavoritesOperation : FPTransformOperation {
    bool  _isUnfavorite;
    NSArray * _ranks;
}

- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1 favoriteRanks:(id)arg2 isUnfavorite:(bool)arg3;
- (id)initWithItemsToFavorite:(id)arg1 favoriteRanks:(id)arg2;
- (id)initWithItemsToUnfavorite:(id)arg1;
- (id)replicateForItems:(id)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;

@end
