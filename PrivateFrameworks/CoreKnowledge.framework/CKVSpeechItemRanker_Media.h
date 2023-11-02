
@interface CKVSpeechItemRanker_Media : CKVSpeechItemRanker {
    unsigned long long  _artistLimit;
    NSDictionary * _itemIdToRank;
    unsigned long long  _playableLimit;
    NSURL * _rankedItemCacheDirectory;
    NSString * _trialMediaRankingStrategy;
    bool  _trialTreatmentApplied;
}

+ (bool)_isArtistItem:(id)arg1;
+ (bool)_isPlayableItem:(id)arg1;
+ (id)_itemIdsFromMediaEntities:(id)arg1;
+ (id)_performMediaCollectionsQuery:(id)arg1 limit:(unsigned long long)arg2 orderingProperties:(id)arg3 orderingDirectionMappings:(id)arg4;
+ (id)_performMediaItemsQuery:(id)arg1 limit:(unsigned long long)arg2 orderingProperties:(id)arg3 orderingDirectionMappings:(id)arg4;
+ (id)_rankedItemCacheFileWithDirectory:(id)arg1;
+ (id)_rankedItemIdsFromTopPlayables:(id)arg1 topArtists:(id)arg2 playableLimit:(unsigned long long)arg3 artistLimit:(unsigned long long)arg4;
+ (id)queryRecentMediaEntities;
+ (id)queryTopPlayableIds;

- (void).cxx_destruct;
- (void)_activateEnrolledTrialExperiments;
- (bool)_loadRankedItemCache;
- (id)_queryAndRankMediaItems;
- (bool)addDataset:(id)arg1;
- (bool)enumerateRankedItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)getActiveTrialExperimentIds;
- (id)initWithDatabase:(id)arg1 rankedItemCacheDirectory:(id)arg2;
- (id)initWithDatabase:(id)arg1 rankedItemCacheDirectory:(id)arg2 playableLimit:(unsigned long long)arg3 artistLimit:(unsigned long long)arg4 itemIdToRank:(id)arg5;
- (bool)refreshRankedItemCacheWithDataProtectionClass:(int)arg1;
- (bool)trialTreatmentApplied;

@end
