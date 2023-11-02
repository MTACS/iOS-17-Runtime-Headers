
@interface GKDashboardMultiplayerPickerSearchDataSource : GKCollectionDataSource {
    NSArray * _allPlayers;
    long long  _maxSelectable;
    NSMutableDictionary * _playerStates;
    UISearchBar * _searchBar;
    NSArray * _searchPlayers;
    bool  _searching;
}

@property (nonatomic, copy) NSArray *allPlayers;
@property (nonatomic, readonly) long long maxSelectable;
@property (nonatomic, retain) NSMutableDictionary *playerStates;
@property (nonatomic) UISearchBar *searchBar;
@property (nonatomic, copy) NSArray *searchPlayers;
@property (getter=isSearching, nonatomic) bool searching;
@property (nonatomic, readonly) NSArray *selectedPlayers;

- (void).cxx_destruct;
- (id)allPlayers;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)initWithSearchPlayers:(id)arg1 maxSelectable:(long long)arg2;
- (bool)isSearching;
- (long long)itemCount;
- (long long)maxSelectable;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)playerStates;
- (double)preferredCollectionHeight;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchBar;
- (id)searchKeyForSection:(long long)arg1;
- (id)searchPlayers;
- (void)searchTextHasChanged;
- (id)selectedPlayers;
- (void)setAllPlayers:(id)arg1;
- (void)setPlayerStates:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchPlayers:(id)arg1;
- (void)setSearching:(bool)arg1;
- (void)setupCollectionView:(id)arg1;

@end
