
@interface EMSearchableIndexTopHitsQueryResult : NSObject {
    NSArray * _foundItems;
    NSDictionary * _foundMatchingHintsByPersistentID;
    NSDictionary * _mailRankingSignalsByPersistentID;
    NSDictionary * _matchingHintsByPersistentID;
    NSArray * _searchableItemIdentifiers;
    CSTopHitQuery * _topHitSearchQuery;
}

@property (nonatomic, copy) NSArray *foundItems;
@property (nonatomic, copy) NSDictionary *foundMatchingHintsByPersistentID;
@property (nonatomic, retain) NSDictionary *mailRankingSignalsByPersistentID;
@property (nonatomic, readonly) NSDictionary *matchingHintsByPersistentID;
@property (nonatomic, retain) NSArray *searchableItemIdentifiers;
@property (nonatomic, retain) CSTopHitQuery *topHitSearchQuery;

+ (id)log;

- (void).cxx_destruct;
- (id)foundItems;
- (id)foundMatchingHintsByPersistentID;
- (unsigned long long)getDaysSinceTheDate:(id)arg1;
- (id)initWithTopHitSearchQuery:(id)arg1 foundItems:(id)arg2 foundMatchingHintsByPersistentID:(id)arg3;
- (id)mailRankingSignalsByPersistentID;
- (id)matchingHintsByPersistentID;
- (long long)rankingIndexForConversationID:(id)arg1;
- (long long)rankingIndexForMessageLibraryID:(id)arg1;
- (id)searchableItemIdentifiers;
- (void)setFoundItems:(id)arg1;
- (void)setFoundMatchingHintsByPersistentID:(id)arg1;
- (void)setMailRankingSignalsByPersistentID:(id)arg1;
- (void)setSearchableItemIdentifiers:(id)arg1;
- (void)setTopHitSearchQuery:(id)arg1;
- (id)topHitSearchQuery;
- (void)userDidInteractWithConversationID:(id)arg1;
- (void)userDidInteractWithLibraryIdentifier:(id)arg1;

@end
