
@interface _NSHSTSStorage : NSObject {
    struct _CFHSTSPolicy { } * _policy;
}

@property (readonly) struct _CFHSTSPolicy { }*_policyRef;
@property (nonatomic, readonly) NSURL *path;

+ (id)sharedPersistentStore;

- (struct _CFHSTSPolicy { }*)_policyRef;
- (void)dealloc;
- (void)handleSTSHeader:(id)arg1 forURL:(id)arg2;
- (id)initInMemoryStore;
- (id)initPersistentStoreWithURL:(id)arg1;
- (id)nonPreloadedHosts;
- (id)path;
- (void)resetHSTSForHost:(id)arg1;
- (void)resetHSTSHostsSinceDate:(id)arg1;
- (bool)shouldPromoteHostToHTTPS:(id)arg1;

@end
