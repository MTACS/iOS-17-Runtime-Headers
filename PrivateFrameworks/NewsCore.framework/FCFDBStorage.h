
@interface FCFDBStorage : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cachedFeedItemOrders;
    NSMutableDictionary * _cachedFeedItems;
    NSMutableDictionary * _cachedFeeds;
    long long  _lastFeedLookupID;
    NSMutableSet * _modifiedFeedIDs;
    NSMutableSet * _modifiedFeedItemIDs;
    long long  _options;
    NSString * _path;
    NSMutableSet * _prunedFeedIDs;
    FCFDBPruningPolicy * _pruningPolicy;
    <FCFDBConnectionReadable> * _readDBConnection;
    NSObject<OS_dispatch_queue> * _saveQueue;
    <FCFDBConnectionWritable> * _writeDBConnection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSMutableDictionary *cachedFeedItemOrders;
@property (nonatomic, readonly) NSMutableDictionary *cachedFeedItems;
@property (nonatomic, readonly) NSMutableDictionary *cachedFeeds;
@property (nonatomic) long long lastFeedLookupID;
@property (nonatomic, readonly) NSMutableSet *modifiedFeedIDs;
@property (nonatomic, readonly) NSMutableSet *modifiedFeedItemIDs;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) NSMutableSet *prunedFeedIDs;
@property (nonatomic, readonly) FCFDBPruningPolicy *pruningPolicy;
@property (nonatomic, readonly) <FCFDBConnectionReadable> *readDBConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *saveQueue;
@property (nonatomic, retain) <FCFDBConnectionWritable> *writeDBConnection;

- (void).cxx_destruct;
- (long long)_feedLookupIDForFeedID:(id)arg1;
- (id)_pruneFeedsIfNeeded:(id)arg1;
- (id)accessQueue;
- (void)accessWithBlock:(id /* block */)arg1;
- (id)cachedFeedItemOrders;
- (id)cachedFeedItems;
- (id)cachedFeeds;
- (id)feedForFeedID:(id)arg1;
- (id)feedItemsForFeedIDs:(id)arg1 feedRange:(id)arg2 feature:(id)arg3 maxCount:(unsigned long long)arg4;
- (id)feedsForFeedIDs:(id)arg1;
- (void)flushChanges;
- (id)initTransientWithOptions:(long long)arg1;
- (id)initWithFileURL:(id)arg1 options:(long long)arg2;
- (id)initWithFileURL:(id)arg1 options:(long long)arg2 pruningPolicy:(id)arg3;
- (id)initWithPath:(id)arg1 options:(long long)arg2 pruningPolicy:(id)arg3;
- (void)insertFeedItems:(id)arg1;
- (long long)lastFeedLookupID;
- (id)modifiedFeedIDs;
- (id)modifiedFeedItemIDs;
- (long long)options;
- (id)path;
- (id)prunedFeedIDs;
- (id)pruningPolicy;
- (id)readDBConnection;
- (id)saveQueue;
- (void)setLastFeedLookupID:(long long)arg1;
- (void)setWriteDBConnection:(id)arg1;
- (void)updateFeedID:(id)arg1 refreshedFromOrder:(unsigned long long)arg2 refreshedToOrder:(unsigned long long)arg3 fetchedRange:(id)arg4;
- (id)writeDBConnection;

@end
