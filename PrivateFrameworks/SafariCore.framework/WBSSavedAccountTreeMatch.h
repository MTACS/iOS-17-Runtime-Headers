
@interface WBSSavedAccountTreeMatch : NSObject {
    NSMutableDictionary * _accountStoreTreeMatchingSearchCriteria;
    NSString * _domain;
    long long  _matchLevel;
}

@property (nonatomic, readonly) NSDictionary *accountStoreTreeMatchingSearchCriteria;
@property (nonatomic, readonly, copy) NSString *domain;
@property (nonatomic, readonly) NSMutableArray *flattenedSavedAccountsFromTree;
@property (nonatomic, readonly) long long matchLevel;

- (void).cxx_destruct;
- (id)accountStoreTreeMatchingSearchCriteria;
- (id)domain;
- (id)flattenedSavedAccountsFromTree;
- (id)initWithDomain:(id)arg1 savedAccountTree:(id)arg2 matchLevel:(long long)arg3;
- (long long)matchLevel;
- (void)pruneDontSaveTrees;
- (void)pruneEmptyUsernameTrees;
- (void)pruneTreesWithoutPasswordOrMatchingPasskeyIdentifiers:(id)arg1;
- (void)pruneUsernameTreesNotMatchingPartialUsername:(id)arg1;

@end
