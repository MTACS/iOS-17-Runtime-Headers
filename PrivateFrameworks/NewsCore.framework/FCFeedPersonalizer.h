
@interface FCFeedPersonalizer : NSObject <FCFeedPersonalizing> {
    FCPersonalizationTreatment * _personalizationTreatment;
    <FCReadonlyPersonalizationAggregateStore> * _readonlyPersonalizationAggregateStore;
    <FCTodayPrivateData> * _todayData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) FCPersonalizationTreatment *personalizationTreatment;
@property (nonatomic, retain) <FCReadonlyPersonalizationAggregateStore> *readonlyPersonalizationAggregateStore;
@property (readonly) Class superclass;
@property (nonatomic, copy) <FCTodayPrivateData> *todayData;

- (void).cxx_destruct;
- (id)_userProfile;
- (double)decayedPublisherDiversificationPenalty;
- (id)initWithPersonalizationTreatment:(id)arg1 readonlyPersonalizationAggregateStore:(id)arg2 todayData:(id)arg3;
- (id)limitItemsByFlowRate:(id)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (id)limitItemsByMinimumItemQuality:(id)arg1;
- (id)personalizationTreatment;
- (void)prepareFavoritesWithCompletionHandler:(id /* block */)arg1;
- (void)prepareForUseWithCompletionHandler:(id /* block */)arg1;
- (id)rankTagIDsDescending:(id)arg1;
- (id)readonlyPersonalizationAggregateStore;
- (id)scoresForTagIDs:(id)arg1;
- (void)setPersonalizationTreatment:(id)arg1;
- (void)setReadonlyPersonalizationAggregateStore:(id)arg1;
- (void)setTodayData:(id)arg1;
- (id)sortItems:(id)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
- (id)todayData;
- (unsigned long long)whitelistLevelForTagID:(id)arg1;

@end
