
@interface PPSocialHighlightCache : NSObject {
    PPSQLDatabase * _db;
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)init;

@end
