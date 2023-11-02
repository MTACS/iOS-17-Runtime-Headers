
@interface FCFeedDatabase : NSObject <FCFeedDatabaseProtocol> {
    long long  _endpoint;
    NSObject<OS_dispatch_queue> * _initQueue;
    NSURL * _parentDirectoryURL;
    FCFDBStorage * _storage;
    long long  _usage;
    unsigned short  _version;
}

@property (nonatomic, readonly) long long endpoint;
@property (nonatomic, readonly, copy) NSURL *parentDirectoryURL;
@property (nonatomic, readonly) long long usage;
@property (nonatomic, readonly) unsigned short version;

+ (id)temporaryFeedDatabaseWithEndpoint:(long long)arg1;

- (void).cxx_destruct;
- (long long)endpoint;
- (id)initWithParentDirectoryURL:(id)arg1 usage:(long long)arg2 endpoint:(long long)arg3;
- (id)parentDirectoryURL;
- (void)prewarm;
- (void)saveWithCompletionHandler:(id /* block */)arg1;
- (void)t_insertSegmentForFeedID:(id)arg1 range:(id)arg2 items:(id)arg3;
- (id)t_lookupFeedID:(id)arg1 range:(id)arg2 maxCount:(unsigned long long)arg3;
- (void)teardown;
- (long long)usage;
- (unsigned short)version;

@end
