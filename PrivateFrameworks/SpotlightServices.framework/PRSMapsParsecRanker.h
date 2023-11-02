
@interface PRSMapsParsecRanker : NSObject {
    bool  _entityRelevanceEnabled;
    double  _entityRelevanceThreshold;
    IQFMapsPersonalizationRanker * _iqfRanker;
    double  _lastVisitDaysThreshold;
    bool  _rankerEnabled;
    double  _visitCountGivenLocationThreshold;
    double  _visitCountThreshold;
}

+ (id)sharedMapsParsecRanker;

- (void).cxx_destruct;
- (void)_emitRerankNotNeededSignpost;
- (void)_emitRerankSuccessfulSignpost;
- (void)_logTriggerIfNecessary:(id)arg1 queryId:(long long)arg2;
- (id)_parseMUIDFromResultIdentifier:(id)arg1;
- (id)_rerankMapsResults:(id)arg1 withRankedEvents:(id)arg2 withMuidToResultIndex:(id)arg3;
- (id)_tagSearchResults:(id)arg1 withTopMatchFromEvents:(id)arg2 muidToResultIndex:(id)arg3;
- (id)init;
- (id)initWithRankerEnabled:(bool)arg1 visitCountThreshold:(double)arg2 visitCountGivenLocationThreshold:(double)arg3 lastVisitDaysThreshold:(double)arg4 entityRelevanceThreshold:(double)arg5 enableEntityRelevance:(bool)arg6;
- (bool)isResultCandidateForPromotion:(id)arg1;
- (id)rerankMapsResultsWithLocalSignals:(id)arg1 forQueryId:(long long)arg2;

@end
