
@interface WFDatabaseResult : NSObject {
    NSNumber * _cachedCount;
    WFDatabase * _database;
    NSArray * _descriptors;
    NSError * _fetchError;
    NSHashTable * _observersTable;
    NSObject<OS_dispatch_queue> * _queue;
    NSPredicate * _searchPredicate;
    WFDatabaseResultState * _state;
    NSArray * _staticDescriptors;
}

@property (nonatomic, retain) NSNumber *cachedCount;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) WFDatabase *database;
@property (nonatomic, retain) NSArray *descriptors;
@property (nonatomic, retain) NSError *fetchError;
@property (nonatomic, readonly) NSArray *observers;
@property (nonatomic, readonly) NSHashTable *observersTable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSPredicate *searchPredicate;
@property (nonatomic, retain) WFDatabaseResultState *state;
@property (nonatomic, readonly) NSArray *staticDescriptors;

+ (id)callbackQueue;

- (void).cxx_destruct;
- (id)_init;
- (id)cachedCount;
- (unsigned long long)count;
- (id)database;
- (id)description;
- (id)descriptors;
- (id)fetchError;
- (id)init;
- (id)initWithStaticDescriptors:(id)arg1;
- (id)observers;
- (id)observersTable;
- (id)queue;
- (void)registerObserver:(id)arg1;
- (void)reset;
- (id)searchPredicate;
- (void)setCachedCount:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDescriptors:(id)arg1;
- (void)setFetchError:(id)arg1;
- (void)setSearchPredicate:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (id)staticDescriptors;
- (void)unregisterObserver:(id)arg1;
- (id)unsearchedDescriptorsWithError:(id*)arg1;
- (void)updateDescriptorsAndNotify:(id)arg1 state:(id)arg2;

@end
