
@interface CKMessageTypeSearchController : CKSearchController {
    bool  _gotResults;
    NSSet * _intermediaryResults;
    NSMutableSet * _itemsVerifiedOnDiskCache;
    NSString * _priorQueryIdentifier;
    NSArray * _resultsToCheck;
    bool  _searchTerminated;
    IMTimingCollection * _timingCollection;
}

@property (nonatomic) bool gotResults;
@property (nonatomic, retain) NSSet *intermediaryResults;
@property (nonatomic, retain) NSMutableSet *itemsVerifiedOnDiskCache;
@property (nonatomic, retain) NSString *priorQueryIdentifier;
@property (nonatomic, retain) NSArray *resultsToCheck;
@property (nonatomic) bool searchTerminated;
@property (nonatomic, retain) IMTimingCollection *timingCollection;

+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)timeRankedQueries;
+ (bool)useRecencyRankedSearchForMode:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_asyncCheckIfResultsExistOnDisk:(id)arg1 firstBatch:(bool)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })additionalGroupInsets;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (void)checkIfResultsExistOnDiskAndNotify:(id)arg1;
- (id /* block */)createFoundItemsHandler;
- (void)deleteAttachmentForResult:(id)arg1;
- (Class)footerClass;
- (void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3;
- (bool)gotResults;
- (id)intermediaryResults;
- (bool)isTokenizationSearchController;
- (id)itemProviderForSearchResult:(id)arg1;
- (id)itemsVerifiedOnDiskCache;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)menuElementsForResult:(id)arg1 atRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)postProcessAndUpdateResults:(id)arg1;
- (id)priorQueryIdentifier;
- (id)queryResultsForItems:(id)arg1;
- (id)rankingQueriesWithText:(id)arg1;
- (void)removeFromCache:(id)arg1;
- (id)resultsToCheck;
- (void)searchEnded;
- (bool)searchTerminated;
- (unsigned long long)searchTokenContentType;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (void)sendSyndicationActionForResult:(id)arg1 actionType:(unsigned char)arg2;
- (void)setGotResults:(bool)arg1;
- (void)setIntermediaryResults:(id)arg1;
- (void)setItemsVerifiedOnDiskCache:(id)arg1;
- (void)setPriorQueryIdentifier:(id)arg1;
- (void)setResultsToCheck:(id)arg1;
- (void)setSearchTerminated:(bool)arg1;
- (void)setTimingCollection:(id)arg1;
- (id)timingCollection;
- (id)tokenQueryStringForSearchController:(id)arg1;
- (bool)wantsDeleteAction;
- (bool)wantsFooterSection;
- (id)zkwFilterQueries;

@end
