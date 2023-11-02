
@interface _GEOConfigDBOperationQueue : NSObject {
    GEOSQLiteDB * _db;
    geo_isolater * _isolator;
    NSMutableArray * _operations;
    NSObject<OS_dispatch_source> * _timer;
}

- (void).cxx_destruct;
- (void)cancelTimer;
- (void)dealloc;
- (void)enqueueOperation:(id)arg1;
- (void)flush;
- (void)flushOnDBQueue;
- (id)init:(id)arg1;
- (void)scheduleTimer;

@end
