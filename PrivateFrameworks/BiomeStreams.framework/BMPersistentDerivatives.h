
@interface BMPersistentDerivatives : BMBookmarkablePublisher {
    BMSQLStoreManager * _manager;
    NSString * _streamName;
    NSString * _tableName;
    BPSPublisher * _upstream;
    NSURL * _url;
}

@property (nonatomic, retain) BMSQLStoreManager *manager;
@property (nonatomic, readonly) NSString *streamName;
@property (nonatomic, readonly) NSString *tableName;
@property (nonatomic, readonly) BPSPublisher *upstream;
@property (nonatomic, readonly) NSURL *url;

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (void).cxx_destruct;
- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (id)init;
- (id)initWithUpstream:(id)arg1 derivativeDatabaseURL:(id)arg2 derivedTableName:(id)arg3;
- (id)manager;
- (id)nextEvent;
- (void)reset;
- (void)setManager:(id)arg1;
- (id)startWithSubscriber:(id)arg1;
- (id)streamName;
- (void)subscribe:(id)arg1;
- (id)tableName;
- (id)upstream;
- (id)upstreamPublishers;
- (id)url;

@end
