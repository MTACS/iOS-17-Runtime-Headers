
@interface PRSCoreDuet : NSObject {
    _DKKnowledgeStore * _knowledgeStore;
    _DKEventStream * _spotlightStream;
}

@property (retain) _DKKnowledgeStore *knowledgeStore;
@property (retain) _DKEventStream *spotlightStream;

- (void).cxx_destruct;
- (void)addResultCategoryAndGroupToHistory:(id)arg1 groupName:(id)arg2 error:(id)arg3;
- (id)getRankedCategoriesDictionaryWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2;
- (id)initWithStreamName:(id)arg1;
- (id)knowledgeStore;
- (void)setKnowledgeStore:(id)arg1;
- (void)setSpotlightStream:(id)arg1;
- (id)spotlightStream;

@end
