
@interface SOPublisherCache : NSObject {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)publisherForSnapshotType:(Class)arg1;
- (void)removePublisherForSnapshotType:(Class)arg1;
- (void)setPublisher:(id)arg1 forSnapshotType:(Class)arg2;

@end
