
@interface MCMChildParentMapCache : NSObject <MCMChildParentMapCache, MCMSQLiteDBCodeSigningPeerageDelegate> {
    NSMutableDictionary * _cache;
    MCMSQLiteDB * _db;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NSMutableDictionary *cache;
@property (nonatomic, readonly) MCMSQLiteDB *db;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cache;
- (id)childBundleIdentifiersForParentIdentifier:(id)arg1;
- (void)codeSigningDB:(id)arg1 addChildIdentifier:(id)arg2 forParentIdentifier:(id)arg3;
- (void)codeSigningDB:(id)arg1 removeParentIdentifier:(id)arg2;
- (id)db;
- (id)initWithDB:(id)arg1 queue:(id)arg2;
- (id)parentIdentifierForChildIdentifier:(id)arg1;
- (id)queue;

@end
