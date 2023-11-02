
@interface NSXPCStoreServerPerConnectionCache : NSObject {
    NSString * _clientIdentifier;
    long long  _connections;
    NSPersistentStoreCoordinator * _coordinator;
    NSMutableDictionary * _generationTokenMap;
    NSSQLitePrefetchRequestCache * _prefetchRequestCache;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;

- (id)coordinator;
- (void)dealloc;
- (id)initWithCoordinator:(id)arg1;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;

@end
