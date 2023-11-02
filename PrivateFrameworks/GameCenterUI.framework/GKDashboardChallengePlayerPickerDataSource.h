
@interface GKDashboardChallengePlayerPickerDataSource : GKCollectionDataSource {
    GKChallenge * _challenge;
    NSArray * _friendSuggestions;
    id /* block */  _inviteFriendHandler;
    NSMutableSet * _invitedFriendContactIdentifiers;
    NSMutableDictionary * _playerAchievementDates;
    NSMutableDictionary * _playerStates;
    NSArray * _players;
    NSArray * _searchPlayers;
    bool  _showingAllFriendSuggestions;
    bool  _showingFriendSuggestions;
}

@property (nonatomic, retain) GKChallenge *challenge;
@property (nonatomic, retain) NSArray *friendSuggestions;
@property (nonatomic, copy) id /* block */ inviteFriendHandler;
@property (nonatomic, retain) NSMutableSet *invitedFriendContactIdentifiers;
@property (nonatomic, retain) NSMutableDictionary *playerAchievementDates;
@property (nonatomic, retain) NSMutableDictionary *playerStates;
@property (nonatomic, retain) NSArray *players;
@property (nonatomic, retain) NSArray *searchPlayers;
@property (nonatomic, readonly) NSArray *selectedPlayers;
@property (nonatomic) bool showingAllFriendSuggestions;
@property (nonatomic) bool showingFriendSuggestions;

- (void).cxx_destruct;
- (id)addInvitedFriendContactIdentifier:(id)arg1;
- (id)challenge;
- (void)clearSelection;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)currentPlayers;
- (id)friendSuggestions;
- (long long)friendSuggestionsCount;
- (id)headerTextForSection:(long long)arg1;
- (id)indexPathForPlayer:(id)arg1;
- (id)initWithChallenge:(id)arg1;
- (id /* block */)inviteFriendHandler;
- (id)invitedFriendContactIdentifiers;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)playerAchievementDates;
- (id)playerForIndexPath:(id)arg1;
- (id)playerStates;
- (id)players;
- (double)preferredCollectionHeight;
- (id)searchKeyForSection:(long long)arg1;
- (id)searchPlayers;
- (void)searchTextHasChanged;
- (id)selectedPlayers;
- (void)setChallenge:(id)arg1;
- (void)setFriendSuggestions:(id)arg1;
- (void)setInviteFriendHandler:(id /* block */)arg1;
- (void)setInvitedFriendContactIdentifiers:(id)arg1;
- (void)setPlayerAchievementDates:(id)arg1;
- (void)setPlayerStates:(id)arg1;
- (void)setPlayers:(id)arg1;
- (void)setSearchPlayers:(id)arg1;
- (void)setShowingAllFriendSuggestions:(bool)arg1;
- (void)setShowingFriendSuggestions:(bool)arg1;
- (void)setupCollectionView:(id)arg1;
- (bool)showingAllFriendSuggestions;
- (bool)showingFriendSuggestions;

@end
