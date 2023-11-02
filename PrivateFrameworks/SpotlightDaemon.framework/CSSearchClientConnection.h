
@interface CSSearchClientConnection : NSObject {
    SDConnectionConfiguration * _configuration;
    _Atomic unsigned int  _outBatchCount;
    NSMutableOrderedSet * _pausedTasks;
    NSMutableDictionary * _queryTasks;
}

@property (nonatomic, retain) SDConnectionConfiguration *configuration;
@property (nonatomic, readonly) unsigned int outBatchCount;
@property (nonatomic, retain) NSMutableOrderedSet *pausedTasks;
@property (nonatomic, retain) NSMutableDictionary *queryTasks;

- (void).cxx_destruct;
- (void)_didReceiveResultsBatchCompletion;
- (void)_willSendResultsBatch:(id)arg1 qid:(long long)arg2;
- (id)allowedBundleIDs;
- (id)bundleID;
- (void)cancelQueryTask:(long long)arg1;
- (void)cancelQueryTask:(long long)arg1 wasCanceledByClient:(bool)arg2;
- (void)cancelQueryTasks;
- (id)configuration;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnectionConfiguration:(id)arg1;
- (unsigned int)outBatchCount;
- (void)overrideMailHitCounts:(id)arg1;
- (id)pausedTasks;
- (void)pollResultsForQueryTask:(long long)arg1;
- (id)protectionClass;
- (id)queryTask:(long long)arg1;
- (id)queryTasks;
- (bool)searchInternal;
- (void)setConfiguration:(id)arg1;
- (void)setPausedTasks:(id)arg1;
- (void)setQueryTask:(id)arg1 forQueryID:(long long)arg2;
- (void)setQueryTasks:(id)arg1;

@end
