
@interface _CDIntentSpotlightIndex : NSObject <_DKKnowledgeStorageEventNotificationDelegate> {
    NSObject<OS_dispatch_queue> * _activityQueue;
    unsigned long long  _batchSize;
    id /* block */  _completion;
    double  _delay;
    bool  _includeAdditions;
    _CDSpotlightEventIndexer * _indexer;
    _DKKnowledgeStorage * _storage;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *activityQueue;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) double delay;
@property (nonatomic) bool includeAdditions;
@property (nonatomic, readonly) _CDSpotlightEventIndexer *indexer;
@property (nonatomic, readonly) _DKKnowledgeStorage *storage;

- (void).cxx_destruct;
- (id)activityQueue;
- (unsigned long long)batchSize;
- (id /* block */)completion;
- (void)dealloc;
- (double)delay;
- (bool)includeAdditions;
- (id)indexer;
- (id)initWithKnowledgeStorage:(id)arg1;
- (void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;
- (void)setActivityQueue:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDelay:(double)arg1;
- (void)setIncludeAdditions:(bool)arg1;
- (id)storage;
- (void)triggerIndexIncludingAdditions:(bool)arg1 completion:(id /* block */)arg2;

@end
