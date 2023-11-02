
@interface SSBullseyeTopHitsManager : NSObject {
    NSDictionary * _categoryToResultMapping;
    bool  _haveBullseyeTopHitSection;
    long long  _initiallyHiddenSectionSentCount;
    long long  _initiallyVisibleSectionSentCount;
    SPSearchQueryContext * _queryContext;
    long long  _queryID;
    PRSRankingItemRanker * _ranker;
    SFMutableResultSection * _topHitSection;
}

+ (id)dedupeWebURLSuggestionsFromSections:(id)arg1;

- (void).cxx_destruct;
- (id)bullseyeSectionForTopHit:(id)arg1 initiallyHidden:(bool)arg2 checkForTopHit:(bool)arg3 thresholdCounter:(int)arg4;
- (id)bullseyeTopHitSection;
- (id)bullseyeTopHitSections:(id)arg1 maxTopHitsCount:(int)arg2 minThresholdForBigResult:(double)arg3 needExceptionForSafariSection:(bool)arg4;
- (id)initWithQueryId:(long long)arg1 categoryToResultMapping:(id)arg2 currentTopHitSection:(id)arg3 queryContext:(id)arg4 ranker:(id)arg5;
- (void)logTopHit:(int)arg1 forResult:(id)arg2 withReasonString:(id)arg3 isClassicRule:(bool)arg4;
- (void)logTopHit:(int)arg1 forResult:(id)arg2 withReasonType:(int)arg3 isClassicRule:(bool)arg4;
- (void)resetVisibilityCounts;
- (int)setTopHit:(int)arg1 forResult:(id)arg2 withReasonString:(id)arg3 isClassicRule:(bool)arg4;
- (int)setTopHit:(int)arg1 forResult:(id)arg2 withReasonType:(int)arg3 isClassicRule:(bool)arg4 setReason:(bool)arg5;
- (id)stringFromTopHit:(int)arg1;
- (id)stringFromTopHitReasonType:(int)arg1;
- (id)tagOrFilterHiddenSectionsForClient:(id)arg1 isCommittedSearch:(bool)arg2 maxVisibleSections:(long long)arg3 maxTopHitsCount:(int)arg4 minThresholdForBigResult:(double)arg5 topHitSection:(id*)arg6;

@end
